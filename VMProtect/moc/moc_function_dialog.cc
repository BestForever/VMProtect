/****************************************************************************
** Meta object code from reading C++ file 'function_dialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../function_dialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'function_dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_FunctionDialog_t {
    QByteArrayData data[11];
    char stringdata0[153];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FunctionDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FunctionDialog_t qt_meta_stringdata_FunctionDialog = {
    {
QT_MOC_LITERAL(0, 0, 14), // "FunctionDialog"
QT_MOC_LITERAL(1, 15, 15), // "okButtonClicked"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 29), // "functionsTreeSelectionChanged"
QT_MOC_LITERAL(4, 62, 14), // "QItemSelection"
QT_MOC_LITERAL(5, 77, 8), // "selected"
QT_MOC_LITERAL(6, 86, 10), // "deselected"
QT_MOC_LITERAL(7, 97, 22), // "functionsFilterChanged"
QT_MOC_LITERAL(8, 120, 11), // "helpClicked"
QT_MOC_LITERAL(9, 132, 14), // "sectionClicked"
QT_MOC_LITERAL(10, 147, 5) // "index"

    },
    "FunctionDialog\0okButtonClicked\0\0"
    "functionsTreeSelectionChanged\0"
    "QItemSelection\0selected\0deselected\0"
    "functionsFilterChanged\0helpClicked\0"
    "sectionClicked\0index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FunctionDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08 /* Private */,
       3,    2,   40,    2, 0x08 /* Private */,
       7,    0,   45,    2, 0x08 /* Private */,
       8,    0,   46,    2, 0x08 /* Private */,
       9,    1,   47,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 4,    5,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,

       0        // eod
};

void FunctionDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FunctionDialog *_t = static_cast<FunctionDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->okButtonClicked(); break;
        case 1: _t->functionsTreeSelectionChanged((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        case 2: _t->functionsFilterChanged(); break;
        case 3: _t->helpClicked(); break;
        case 4: _t->sectionClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject FunctionDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_FunctionDialog.data,
      qt_meta_data_FunctionDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *FunctionDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FunctionDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_FunctionDialog.stringdata0))
        return static_cast<void*>(const_cast< FunctionDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int FunctionDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
