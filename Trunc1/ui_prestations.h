/********************************************************************************
** Form generated from reading ui file 'prestation.ui'
**
** Created: Tue 2. Sep 20:21:28 2008
**      by: Qt User Interface Compiler version 4.4.1
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_PRESTATION_H
#define UI_PRESTATION_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDateEdit>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QLCDNumber>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QFrame *frame;
    QComboBox *comboBox;
    QPushButton *pushButton;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLabel *label_4;
    QDateEdit *dateEdit;
    QLabel *label_2;
    QLabel *label;
    QPushButton *pushButton_2;
    QComboBox *comboBox_2;
    QPushButton *pushButton_3;
    QTableWidget *tableWidget;
    QFrame *frame_2;
    QPushButton *pushButton_6;
    QLCDNumber *lcdNumber;
    QPushButton *pushButton_5;
    QPushButton *pushButton_4;
    QLCDNumber *lcdNumber_2;
    QLCDNumber *lcdNumber_3;
    QLCDNumber *lcdNumber_4;
    QLCDNumber *lcdNumber_5;
    QLCDNumber *lcdNumber_6;

    void setupUi(QDialog *Dialog)
    {
    if (Dialog->objectName().isEmpty())
        Dialog->setObjectName(QString::fromUtf8("Dialog"));
    Dialog->resize(784, 624);
    frame = new QFrame(Dialog);
    frame->setObjectName(QString::fromUtf8("frame"));
    frame->setGeometry(QRect(10, 490, 401, 121));
    frame->setFrameShape(QFrame::Box);
    frame->setFrameShadow(QFrame::Raised);
    comboBox = new QComboBox(frame);
    comboBox->setObjectName(QString::fromUtf8("comboBox"));
    comboBox->setGeometry(QRect(7, 63, 377, 20));
    comboBox->setEditable(true);
    comboBox->setModelColumn(0);
    pushButton = new QPushButton(frame);
    pushButton->setObjectName(QString::fromUtf8("pushButton"));
    pushButton->setGeometry(QRect(10, 90, 377, 25));
    label_3 = new QLabel(frame);
    label_3->setObjectName(QString::fromUtf8("label_3"));
    label_3->setGeometry(QRect(108, 14, 138, 16));
    lineEdit = new QLineEdit(frame);
    lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
    lineEdit->setGeometry(QRect(108, 34, 138, 20));
    label_4 = new QLabel(frame);
    label_4->setObjectName(QString::fromUtf8("label_4"));
    label_4->setGeometry(QRect(8, 15, 83, 16));
    dateEdit = new QDateEdit(frame);
    dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
    dateEdit->setGeometry(QRect(8, 35, 83, 19));
    dateEdit->setDate(QDate(2008, 8, 26));
    label_2 = new QLabel(Dialog);
    label_2->setObjectName(QString::fromUtf8("label_2"));
    label_2->setGeometry(QRect(50, 470, 101, 14));
    label = new QLabel(Dialog);
    label->setObjectName(QString::fromUtf8("label"));
    label->setGeometry(QRect(10, 470, 46, 14));
    pushButton_2 = new QPushButton(Dialog);
    pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
    pushButton_2->setGeometry(QRect(680, 590, 91, 25));
    comboBox_2 = new QComboBox(Dialog);
    comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
    comboBox_2->setGeometry(QRect(10, 20, 651, 22));
    pushButton_3 = new QPushButton(Dialog);
    pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
    pushButton_3->setGeometry(QRect(670, 20, 101, 23));
    tableWidget = new QTableWidget(Dialog);
    if (tableWidget->columnCount() < 3)
        tableWidget->setColumnCount(3);
    tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
    tableWidget->setGeometry(QRect(10, 50, 761, 411));
    tableWidget->setRowCount(0);
    tableWidget->setColumnCount(3);
    frame_2 = new QFrame(Dialog);
    frame_2->setObjectName(QString::fromUtf8("frame_2"));
    frame_2->setGeometry(QRect(420, 490, 151, 121));
    frame_2->setFrameShape(QFrame::Box);
    frame_2->setFrameShadow(QFrame::Raised);
    pushButton_6 = new QPushButton(frame_2);
    pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
    pushButton_6->setEnabled(false);
    pushButton_6->setGeometry(QRect(10, 90, 91, 23));
    lcdNumber = new QLCDNumber(frame_2);
    lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
    lcdNumber->setGeometry(QRect(122, 46, 20, 31));
    lcdNumber->setAutoFillBackground(false);
    lcdNumber->setFrameShape(QFrame::Box);
    lcdNumber->setFrameShadow(QFrame::Raised);
    lcdNumber->setSmallDecimalPoint(false);
    lcdNumber->setNumDigits(1);
    lcdNumber->setMode(QLCDNumber::Dec);
    lcdNumber->setSegmentStyle(QLCDNumber::Filled);
    lcdNumber->setProperty("value", QVariant(2));
    lcdNumber->setProperty("intValue", QVariant(2));
    pushButton_5 = new QPushButton(frame_2);
    pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
    pushButton_5->setEnabled(false);
    pushButton_5->setGeometry(QRect(102, 10, 41, 23));
    pushButton_4 = new QPushButton(frame_2);
    pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
    pushButton_4->setGeometry(QRect(10, 10, 41, 23));
    lcdNumber_2 = new QLCDNumber(frame_2);
    lcdNumber_2->setObjectName(QString::fromUtf8("lcdNumber_2"));
    lcdNumber_2->setGeometry(QRect(102, 46, 20, 31));
    lcdNumber_2->setAutoFillBackground(false);
    lcdNumber_2->setFrameShape(QFrame::Box);
    lcdNumber_2->setFrameShadow(QFrame::Raised);
    lcdNumber_2->setSmallDecimalPoint(false);
    lcdNumber_2->setNumDigits(1);
    lcdNumber_2->setMode(QLCDNumber::Dec);
    lcdNumber_2->setSegmentStyle(QLCDNumber::Filled);
    lcdNumber_2->setProperty("value", QVariant(2));
    lcdNumber_2->setProperty("intValue", QVariant(2));
    lcdNumber_3 = new QLCDNumber(frame_2);
    lcdNumber_3->setObjectName(QString::fromUtf8("lcdNumber_3"));
    lcdNumber_3->setGeometry(QRect(76, 46, 20, 31));
    lcdNumber_3->setAutoFillBackground(false);
    lcdNumber_3->setFrameShape(QFrame::Box);
    lcdNumber_3->setFrameShadow(QFrame::Raised);
    lcdNumber_3->setSmallDecimalPoint(false);
    lcdNumber_3->setNumDigits(1);
    lcdNumber_3->setMode(QLCDNumber::Dec);
    lcdNumber_3->setSegmentStyle(QLCDNumber::Filled);
    lcdNumber_3->setProperty("value", QVariant(2));
    lcdNumber_3->setProperty("intValue", QVariant(2));
    lcdNumber_4 = new QLCDNumber(frame_2);
    lcdNumber_4->setObjectName(QString::fromUtf8("lcdNumber_4"));
    lcdNumber_4->setGeometry(QRect(56, 46, 20, 31));
    lcdNumber_4->setAutoFillBackground(false);
    lcdNumber_4->setFrameShape(QFrame::Box);
    lcdNumber_4->setFrameShadow(QFrame::Raised);
    lcdNumber_4->setSmallDecimalPoint(false);
    lcdNumber_4->setNumDigits(1);
    lcdNumber_4->setMode(QLCDNumber::Dec);
    lcdNumber_4->setSegmentStyle(QLCDNumber::Filled);
    lcdNumber_4->setProperty("value", QVariant(2));
    lcdNumber_4->setProperty("intValue", QVariant(2));
    lcdNumber_5 = new QLCDNumber(frame_2);
    lcdNumber_5->setObjectName(QString::fromUtf8("lcdNumber_5"));
    lcdNumber_5->setGeometry(QRect(30, 46, 20, 31));
    lcdNumber_5->setAutoFillBackground(false);
    lcdNumber_5->setFrameShape(QFrame::Box);
    lcdNumber_5->setFrameShadow(QFrame::Raised);
    lcdNumber_5->setSmallDecimalPoint(false);
    lcdNumber_5->setNumDigits(1);
    lcdNumber_5->setMode(QLCDNumber::Dec);
    lcdNumber_5->setSegmentStyle(QLCDNumber::Filled);
    lcdNumber_5->setProperty("value", QVariant(2));
    lcdNumber_5->setProperty("intValue", QVariant(2));
    lcdNumber_6 = new QLCDNumber(frame_2);
    lcdNumber_6->setObjectName(QString::fromUtf8("lcdNumber_6"));
    lcdNumber_6->setGeometry(QRect(10, 46, 20, 31));
    lcdNumber_6->setAutoFillBackground(false);
    lcdNumber_6->setFrameShape(QFrame::Box);
    lcdNumber_6->setFrameShadow(QFrame::Raised);
    lcdNumber_6->setSmallDecimalPoint(false);
    lcdNumber_6->setNumDigits(1);
    lcdNumber_6->setMode(QLCDNumber::Dec);
    lcdNumber_6->setSegmentStyle(QLCDNumber::Filled);
    lcdNumber_6->setProperty("value", QVariant(2));
    lcdNumber_6->setProperty("intValue", QVariant(2));

    retranslateUi(Dialog);

    QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
    Dialog->setWindowTitle(QApplication::translate("Dialog", "Prestation", 0, QApplication::UnicodeUTF8));
    pushButton->setText(QApplication::translate("Dialog", "Ajouter", 0, QApplication::UnicodeUTF8));
    label_3->setText(QApplication::translate("Dialog", "Dur\303\251e", 0, QApplication::UnicodeUTF8));
    label_4->setText(QApplication::translate("Dialog", "Date", 0, QApplication::UnicodeUTF8));
    dateEdit->setDisplayFormat(QApplication::translate("Dialog", "dd/MM/yyyy", 0, QApplication::UnicodeUTF8));
    label_2->setText(QApplication::translate("Dialog", "110 minutes", 0, QApplication::UnicodeUTF8));
    label->setText(QApplication::translate("Dialog", "Total :", 0, QApplication::UnicodeUTF8));
    pushButton_2->setText(QApplication::translate("Dialog", "Quitter", 0, QApplication::UnicodeUTF8));
    pushButton_3->setText(QApplication::translate("Dialog", "Nouveau projet", 0, QApplication::UnicodeUTF8));
    pushButton_6->setText(QApplication::translate("Dialog", "<< Envoyer", 0, QApplication::UnicodeUTF8));
    pushButton_5->setText(QApplication::translate("Dialog", "Actu", 0, QApplication::UnicodeUTF8));
    pushButton_4->setText(QApplication::translate("Dialog", "Start", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(Dialog);
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRESTATION_H
