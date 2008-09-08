#ifndef __PRESTATION_H__
#define __PRESTATION_H__

#include <QDialog>
#include "ui_prestations.h"
#include "MonThread.h"

class prestation : public QDialog, Ui::Dialog
{
	Q_OBJECT
public:
	QDateTime dstart;
	QDateTime dstop;
	prestation(QWidget *parent = 0);
	MonThread UnThread;
	void keyPressEvent(QKeyEvent *event);
private slots:
	void OnQuitterBtnClick();
	void OnAjouterBtnClick();
	void OnStartBtnClick();
	void OnPauseBtnClick();
	void OnPseudoClick();
	
	void OnEnvoyerBtnClick();
	void OnProjectChange( QString ProjName);
	void OnNouveauProjetBtnClick();
private:
	QStringList searchProjects();
	void LoadProject(QString projectName);
	void SaveProject(QString projectName);
	void CreateProject(QString projectName);
	
	
};


#endif // __PRESTATION_H__
