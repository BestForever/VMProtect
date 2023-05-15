/****************************************************************************
** Meta object code from reading C++ file 'license_dialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../license_dialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'license_dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_LicenseDialog_t {
    QByteArrayData data[13];
    char stringdata0[192];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LicenseDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LicenseDialog_t qt_meta_stringdata_LicenseDialog = {
    {
QT_MOC_LITERAL(0, 0, 13), // "LicenseDialog"
QT_MOC_LITERAL(1, 14, 15), // "okButtonClicked"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 11), // "nameChanged"
QT_MOC_LITERAL(4, 43, 12), // "emailChanged"
QT_MOC_LITERAL(5, 56, 17), // "serialNameChanged"
QT_MOC_LITERAL(6, 74, 18), // "serialEmailChanged"
QT_MOC_LITERAL(7, 93, 11), // "HWIDChanged"
QT_MOC_LITERAL(8, 105, 21), // "expirationDateChanged"
QT_MOC_LITERAL(9, 127, 16), // "timeLimitChanged"
QT_MOC_LITERAL(10, 144, 19), // "maxBuildDateChanged"
QT_MOC_LITERAL(11, 164, 15), // "userDataChanged"
QT_MOC_LITERAL(12, 180, 11) // "helpClicked"

    },
    "LicenseDialog\0okButtonClicked\0\0"
    "nameChanged\0emailChanged\0serialNameChanged\0"
    "serialEmailChanged\0HWIDChanged\0"
    "expirationDateChanged\0timeLimitChanged\0"
    "maxBuildDateChanged\0userDataChanged\0"
    "helpClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LicenseDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x08 /* Private */,
       3,    0,   70,    2, 0x08 /* Private */,
       4,    0,   71,    2, 0x08 /* Private */,
       5,    0,   72,    2, 0x08 /* Private */,
       6,    0,   73,    2, 0x08 /* Private */,
       7,    0,   74,    2, 0x08 /* Private */,
       8,    0,   75,    2, 0x08 /* Private */,
       9,    0,   76,    2, 0x08 /* Private */,
      10,    0,   77,    2, 0x08 /* Private */,
      11,    0,   78,    2, 0x08 /* Private */,
      12,    0,   79,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void LicenseDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LicenseDialog *_t = static_cast<LicenseDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->okButtonClicked(); break;
        case 1: _t->nameChanged(); break;
        case 2: _t->emailChanged(); break;
        case 3: _t->serialNameChanged(); break;
        case 4: _t->serialEmailChanged(); break;
        case 5: _t->HWIDChanged(); break;
        case 6: _t->expirationDateChanged(); break;
        case 7: _t->timeLimitChanged(); break;
        case 8: _t->maxBuildDateChanged(); break;
        case 9: _t->userDataChanged(); break;
        case 10: _t->helpClicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject LicenseDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_LicenseDialog.data,
      qt_meta_data_LicenseDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *LicenseDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LicenseDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_LicenseDialog.stringdata0))
        return static_cast<void*>(const_cast< LicenseDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int LicenseDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
