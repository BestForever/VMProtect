/****************************************************************************
** Meta object code from reading C++ file 'watermarks_window.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../watermarks_window.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'watermarks_window.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_WatermarksWindow_t {
    QByteArrayData data[23];
    char stringdata0[343];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WatermarksWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WatermarksWindow_t qt_meta_stringdata_WatermarksWindow = {
    {
QT_MOC_LITERAL(0, 0, 16), // "WatermarksWindow"
QT_MOC_LITERAL(1, 17, 10), // "addClicked"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 10), // "delClicked"
QT_MOC_LITERAL(4, 40, 13), // "renameClicked"
QT_MOC_LITERAL(5, 54, 12), // "blockClicked"
QT_MOC_LITERAL(6, 67, 22), // "watermarkSearchChanged"
QT_MOC_LITERAL(7, 90, 21), // "watermarkIndexChanged"
QT_MOC_LITERAL(8, 112, 17), // "itemDoubleClicked"
QT_MOC_LITERAL(9, 130, 5), // "index"
QT_MOC_LITERAL(10, 136, 15), // "okButtonClicked"
QT_MOC_LITERAL(11, 152, 17), // "scanButtonClicked"
QT_MOC_LITERAL(12, 170, 20), // "watermarkNodeUpdated"
QT_MOC_LITERAL(13, 191, 12), // "ProjectNode*"
QT_MOC_LITERAL(14, 204, 4), // "node"
QT_MOC_LITERAL(15, 209, 20), // "watermarkNodeRemoved"
QT_MOC_LITERAL(16, 230, 17), // "fileButtonClicked"
QT_MOC_LITERAL(17, 248, 20), // "processButtonClicked"
QT_MOC_LITERAL(18, 269, 19), // "processEditDropDown"
QT_MOC_LITERAL(19, 289, 18), // "processEditChanged"
QT_MOC_LITERAL(20, 308, 20), // "contextMenuRequested"
QT_MOC_LITERAL(21, 329, 1), // "p"
QT_MOC_LITERAL(22, 331, 11) // "helpClicked"

    },
    "WatermarksWindow\0addClicked\0\0delClicked\0"
    "renameClicked\0blockClicked\0"
    "watermarkSearchChanged\0watermarkIndexChanged\0"
    "itemDoubleClicked\0index\0okButtonClicked\0"
    "scanButtonClicked\0watermarkNodeUpdated\0"
    "ProjectNode*\0node\0watermarkNodeRemoved\0"
    "fileButtonClicked\0processButtonClicked\0"
    "processEditDropDown\0processEditChanged\0"
    "contextMenuRequested\0p\0helpClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WatermarksWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   99,    2, 0x08 /* Private */,
       3,    0,  100,    2, 0x08 /* Private */,
       4,    0,  101,    2, 0x08 /* Private */,
       5,    0,  102,    2, 0x08 /* Private */,
       6,    0,  103,    2, 0x08 /* Private */,
       7,    0,  104,    2, 0x08 /* Private */,
       8,    1,  105,    2, 0x08 /* Private */,
      10,    0,  108,    2, 0x08 /* Private */,
      11,    0,  109,    2, 0x08 /* Private */,
      12,    1,  110,    2, 0x08 /* Private */,
      15,    1,  113,    2, 0x08 /* Private */,
      16,    0,  116,    2, 0x08 /* Private */,
      17,    0,  117,    2, 0x08 /* Private */,
      18,    0,  118,    2, 0x08 /* Private */,
      19,    0,  119,    2, 0x08 /* Private */,
      20,    1,  120,    2, 0x08 /* Private */,
      22,    0,  123,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,   21,
    QMetaType::Void,

       0        // eod
};

void WatermarksWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WatermarksWindow *_t = static_cast<WatermarksWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addClicked(); break;
        case 1: _t->delClicked(); break;
        case 2: _t->renameClicked(); break;
        case 3: _t->blockClicked(); break;
        case 4: _t->watermarkSearchChanged(); break;
        case 5: _t->watermarkIndexChanged(); break;
        case 6: _t->itemDoubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 7: _t->okButtonClicked(); break;
        case 8: _t->scanButtonClicked(); break;
        case 9: _t->watermarkNodeUpdated((*reinterpret_cast< ProjectNode*(*)>(_a[1]))); break;
        case 10: _t->watermarkNodeRemoved((*reinterpret_cast< ProjectNode*(*)>(_a[1]))); break;
        case 11: _t->fileButtonClicked(); break;
        case 12: _t->processButtonClicked(); break;
        case 13: _t->processEditDropDown(); break;
        case 14: _t->processEditChanged(); break;
        case 15: _t->contextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 16: _t->helpClicked(); break;
        default: ;
        }
    }
}

const QMetaObject WatermarksWindow::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_WatermarksWindow.data,
      qt_meta_data_WatermarksWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WatermarksWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WatermarksWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WatermarksWindow.stringdata0))
        return static_cast<void*>(const_cast< WatermarksWindow*>(this));
    return QDialog::qt_metacast(_clname);
}

int WatermarksWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
