/****************************************************************************
** Meta object code from reading C++ file 'remotecontrol_win.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../remotecontrol_win.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'remotecontrol_win.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_StdInListenerWin_t {
    QByteArrayData data[4];
    char stringdata0[38];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StdInListenerWin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StdInListenerWin_t qt_meta_stringdata_StdInListenerWin = {
    {
QT_MOC_LITERAL(0, 0, 16), // "StdInListenerWin"
QT_MOC_LITERAL(1, 17, 15), // "receivedCommand"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 3) // "cmd"

    },
    "StdInListenerWin\0receivedCommand\0\0cmd"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StdInListenerWin[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

       0        // eod
};

void StdInListenerWin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        StdInListenerWin *_t = static_cast<StdInListenerWin *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->receivedCommand((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (StdInListenerWin::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StdInListenerWin::receivedCommand)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject StdInListenerWin::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_StdInListenerWin.data,
      qt_meta_data_StdInListenerWin,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *StdInListenerWin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StdInListenerWin::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_StdInListenerWin.stringdata0))
        return static_cast<void*>(const_cast< StdInListenerWin*>(this));
    return QThread::qt_metacast(_clname);
}

int StdInListenerWin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void StdInListenerWin::receivedCommand(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
