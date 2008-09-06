#include "nouvproj.h"
nouvprojdlg::nouvprojdlg(QWidget *parent):QDialog(parent){
// Constructeur
setupUi(this);

connect(pushButton, SIGNAL(clicked()), this, SLOT(OnOkBtnClick()));
connect(pushButton_2, SIGNAL(clicked()), this, SLOT(OnCancelBtnClick()));

}
QString nouvprojdlg::projName(){
return lineEdit->text();
}


void nouvprojdlg::OnOkBtnClick(){
// On quitte en acceptant
accept();

}

void nouvprojdlg::OnCancelBtnClick(){
// On quitte en annulant
reject();

}
