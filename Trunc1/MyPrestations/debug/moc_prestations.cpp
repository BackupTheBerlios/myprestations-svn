/****************************************************************************
** Meta object code from reading C++ file 'prestations.h'
**
** Created: Fri 5. Sep 16:27:35 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../prestations.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'prestations.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_prestation[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x08,
      32,   11,   11,   11, 0x08,
      52,   11,   11,   11, 0x08,
      70,   11,   11,   11, 0x08,
      88,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_prestation[] = {
    "prestation\0\0OnQuitterBtnClick()\0"
    "OnAjouterBtnClick()\0OnStartBtnClick()\0"
    "OnPauseBtnClick()\0OnEnvoyerBtnClick()\0"
};

const QMetaObject prestation::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_prestation,
      qt_meta_data_prestation, 0 }
};

const QMetaObject *prestation::metaObject() const
{
    return &staticMetaObject;
}

void *prestation::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_prestation))
        return static_cast<void*>(const_cast< prestation*>(this));
    if (!strcmp(_clname, "Ui::Dialog"))
        return static_cast< Ui::Dialog*>(const_cast< prestation*>(this));
    return QDialog::qt_metacast(_clname);
}

int prestation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: OnQuitterBtnClick(); break;
        case 1: OnAjouterBtnClick(); break;
        case 2: OnStartBtnClick(); break;
        case 3: OnPauseBtnClick(); break;
        case 4: OnEnvoyerBtnClick(); break;
        }
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
