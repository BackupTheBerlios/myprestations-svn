/****************************************************************************
** Meta object code from reading C++ file 'nouvproj.h'
**
** Created: Sat 6. Sep 12:43:44 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../nouvproj.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'nouvproj.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_nouvprojdlg[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x08,
      28,   12,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_nouvprojdlg[] = {
    "nouvprojdlg\0\0OnOkBtnClick()\0"
    "OnCancelBtnClick()\0"
};

const QMetaObject nouvprojdlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_nouvprojdlg,
      qt_meta_data_nouvprojdlg, 0 }
};

const QMetaObject *nouvprojdlg::metaObject() const
{
    return &staticMetaObject;
}

void *nouvprojdlg::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_nouvprojdlg))
        return static_cast<void*>(const_cast< nouvprojdlg*>(this));
    if (!strcmp(_clname, "Ui::NPDialog"))
        return static_cast< Ui::NPDialog*>(const_cast< nouvprojdlg*>(this));
    return QDialog::qt_metacast(_clname);
}

int nouvprojdlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: OnOkBtnClick(); break;
        case 1: OnCancelBtnClick(); break;
        }
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
