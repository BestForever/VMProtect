/****************************************************************************
** Meta object code from reading C++ file 'templates_window.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../templates_window.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'templates_window.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_TemplatesWindow_t {
    QByteArrayData data[8];
    char stringdata0[98];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TemplatesWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TemplatesWindow_t qt_meta_stringdata_TemplatesWindow = {
    {
QT_MOC_LITERAL(0, 0, 15), // "TemplatesWindow"
QT_MOC_LITERAL(1, 16, 11), // "helpClicked"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 20), // "contextMenuRequested"
QT_MOC_LITERAL(4, 50, 1), // "p"
QT_MOC_LITERAL(5, 52, 10), // "delClicked"
QT_MOC_LITERAL(6, 63, 13), // "renameClicked"
QT_MOC_LITERAL(7, 77, 20) // "templateIndexChanged"

    },
    "TemplatesWindow\0helpClicked\0\0"
    "contextMenuRequested\0p\0delClicked\0"
    "renameClicked\0templateIndexChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TemplatesWindow[] = {

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
       3,    1,   40,    2, 0x08 /* Private */,
       5,    0,   43,    2, 0x08 /* Private */,
       6,    0,   44,    2, 0x08 /* Private */,
       7,    0,   45,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void TemplatesWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TemplatesWindow *_t = static_cast<TemplatesWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->helpClicked(); break;
        case 1: _t->contextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 2: _t->delClicked(); break;
        case 3: _t->renameClicked(); break;
        case 4: _t->templateIndexChanged(); break;
        default: ;
        }
    }
}

const QMetaObject TemplatesWindow::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_TemplatesWindow.data,
      qt_meta_data_TemplatesWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *TemplatesWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TemplatesWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_TemplatesWindow.stringdata0))
        return static_cast<void*>(const_cast< TemplatesWindow*>(this));
    return QDialog::qt_metacast(_clname);
}

int TemplatesWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
