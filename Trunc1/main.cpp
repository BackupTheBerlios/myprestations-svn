 #include <QApplication>
 #include <QDialog>
 
#include "prestations.h"


 #include "ui_prestations.h"


 int main(int argc, char *argv[])
 {
     
     QApplication app(argc, argv);
     prestation *dialog = new prestation;
     dialog->show();
     
     
     return app.exec();
 }
