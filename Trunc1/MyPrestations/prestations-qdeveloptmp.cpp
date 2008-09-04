#include <QtGui>
#include <QString>
#include <iostream>
#include <QFileInfo>
#include <QDir>
#include "prestations.h"
#include <QKeyEvent>





prestation::prestation(QWidget *parent):QDialog(parent)
{
	int durtot = 0;
	setupUi(this);
	
	lcdNumber->display(0);
	lcdNumber_2->display(0);
	lcdNumber_3->display(0);
	lcdNumber_4->display(0);
	lcdNumber_5->display(0);
	lcdNumber_6->display(0);
	
	connect(pushButton_2, SIGNAL(clicked()), this, SLOT(OnQuitterBtnClick()));
	connect(pushButton, SIGNAL(clicked()), this, SLOT(OnAjouterBtnClick()));
	connect(pushButton_4, SIGNAL(clicked()), this, SLOT(OnStartBtnClick()));
	connect(pushButton_5, SIGNAL(clicked()), this, SLOT(OnStopBtnClick()));
	connect(pushButton_6, SIGNAL(clicked()), this, SLOT(OnEnvoyerBtnClick()));
	connect(&UnThread, SIGNAL(pseudoclick()), this, SLOT(OnPauseBtnClick()));

	
	tableWidget->setHorizontalHeaderLabels(
	QStringList() << tr("date") << tr("duree") << tr("description"));
	dateEdit->setDate(QDate::currentDate());
	QFile file("prst.txt");
	if(!file.open(QIODevice::ReadOnly)){
		std::cerr << "ca merde";
	}
	QTextStream in(&file);
	int counter = 0;
	while (!in.atEnd()) {
		QString line = in.readLine();
		QStringList fields = line.split(' ');
		int row = tableWidget->rowCount();
		tableWidget->insertRow(row);
		QTableWidgetItem *item1 = new QTableWidgetItem;
		QTableWidgetItem *item2 = new QTableWidgetItem;
		QTableWidgetItem *item3 = new QTableWidgetItem;
		item1->setText(fields.takeFirst());
		QString c2 = fields.takeFirst();	
		item2->setText(c2);
		item3->setText(fields.join(" "));
		tableWidget->setItem(row,0, item1);
		tableWidget->setItem(row,1, item2);
		tableWidget->setItem(row,2, item3);
		durtot += c2.toInt();
		counter ++;
	}
	tableWidget->scrollToItem( tableWidget->item(0, 0 ),QAbstractItemView::EnsureVisible );
	tableWidget->resizeColumnsToContents();
	tableWidget->horizontalHeader()->setStretchLastSection(true);

	QString a;
	a = a.setNum(durtot);
	label_2->setText(a + " minutes");
}

void prestation::OnStartBtnClick(){
	dstart = QDateTime::currentDateTime();

	
	pushButton_4->setEnabled(false);
	pushButton_5->setEnabled(true);
	pushButton_6->setEnabled(false);
	
	
	UnThread.start();
	//a.wait();

	
	
}
void prestation::OnPauseBtnClick(){
	
	dstop = QDateTime::currentDateTime();
	int l1,l2, l3,l4, l5,l6;
	int nbrsec = dstart.secsTo(dstop);
	int h, m, s;
	//h = nbrsec/3600;
	//m = (nbrsec-(nbrsec/3600)*60)/60;
	//s = (nbrsec-((nbrsec-(nbrsec/3600)*60)/60)*60)/60;
	
	h = nbrsec/3600;
	m = (nbrsec % 3600)/60;
	s = (nbrsec % 3600)%60;
	
	l1= s-((s/10)*10);
	l2= s/10;
	l3= m-((m/10)*10);
	l4= m/10;
	l5= h-((h/10)*10);
	l6= h/10;

	
	lcdNumber->display((l1));
	lcdNumber_2->display((l2));
	lcdNumber_3->display((l3));
	lcdNumber_4->display((l4));
	lcdNumber_5->display((l5));
	lcdNumber_6->display((l6));
	
	pushButton_6->setEnabled(true);

	
}
void prestation::OnEnvoyerBtnClick(){
	QString a;
	a = a.setNum(dstart.secsTo(dstop)/60+1);
	lineEdit->setText(a);
	pushButton_4->setEnabled(true);
	pushButton_5->setEnabled(false);
	pushButton_6->setEnabled(true);
	UnThread.stop();
	lcdNumber->display(0);
	lcdNumber_2->display(0);
	lcdNumber_3->display(0);
	lcdNumber_4->display(0);
	lcdNumber_5->display(0);
	lcdNumber_6->display(0);
	
}


void prestation::OnAjouterBtnClick()
{	int row = tableWidget->rowCount();
	tableWidget->insertRow(row);
	
	QTableWidgetItem *item1 = new QTableWidgetItem;
	QTableWidgetItem *item2 = new QTableWidgetItem;
	QTableWidgetItem *item3 = new QTableWidgetItem;
	item1->setText(dateEdit->date().toString("dd/MM/yyyy"));
	item2->setText(lineEdit->text());
	item3->setText(comboBox->currentText());
	tableWidget->setItem(row,0, item1);
	tableWidget->setItem(row,1, item2);
	tableWidget->setItem(row,2, item3);
	
	tableWidget->scrollToItem( item1,QAbstractItemView::EnsureVisible );
	tableWidget->resizeColumnsToContents();
	tableWidget->horizontalHeader()->setStretchLastSection(true);

	// Une fois le tableau mis a jour
	// on fait un backup
	QFile file("prst.txt");
	QFileInfo fInfo = QFileInfo(file);
	QString fPath = fInfo.absoluteFilePath();
	QString fPath_ren = fPath;
	QDir LeDir = QDir(fInfo.absoluteDir());
	fPath_ren.chop(4);
	fPath_ren += ".bak";
	LeDir.rename(fPath, fPath_ren);
	
	if(!file.open(QIODevice::WriteOnly)){
	std::cerr << "ca merde";
	}
	QTextStream out(&file);
	
	for (int i =0; i <=row; i++){
		
		out << tableWidget->item(i, 0 )->text() << " ";
		out << tableWidget->item(i, 1 )->text() << " ";
		out << tableWidget->item(i, 2 )->text() << "\r\n"; 
	}
	
	
	



	// puis on réécrit le fichier avec le mise à jour 
}
void prestation::OnQuitterBtnClick()
{
 close();
}

//Capture de l'appuis sur escape pour empêcher la fermeture de la fenêtre par erreur

void prestation::keyPressEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_Escape) {
       // doEscape();
    } else {
        QDialog::keyPressEvent(event);
    }
}

 //void MainWindow::writeSettings()
 //{
     //QSettings settings("Trolltech", "Application Example");
     //settings.setValue("pos", pos());
     //settings.setValue("size", size());
 //}

//The writeSettings() function is called from closeEvent()
