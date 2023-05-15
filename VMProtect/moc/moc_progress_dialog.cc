/****************************************************************************
** Meta object code from reading C++ file 'progress_dialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../progress_dialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'progress_dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ProgressDialog_t {
    QByteArrayData data[15];
    char stringdata0[130];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ProgressDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ProgressDialog_t qt_meta_stringdata_ProgressDialog = {
    {
QT_MOC_LITERAL(0, 0, 14), // "ProgressDialog"
QT_MOC_LITERAL(1, 15, 6), // "cancel"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 13), // "startProgress"
QT_MOC_LITERAL(4, 37, 7), // "caption"
QT_MOC_LITERAL(5, 45, 3), // "max"
QT_MOC_LITERAL(6, 49, 12), // "stepProgress"
QT_MOC_LITERAL(7, 62, 5), // "value"
QT_MOC_LITERAL(8, 68, 6), // "notify"
QT_MOC_LITERAL(9, 75, 11), // "MessageType"
QT_MOC_LITERAL(10, 87, 4), // "type"
QT_MOC_LITERAL(11, 92, 8), // "IObject*"
QT_MOC_LITERAL(12, 101, 6), // "sender"
QT_MOC_LITERAL(13, 108, 7), // "message"
QT_MOC_LITERAL(14, 116, 13) // "cancelClicked"

    },
    "ProgressDialog\0cancel\0\0startProgress\0"
    "caption\0max\0stepProgress\0value\0notify\0"
    "MessageType\0type\0IObject*\0sender\0"
    "message\0cancelClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ProgressDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    2,   40,    2, 0x0a /* Public */,
       6,    1,   45,    2, 0x0a /* Public */,
       8,    3,   48,    2, 0x0a /* Public */,
      14,    0,   55,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::ULongLong,    4,    5,
    QMetaType::Void, QMetaType::ULongLong,    7,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 11, QMetaType::QString,   10,   12,   13,
    QMetaType::Void,

       0        // eod
};

void ProgressDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ProgressDialog *_t = static_cast<ProgressDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->cancel(); break;
        case 1: _t->startProgress((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< unsigned long long(*)>(_a[2]))); break;
        case 2: _t->stepProgress((*reinterpret_cast< unsigned long long(*)>(_a[1]))); break;
        case 3: _t->notify((*reinterpret_cast< MessageType(*)>(_a[1])),(*reinterpret_cast< IObject*(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 4: _t->cancelClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ProgressDialog::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ProgressDialog::cancel)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject ProgressDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ProgressDialog.data,
      qt_meta_data_ProgressDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ProgressDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ProgressDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ProgressDialog.stringdata0))
        return static_cast<void*>(const_cast< ProgressDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int ProgressDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void ProgressDialog::cancel()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
struct qt_meta_stringdata_GUILog_t {
    QByteArrayData data[12];
    char stringdata0[102];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GUILog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GUILog_t qt_meta_stringdata_GUILog = {
    {
QT_MOC_LITERAL(0, 0, 6), // "GUILog"
QT_MOC_LITERAL(1, 7, 6), // "notify"
QT_MOC_LITERAL(2, 14, 0), // ""
QT_MOC_LITERAL(3, 15, 11), // "MessageType"
QT_MOC_LITERAL(4, 27, 4), // "type"
QT_MOC_LITERAL(5, 32, 8), // "IObject*"
QT_MOC_LITERAL(6, 41, 6), // "sender"
QT_MOC_LITERAL(7, 48, 7), // "message"
QT_MOC_LITERAL(8, 56, 13), // "startProgress"
QT_MOC_LITERAL(9, 70, 12), // "stepProgress"
QT_MOC_LITERAL(10, 83, 11), // "endProgress"
QT_MOC_LITERAL(11, 95, 6) // "cancel"

    },
    "GUILog\0notify\0\0MessageType\0type\0"
    "IObject*\0sender\0message\0startProgress\0"
    "stepProgress\0endProgress\0cancel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GUILog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   39,    2, 0x06 /* Public */,
       8,    2,   46,    2, 0x06 /* Public */,
       9,    1,   51,    2, 0x06 /* Public */,
      10,    0,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    0,   55,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5, QMetaType::QString,    4,    6,    7,
    QMetaType::Void, QMetaType::QString, QMetaType::ULongLong,    2,    2,
    QMetaType::Void, QMetaType::ULongLong,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void GUILog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GUILog *_t = static_cast<GUILog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->notify((*reinterpret_cast< MessageType(*)>(_a[1])),(*reinterpret_cast< IObject*(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 1: _t->startProgress((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< unsigned long long(*)>(_a[2]))); break;
        case 2: _t->stepProgress((*reinterpret_cast< unsigned long long(*)>(_a[1]))); break;
        case 3: _t->endProgress(); break;
        case 4: _t->cancel(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (GUILog::*_t)(MessageType , IObject * , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GUILog::notify)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (GUILog::*_t)(const QString & , unsigned long long );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GUILog::startProgress)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (GUILog::*_t)(unsigned long long );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GUILog::stepProgress)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (GUILog::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GUILog::endProgress)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject GUILog::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_GUILog.data,
      qt_meta_data_GUILog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *GUILog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GUILog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_GUILog.stringdata0))
        return static_cast<void*>(const_cast< GUILog*>(this));
    if (!strcmp(_clname, "ILog"))
        return static_cast< ILog*>(const_cast< GUILog*>(this));
    if (!strcmp(_clname, "ILog"))
        return static_cast< ILog*>(const_cast< GUILog*>(this));
    return QObject::qt_metacast(_clname);
}

int GUILog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void GUILog::notify(MessageType _t1, IObject * _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GUILog::startProgress(const QString & _t1, unsigned long long _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void GUILog::stepProgress(unsigned long long _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void GUILog::endProgress()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
