/********************************************************************************
** Form generated from reading ui file 'nouvproj.ui'
**
** Created: Sat 6. Sep 12:03:29 2008
**      by: Qt User Interface Compiler version 4.4.1
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_NOUVPROJ_H
#define UI_NOUVPROJ_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_NPDialog
{
public:
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *NPDialog)
    {
    if (NPDialog->objectName().isEmpty())
        NPDialog->setObjectName(QString::fromUtf8("NPDialog"));
    NPDialog->resize(222, 92);
    label = new QLabel(NPDialog);
    label->setObjectName(QString::fromUtf8("label"));
    label->setGeometry(QRect(10, 10, 77, 16));
    lineEdit = new QLineEdit(NPDialog);
    lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
    lineEdit->setGeometry(QRect(10, 30, 201, 20));
    pushButton = new QPushButton(NPDialog);
    pushButton->setObjectName(QString::fromUtf8("pushButton"));
    pushButton->setGeometry(QRect(60, 60, 71, 23));
    pushButton_2 = new QPushButton(NPDialog);
    pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
    pushButton_2->setGeometry(QRect(140, 60, 71, 23));

    retranslateUi(NPDialog);

    QMetaObject::connectSlotsByName(NPDialog);
    } // setupUi

    void retranslateUi(QDialog *NPDialog)
    {
    NPDialog->setWindowTitle(QApplication::translate("NPDialog", "Nouveau projet", 0, QApplication::UnicodeUTF8));
    label->setText(QApplication::translate("NPDialog", "Nom du projet", 0, QApplication::UnicodeUTF8));
    pushButton->setText(QApplication::translate("NPDialog", "OK", 0, QApplication::UnicodeUTF8));
    pushButton_2->setText(QApplication::translate("NPDialog", "Cancel", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(NPDialog);
    } // retranslateUi

};

namespace Ui {
    class NPDialog: public Ui_NPDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOUVPROJ_H
