#ifndef __PRESTATIONS_H__
#define __PRESTATIONS_H__

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
	void OnEnvoyerBtnClick();
};


#endif // __PRESTATIONS_H__
