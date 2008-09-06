#ifndef __NOUVPROJ_H__
#define __NOUVPROJ_H__

#include <QDialog>
#include "ui_nouvproj.h"


class nouvprojdlg : public QDialog, Ui::NPDialog
{
	Q_OBJECT
public:
	QString projName();
	nouvprojdlg(QWidget *parent = 0);
	//void keyPressEvent(QKeyEvent *event);
private slots:
	void OnOkBtnClick();
	void OnCancelBtnClick();

};


#endif // __NOUVPROJ_H__
