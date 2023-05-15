/****************************************************************************
** Meta object code from reading C++ file 'property_editor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../property_editor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'property_editor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Property_t {
    QByteArrayData data[6];
    char stringdata0[43];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Property_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Property_t qt_meta_stringdata_Property = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Property"
QT_MOC_LITERAL(1, 9, 9), // "destroyed"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 9), // "Property*"
QT_MOC_LITERAL(4, 30, 4), // "prop"
QT_MOC_LITERAL(5, 35, 7) // "changed"

    },
    "Property\0destroyed\0\0Property*\0prop\0"
    "changed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Property[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,
       5,    1,   27,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void Property::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Property *_t = static_cast<Property *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->destroyed((*reinterpret_cast< Property*(*)>(_a[1]))); break;
        case 1: _t->changed((*reinterpret_cast< Property*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Property* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Property* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Property::*_t)(Property * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Property::destroyed)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Property::*_t)(Property * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Property::changed)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject Property::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Property.data,
      qt_meta_data_Property,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Property::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Property::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Property.stringdata0))
        return static_cast<void*>(const_cast< Property*>(this));
    return QObject::qt_metacast(_clname);
}

int Property::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void Property::destroyed(Property * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Property::changed(Property * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_StringProperty_t {
    QByteArrayData data[5];
    char stringdata0[49];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StringProperty_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StringProperty_t qt_meta_stringdata_StringProperty = {
    {
QT_MOC_LITERAL(0, 0, 14), // "StringProperty"
QT_MOC_LITERAL(1, 15, 12), // "valueChanged"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 5), // "value"
QT_MOC_LITERAL(4, 35, 13) // "editorChanged"

    },
    "StringProperty\0valueChanged\0\0value\0"
    "editorChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StringProperty[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   27,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,

       0        // eod
};

void StringProperty::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        StringProperty *_t = static_cast<StringProperty *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->editorChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (StringProperty::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StringProperty::valueChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject StringProperty::staticMetaObject = {
    { &Property::staticMetaObject, qt_meta_stringdata_StringProperty.data,
      qt_meta_data_StringProperty,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *StringProperty::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StringProperty::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_StringProperty.stringdata0))
        return static_cast<void*>(const_cast< StringProperty*>(this));
    return Property::qt_metacast(_clname);
}

int StringProperty::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Property::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void StringProperty::valueChanged(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_BoolProperty_t {
    QByteArrayData data[5];
    char stringdata0[47];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BoolProperty_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BoolProperty_t qt_meta_stringdata_BoolProperty = {
    {
QT_MOC_LITERAL(0, 0, 12), // "BoolProperty"
QT_MOC_LITERAL(1, 13, 12), // "valueChanged"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 5), // "value"
QT_MOC_LITERAL(4, 33, 13) // "editorChanged"

    },
    "BoolProperty\0valueChanged\0\0value\0"
    "editorChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BoolProperty[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   27,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,

       0        // eod
};

void BoolProperty::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BoolProperty *_t = static_cast<BoolProperty *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->editorChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (BoolProperty::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BoolProperty::valueChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject BoolProperty::staticMetaObject = {
    { &Property::staticMetaObject, qt_meta_stringdata_BoolProperty.data,
      qt_meta_data_BoolProperty,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *BoolProperty::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BoolProperty::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_BoolProperty.stringdata0))
        return static_cast<void*>(const_cast< BoolProperty*>(this));
    return Property::qt_metacast(_clname);
}

int BoolProperty::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Property::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void BoolProperty::valueChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_DateProperty_t {
    QByteArrayData data[5];
    char stringdata0[47];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DateProperty_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DateProperty_t qt_meta_stringdata_DateProperty = {
    {
QT_MOC_LITERAL(0, 0, 12), // "DateProperty"
QT_MOC_LITERAL(1, 13, 12), // "valueChanged"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 5), // "value"
QT_MOC_LITERAL(4, 33, 13) // "editorChanged"

    },
    "DateProperty\0valueChanged\0\0value\0"
    "editorChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DateProperty[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   27,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QDate,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QDate,    3,

       0        // eod
};

void DateProperty::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DateProperty *_t = static_cast<DateProperty *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< const QDate(*)>(_a[1]))); break;
        case 1: _t->editorChanged((*reinterpret_cast< const QDate(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (DateProperty::*_t)(const QDate & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DateProperty::valueChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject DateProperty::staticMetaObject = {
    { &Property::staticMetaObject, qt_meta_stringdata_DateProperty.data,
      qt_meta_data_DateProperty,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DateProperty::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DateProperty::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DateProperty.stringdata0))
        return static_cast<void*>(const_cast< DateProperty*>(this));
    return Property::qt_metacast(_clname);
}

int DateProperty::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Property::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void DateProperty::valueChanged(const QDate & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_GroupProperty_t {
    QByteArrayData data[1];
    char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GroupProperty_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GroupProperty_t qt_meta_stringdata_GroupProperty = {
    {
QT_MOC_LITERAL(0, 0, 13) // "GroupProperty"

    },
    "GroupProperty"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GroupProperty[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void GroupProperty::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject GroupProperty::staticMetaObject = {
    { &Property::staticMetaObject, qt_meta_stringdata_GroupProperty.data,
      qt_meta_data_GroupProperty,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *GroupProperty::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GroupProperty::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_GroupProperty.stringdata0))
        return static_cast<void*>(const_cast< GroupProperty*>(this));
    return Property::qt_metacast(_clname);
}

int GroupProperty::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Property::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_CommandProperty_t {
    QByteArrayData data[1];
    char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CommandProperty_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CommandProperty_t qt_meta_stringdata_CommandProperty = {
    {
QT_MOC_LITERAL(0, 0, 15) // "CommandProperty"

    },
    "CommandProperty"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CommandProperty[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void CommandProperty::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject CommandProperty::staticMetaObject = {
    { &Property::staticMetaObject, qt_meta_stringdata_CommandProperty.data,
      qt_meta_data_CommandProperty,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CommandProperty::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CommandProperty::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CommandProperty.stringdata0))
        return static_cast<void*>(const_cast< CommandProperty*>(this));
    return Property::qt_metacast(_clname);
}

int CommandProperty::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Property::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_EnumProperty_t {
    QByteArrayData data[5];
    char stringdata0[47];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EnumProperty_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EnumProperty_t qt_meta_stringdata_EnumProperty = {
    {
QT_MOC_LITERAL(0, 0, 12), // "EnumProperty"
QT_MOC_LITERAL(1, 13, 12), // "valueChanged"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 5), // "value"
QT_MOC_LITERAL(4, 33, 13) // "editorChanged"

    },
    "EnumProperty\0valueChanged\0\0value\0"
    "editorChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EnumProperty[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   27,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

void EnumProperty::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        EnumProperty *_t = static_cast<EnumProperty *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->editorChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (EnumProperty::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&EnumProperty::valueChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject EnumProperty::staticMetaObject = {
    { &Property::staticMetaObject, qt_meta_stringdata_EnumProperty.data,
      qt_meta_data_EnumProperty,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *EnumProperty::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EnumProperty::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_EnumProperty.stringdata0))
        return static_cast<void*>(const_cast< EnumProperty*>(this));
    return Property::qt_metacast(_clname);
}

int EnumProperty::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Property::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void EnumProperty::valueChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_CompilationTypeProperty_t {
    QByteArrayData data[6];
    char stringdata0[74];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CompilationTypeProperty_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CompilationTypeProperty_t qt_meta_stringdata_CompilationTypeProperty = {
    {
QT_MOC_LITERAL(0, 0, 23), // "CompilationTypeProperty"
QT_MOC_LITERAL(1, 24, 12), // "valueChanged"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 15), // "CompilationType"
QT_MOC_LITERAL(4, 54, 5), // "value"
QT_MOC_LITERAL(5, 60, 13) // "editorChanged"

    },
    "CompilationTypeProperty\0valueChanged\0"
    "\0CompilationType\0value\0editorChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CompilationTypeProperty[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   27,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    4,

       0        // eod
};

void CompilationTypeProperty::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CompilationTypeProperty *_t = static_cast<CompilationTypeProperty *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< CompilationType(*)>(_a[1]))); break;
        case 1: _t->editorChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CompilationTypeProperty::*_t)(CompilationType );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CompilationTypeProperty::valueChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject CompilationTypeProperty::staticMetaObject = {
    { &Property::staticMetaObject, qt_meta_stringdata_CompilationTypeProperty.data,
      qt_meta_data_CompilationTypeProperty,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CompilationTypeProperty::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CompilationTypeProperty::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CompilationTypeProperty.stringdata0))
        return static_cast<void*>(const_cast< CompilationTypeProperty*>(this));
    return Property::qt_metacast(_clname);
}

int CompilationTypeProperty::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Property::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void CompilationTypeProperty::valueChanged(CompilationType _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_FileNameProperty_t {
    QByteArrayData data[5];
    char stringdata0[51];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FileNameProperty_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FileNameProperty_t qt_meta_stringdata_FileNameProperty = {
    {
QT_MOC_LITERAL(0, 0, 16), // "FileNameProperty"
QT_MOC_LITERAL(1, 17, 12), // "valueChanged"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 5), // "value"
QT_MOC_LITERAL(4, 37, 13) // "editorChanged"

    },
    "FileNameProperty\0valueChanged\0\0value\0"
    "editorChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FileNameProperty[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   27,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,

       0        // eod
};

void FileNameProperty::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FileNameProperty *_t = static_cast<FileNameProperty *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->editorChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (FileNameProperty::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FileNameProperty::valueChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject FileNameProperty::staticMetaObject = {
    { &Property::staticMetaObject, qt_meta_stringdata_FileNameProperty.data,
      qt_meta_data_FileNameProperty,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *FileNameProperty::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FileNameProperty::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_FileNameProperty.stringdata0))
        return static_cast<void*>(const_cast< FileNameProperty*>(this));
    return Property::qt_metacast(_clname);
}

int FileNameProperty::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Property::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void FileNameProperty::valueChanged(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_WatermarkProperty_t {
    QByteArrayData data[5];
    char stringdata0[52];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WatermarkProperty_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WatermarkProperty_t qt_meta_stringdata_WatermarkProperty = {
    {
QT_MOC_LITERAL(0, 0, 17), // "WatermarkProperty"
QT_MOC_LITERAL(1, 18, 12), // "valueChanged"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 5), // "value"
QT_MOC_LITERAL(4, 38, 13) // "editorChanged"

    },
    "WatermarkProperty\0valueChanged\0\0value\0"
    "editorChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WatermarkProperty[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   27,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,

       0        // eod
};

void WatermarkProperty::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WatermarkProperty *_t = static_cast<WatermarkProperty *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->editorChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (WatermarkProperty::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WatermarkProperty::valueChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject WatermarkProperty::staticMetaObject = {
    { &Property::staticMetaObject, qt_meta_stringdata_WatermarkProperty.data,
      qt_meta_data_WatermarkProperty,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WatermarkProperty::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WatermarkProperty::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WatermarkProperty.stringdata0))
        return static_cast<void*>(const_cast< WatermarkProperty*>(this));
    return Property::qt_metacast(_clname);
}

int WatermarkProperty::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Property::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void WatermarkProperty::valueChanged(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_PropertyManager_t {
    QByteArrayData data[6];
    char stringdata0[74];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PropertyManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PropertyManager_t qt_meta_stringdata_PropertyManager = {
    {
QT_MOC_LITERAL(0, 0, 15), // "PropertyManager"
QT_MOC_LITERAL(1, 16, 19), // "slotPropertyChanged"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 9), // "Property*"
QT_MOC_LITERAL(4, 47, 4), // "prop"
QT_MOC_LITERAL(5, 52, 21) // "slotPropertyDestroyed"

    },
    "PropertyManager\0slotPropertyChanged\0"
    "\0Property*\0prop\0slotPropertyDestroyed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PropertyManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x08 /* Private */,
       5,    1,   27,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void PropertyManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PropertyManager *_t = static_cast<PropertyManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotPropertyChanged((*reinterpret_cast< Property*(*)>(_a[1]))); break;
        case 1: _t->slotPropertyDestroyed((*reinterpret_cast< Property*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Property* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Property* >(); break;
            }
            break;
        }
    }
}

const QMetaObject PropertyManager::staticMetaObject = {
    { &QAbstractItemModel::staticMetaObject, qt_meta_stringdata_PropertyManager.data,
      qt_meta_data_PropertyManager,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PropertyManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PropertyManager::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PropertyManager.stringdata0))
        return static_cast<void*>(const_cast< PropertyManager*>(this));
    return QAbstractItemModel::qt_metacast(_clname);
}

int PropertyManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
struct qt_meta_stringdata_PropertyEditorDelegate_t {
    QByteArrayData data[1];
    char stringdata0[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PropertyEditorDelegate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PropertyEditorDelegate_t qt_meta_stringdata_PropertyEditorDelegate = {
    {
QT_MOC_LITERAL(0, 0, 22) // "PropertyEditorDelegate"

    },
    "PropertyEditorDelegate"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PropertyEditorDelegate[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void PropertyEditorDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject PropertyEditorDelegate::staticMetaObject = {
    { &TreeViewItemDelegate::staticMetaObject, qt_meta_stringdata_PropertyEditorDelegate.data,
      qt_meta_data_PropertyEditorDelegate,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PropertyEditorDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PropertyEditorDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PropertyEditorDelegate.stringdata0))
        return static_cast<void*>(const_cast< PropertyEditorDelegate*>(this));
    return TreeViewItemDelegate::qt_metacast(_clname);
}

int PropertyEditorDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TreeViewItemDelegate::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_TreePropertyEditor_t {
    QByteArrayData data[7];
    char stringdata0[71];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TreePropertyEditor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TreePropertyEditor_t qt_meta_stringdata_TreePropertyEditor = {
    {
QT_MOC_LITERAL(0, 0, 18), // "TreePropertyEditor"
QT_MOC_LITERAL(1, 19, 11), // "dataChanged"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 7), // "topLeft"
QT_MOC_LITERAL(4, 40, 11), // "bottomRight"
QT_MOC_LITERAL(5, 52, 12), // "QVector<int>"
QT_MOC_LITERAL(6, 65, 5) // "roles"

    },
    "TreePropertyEditor\0dataChanged\0\0topLeft\0"
    "bottomRight\0QVector<int>\0roles"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TreePropertyEditor[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    3,   24,    2, 0x09 /* Protected */,
       1,    2,   31,    2, 0x29 /* Protected | MethodCloned */,

 // slots: parameters
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::QModelIndex, 0x80000000 | 5,    3,    4,    6,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::QModelIndex,    3,    4,

       0        // eod
};

void TreePropertyEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TreePropertyEditor *_t = static_cast<TreePropertyEditor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dataChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])),(*reinterpret_cast< const QVector<int>(*)>(_a[3]))); break;
        case 1: _t->dataChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        }
    }
}

const QMetaObject TreePropertyEditor::staticMetaObject = {
    { &TreeView::staticMetaObject, qt_meta_stringdata_TreePropertyEditor.data,
      qt_meta_data_TreePropertyEditor,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *TreePropertyEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TreePropertyEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_TreePropertyEditor.stringdata0))
        return static_cast<void*>(const_cast< TreePropertyEditor*>(this));
    return TreeView::qt_metacast(_clname);
}

int TreePropertyEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TreeView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
struct qt_meta_stringdata_LicensePropertyManager_t {
    QByteArrayData data[9];
    char stringdata0[111];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LicensePropertyManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LicensePropertyManager_t qt_meta_stringdata_LicensePropertyManager = {
    {
QT_MOC_LITERAL(0, 0, 22), // "LicensePropertyManager"
QT_MOC_LITERAL(1, 23, 11), // "nameChanged"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 5), // "value"
QT_MOC_LITERAL(4, 42, 12), // "emailChanged"
QT_MOC_LITERAL(5, 55, 12), // "orderChanged"
QT_MOC_LITERAL(6, 68, 11), // "dateChanged"
QT_MOC_LITERAL(7, 80, 15), // "commentsChanged"
QT_MOC_LITERAL(8, 96, 14) // "blockedChanged"

    },
    "LicensePropertyManager\0nameChanged\0\0"
    "value\0emailChanged\0orderChanged\0"
    "dateChanged\0commentsChanged\0blockedChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LicensePropertyManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x08 /* Private */,
       4,    1,   47,    2, 0x08 /* Private */,
       5,    1,   50,    2, 0x08 /* Private */,
       6,    1,   53,    2, 0x08 /* Private */,
       7,    1,   56,    2, 0x08 /* Private */,
       8,    1,   59,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QDate,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Bool,    3,

       0        // eod
};

void LicensePropertyManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LicensePropertyManager *_t = static_cast<LicensePropertyManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->nameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->emailChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->orderChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->dateChanged((*reinterpret_cast< const QDate(*)>(_a[1]))); break;
        case 4: _t->commentsChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->blockedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject LicensePropertyManager::staticMetaObject = {
    { &PropertyManager::staticMetaObject, qt_meta_stringdata_LicensePropertyManager.data,
      qt_meta_data_LicensePropertyManager,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *LicensePropertyManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LicensePropertyManager::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_LicensePropertyManager.stringdata0))
        return static_cast<void*>(const_cast< LicensePropertyManager*>(this));
    return PropertyManager::qt_metacast(_clname);
}

int LicensePropertyManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PropertyManager::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
struct qt_meta_stringdata_InternalFilePropertyManager_t {
    QByteArrayData data[6];
    char stringdata0[77];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_InternalFilePropertyManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_InternalFilePropertyManager_t qt_meta_stringdata_InternalFilePropertyManager = {
    {
QT_MOC_LITERAL(0, 0, 27), // "InternalFilePropertyManager"
QT_MOC_LITERAL(1, 28, 11), // "nameChanged"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 5), // "value"
QT_MOC_LITERAL(4, 47, 15), // "fileNameChanged"
QT_MOC_LITERAL(5, 63, 13) // "actionChanged"

    },
    "InternalFilePropertyManager\0nameChanged\0"
    "\0value\0fileNameChanged\0actionChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_InternalFilePropertyManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x08 /* Private */,
       4,    1,   32,    2, 0x08 /* Private */,
       5,    1,   35,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

void InternalFilePropertyManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        InternalFilePropertyManager *_t = static_cast<InternalFilePropertyManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->nameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->fileNameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->actionChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject InternalFilePropertyManager::staticMetaObject = {
    { &PropertyManager::staticMetaObject, qt_meta_stringdata_InternalFilePropertyManager.data,
      qt_meta_data_InternalFilePropertyManager,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *InternalFilePropertyManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *InternalFilePropertyManager::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_InternalFilePropertyManager.stringdata0))
        return static_cast<void*>(const_cast< InternalFilePropertyManager*>(this));
    return PropertyManager::qt_metacast(_clname);
}

int InternalFilePropertyManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PropertyManager::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
struct qt_meta_stringdata_AssemblyPropertyManager_t {
    QByteArrayData data[5];
    char stringdata0[59];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AssemblyPropertyManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AssemblyPropertyManager_t qt_meta_stringdata_AssemblyPropertyManager = {
    {
QT_MOC_LITERAL(0, 0, 23), // "AssemblyPropertyManager"
QT_MOC_LITERAL(1, 24, 11), // "nameChanged"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 5), // "value"
QT_MOC_LITERAL(4, 43, 15) // "fileNameChanged"

    },
    "AssemblyPropertyManager\0nameChanged\0"
    "\0value\0fileNameChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AssemblyPropertyManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x08 /* Private */,
       4,    1,   27,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,

       0        // eod
};

void AssemblyPropertyManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AssemblyPropertyManager *_t = static_cast<AssemblyPropertyManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->nameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->fileNameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject AssemblyPropertyManager::staticMetaObject = {
    { &PropertyManager::staticMetaObject, qt_meta_stringdata_AssemblyPropertyManager.data,
      qt_meta_data_AssemblyPropertyManager,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *AssemblyPropertyManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AssemblyPropertyManager::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_AssemblyPropertyManager.stringdata0))
        return static_cast<void*>(const_cast< AssemblyPropertyManager*>(this));
    return PropertyManager::qt_metacast(_clname);
}

int AssemblyPropertyManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PropertyManager::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
struct qt_meta_stringdata_FunctionPropertyManager_t {
    QByteArrayData data[6];
    char stringdata0[87];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FunctionPropertyManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FunctionPropertyManager_t qt_meta_stringdata_FunctionPropertyManager = {
    {
QT_MOC_LITERAL(0, 0, 23), // "FunctionPropertyManager"
QT_MOC_LITERAL(1, 24, 22), // "compilationTypeChanged"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 15), // "CompilationType"
QT_MOC_LITERAL(4, 64, 5), // "value"
QT_MOC_LITERAL(5, 70, 16) // "lockToKeyChanged"

    },
    "FunctionPropertyManager\0compilationTypeChanged\0"
    "\0CompilationType\0value\0lockToKeyChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FunctionPropertyManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x08 /* Private */,
       5,    1,   27,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Bool,    4,

       0        // eod
};

void FunctionPropertyManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FunctionPropertyManager *_t = static_cast<FunctionPropertyManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->compilationTypeChanged((*reinterpret_cast< CompilationType(*)>(_a[1]))); break;
        case 1: _t->lockToKeyChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject FunctionPropertyManager::staticMetaObject = {
    { &PropertyManager::staticMetaObject, qt_meta_stringdata_FunctionPropertyManager.data,
      qt_meta_data_FunctionPropertyManager,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *FunctionPropertyManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FunctionPropertyManager::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_FunctionPropertyManager.stringdata0))
        return static_cast<void*>(const_cast< FunctionPropertyManager*>(this));
    return PropertyManager::qt_metacast(_clname);
}

int FunctionPropertyManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PropertyManager::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
struct qt_meta_stringdata_SectionPropertyManager_t {
    QByteArrayData data[1];
    char stringdata0[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SectionPropertyManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SectionPropertyManager_t qt_meta_stringdata_SectionPropertyManager = {
    {
QT_MOC_LITERAL(0, 0, 22) // "SectionPropertyManager"

    },
    "SectionPropertyManager"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SectionPropertyManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void SectionPropertyManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject SectionPropertyManager::staticMetaObject = {
    { &PropertyManager::staticMetaObject, qt_meta_stringdata_SectionPropertyManager.data,
      qt_meta_data_SectionPropertyManager,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SectionPropertyManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SectionPropertyManager::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SectionPropertyManager.stringdata0))
        return static_cast<void*>(const_cast< SectionPropertyManager*>(this));
    return PropertyManager::qt_metacast(_clname);
}

int SectionPropertyManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PropertyManager::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_SegmentPropertyManager_t {
    QByteArrayData data[5];
    char stringdata0[93];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SegmentPropertyManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SegmentPropertyManager_t qt_meta_stringdata_SegmentPropertyManager = {
    {
QT_MOC_LITERAL(0, 0, 22), // "SegmentPropertyManager"
QT_MOC_LITERAL(1, 23, 26), // "excludedFromPackingChanged"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 5), // "value"
QT_MOC_LITERAL(4, 57, 35) // "excludedFromMemoryProtectionC..."

    },
    "SegmentPropertyManager\0"
    "excludedFromPackingChanged\0\0value\0"
    "excludedFromMemoryProtectionChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SegmentPropertyManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x08 /* Private */,
       4,    1,   27,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,

       0        // eod
};

void SegmentPropertyManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SegmentPropertyManager *_t = static_cast<SegmentPropertyManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->excludedFromPackingChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->excludedFromMemoryProtectionChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject SegmentPropertyManager::staticMetaObject = {
    { &PropertyManager::staticMetaObject, qt_meta_stringdata_SegmentPropertyManager.data,
      qt_meta_data_SegmentPropertyManager,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SegmentPropertyManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SegmentPropertyManager::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SegmentPropertyManager.stringdata0))
        return static_cast<void*>(const_cast< SegmentPropertyManager*>(this));
    return PropertyManager::qt_metacast(_clname);
}

int SegmentPropertyManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PropertyManager::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
struct qt_meta_stringdata_ImportPropertyManager_t {
    QByteArrayData data[1];
    char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ImportPropertyManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ImportPropertyManager_t qt_meta_stringdata_ImportPropertyManager = {
    {
QT_MOC_LITERAL(0, 0, 21) // "ImportPropertyManager"

    },
    "ImportPropertyManager"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ImportPropertyManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void ImportPropertyManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject ImportPropertyManager::staticMetaObject = {
    { &PropertyManager::staticMetaObject, qt_meta_stringdata_ImportPropertyManager.data,
      qt_meta_data_ImportPropertyManager,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ImportPropertyManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ImportPropertyManager::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ImportPropertyManager.stringdata0))
        return static_cast<void*>(const_cast< ImportPropertyManager*>(this));
    return PropertyManager::qt_metacast(_clname);
}

int ImportPropertyManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PropertyManager::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_ExportPropertyManager_t {
    QByteArrayData data[1];
    char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ExportPropertyManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ExportPropertyManager_t qt_meta_stringdata_ExportPropertyManager = {
    {
QT_MOC_LITERAL(0, 0, 21) // "ExportPropertyManager"

    },
    "ExportPropertyManager"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ExportPropertyManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void ExportPropertyManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject ExportPropertyManager::staticMetaObject = {
    { &PropertyManager::staticMetaObject, qt_meta_stringdata_ExportPropertyManager.data,
      qt_meta_data_ExportPropertyManager,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ExportPropertyManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ExportPropertyManager::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ExportPropertyManager.stringdata0))
        return static_cast<void*>(const_cast< ExportPropertyManager*>(this));
    return PropertyManager::qt_metacast(_clname);
}

int ExportPropertyManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PropertyManager::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_ResourcePropertyManager_t {
    QByteArrayData data[4];
    char stringdata0[58];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ResourcePropertyManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ResourcePropertyManager_t qt_meta_stringdata_ResourcePropertyManager = {
    {
QT_MOC_LITERAL(0, 0, 23), // "ResourcePropertyManager"
QT_MOC_LITERAL(1, 24, 26), // "excludedFromPackingChanged"
QT_MOC_LITERAL(2, 51, 0), // ""
QT_MOC_LITERAL(3, 52, 5) // "value"

    },
    "ResourcePropertyManager\0"
    "excludedFromPackingChanged\0\0value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ResourcePropertyManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,

       0        // eod
};

void ResourcePropertyManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ResourcePropertyManager *_t = static_cast<ResourcePropertyManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->excludedFromPackingChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject ResourcePropertyManager::staticMetaObject = {
    { &PropertyManager::staticMetaObject, qt_meta_stringdata_ResourcePropertyManager.data,
      qt_meta_data_ResourcePropertyManager,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ResourcePropertyManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ResourcePropertyManager::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ResourcePropertyManager.stringdata0))
        return static_cast<void*>(const_cast< ResourcePropertyManager*>(this));
    return PropertyManager::qt_metacast(_clname);
}

int ResourcePropertyManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PropertyManager::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_LoadCommandPropertyManager_t {
    QByteArrayData data[1];
    char stringdata0[27];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LoadCommandPropertyManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LoadCommandPropertyManager_t qt_meta_stringdata_LoadCommandPropertyManager = {
    {
QT_MOC_LITERAL(0, 0, 26) // "LoadCommandPropertyManager"

    },
    "LoadCommandPropertyManager"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LoadCommandPropertyManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void LoadCommandPropertyManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject LoadCommandPropertyManager::staticMetaObject = {
    { &PropertyManager::staticMetaObject, qt_meta_stringdata_LoadCommandPropertyManager.data,
      qt_meta_data_LoadCommandPropertyManager,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *LoadCommandPropertyManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LoadCommandPropertyManager::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_LoadCommandPropertyManager.stringdata0))
        return static_cast<void*>(const_cast< LoadCommandPropertyManager*>(this));
    return PropertyManager::qt_metacast(_clname);
}

int LoadCommandPropertyManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PropertyManager::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_CorePropertyManager_t {
    QByteArrayData data[23];
    char stringdata0[507];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CorePropertyManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CorePropertyManager_t qt_meta_stringdata_CorePropertyManager = {
    {
QT_MOC_LITERAL(0, 0, 19), // "CorePropertyManager"
QT_MOC_LITERAL(1, 20, 23), // "memoryProtectionChanged"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 5), // "value"
QT_MOC_LITERAL(4, 51, 23), // "importProtectionChanged"
QT_MOC_LITERAL(5, 75, 25), // "resourceProtectionChanged"
QT_MOC_LITERAL(6, 101, 21), // "packOutputFileChanged"
QT_MOC_LITERAL(7, 123, 20), // "watermarkNameChanged"
QT_MOC_LITERAL(8, 144, 11), // "hwidChanged"
QT_MOC_LITERAL(9, 156, 17), // "outputFileChanged"
QT_MOC_LITERAL(10, 174, 24), // "detectionDebuggerChanged"
QT_MOC_LITERAL(11, 199, 25), // "detectioncpVMToolsChanged"
QT_MOC_LITERAL(12, 225, 20), // "vmSectionNameChanged"
QT_MOC_LITERAL(13, 246, 21), // "stripDebugInfoChanged"
QT_MOC_LITERAL(14, 268, 23), // "stripRelocationsChanged"
QT_MOC_LITERAL(15, 292, 16), // "debugModeChanged"
QT_MOC_LITERAL(16, 309, 27), // "messageDebuggerFoundChanged"
QT_MOC_LITERAL(17, 337, 26), // "messageVMToolsFoundChanged"
QT_MOC_LITERAL(18, 364, 27), // "messageFileCorruptedChanged"
QT_MOC_LITERAL(19, 392, 34), // "messageSerialNumberRequiredCh..."
QT_MOC_LITERAL(20, 427, 28), // "messageHWIDMismatchedChanged"
QT_MOC_LITERAL(21, 456, 26), // "licenseDataFileNameChanged"
QT_MOC_LITERAL(22, 483, 23) // "activationServerChanged"

    },
    "CorePropertyManager\0memoryProtectionChanged\0"
    "\0value\0importProtectionChanged\0"
    "resourceProtectionChanged\0"
    "packOutputFileChanged\0watermarkNameChanged\0"
    "hwidChanged\0outputFileChanged\0"
    "detectionDebuggerChanged\0"
    "detectioncpVMToolsChanged\0"
    "vmSectionNameChanged\0stripDebugInfoChanged\0"
    "stripRelocationsChanged\0debugModeChanged\0"
    "messageDebuggerFoundChanged\0"
    "messageVMToolsFoundChanged\0"
    "messageFileCorruptedChanged\0"
    "messageSerialNumberRequiredChanged\0"
    "messageHWIDMismatchedChanged\0"
    "licenseDataFileNameChanged\0"
    "activationServerChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CorePropertyManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,  114,    2, 0x08 /* Private */,
       4,    1,  117,    2, 0x08 /* Private */,
       5,    1,  120,    2, 0x08 /* Private */,
       6,    1,  123,    2, 0x08 /* Private */,
       7,    1,  126,    2, 0x08 /* Private */,
       8,    1,  129,    2, 0x08 /* Private */,
       9,    1,  132,    2, 0x08 /* Private */,
      10,    1,  135,    2, 0x08 /* Private */,
      11,    1,  138,    2, 0x08 /* Private */,
      12,    1,  141,    2, 0x08 /* Private */,
      13,    1,  144,    2, 0x08 /* Private */,
      14,    1,  147,    2, 0x08 /* Private */,
      15,    1,  150,    2, 0x08 /* Private */,
      16,    1,  153,    2, 0x08 /* Private */,
      17,    1,  156,    2, 0x08 /* Private */,
      18,    1,  159,    2, 0x08 /* Private */,
      19,    1,  162,    2, 0x08 /* Private */,
      20,    1,  165,    2, 0x08 /* Private */,
      21,    1,  168,    2, 0x08 /* Private */,
      22,    1,  171,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,

       0        // eod
};

void CorePropertyManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CorePropertyManager *_t = static_cast<CorePropertyManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->memoryProtectionChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->importProtectionChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->resourceProtectionChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->packOutputFileChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->watermarkNameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->hwidChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->outputFileChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->detectionDebuggerChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->detectioncpVMToolsChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->vmSectionNameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->stripDebugInfoChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->stripRelocationsChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->debugModeChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->messageDebuggerFoundChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 14: _t->messageVMToolsFoundChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 15: _t->messageFileCorruptedChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 16: _t->messageSerialNumberRequiredChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 17: _t->messageHWIDMismatchedChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 18: _t->licenseDataFileNameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 19: _t->activationServerChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject CorePropertyManager::staticMetaObject = {
    { &PropertyManager::staticMetaObject, qt_meta_stringdata_CorePropertyManager.data,
      qt_meta_data_CorePropertyManager,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CorePropertyManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CorePropertyManager::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CorePropertyManager.stringdata0))
        return static_cast<void*>(const_cast< CorePropertyManager*>(this));
    return PropertyManager::qt_metacast(_clname);
}

int CorePropertyManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PropertyManager::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 20)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 20;
    }
    return _id;
}
struct qt_meta_stringdata_WatermarkPropertyManager_t {
    QByteArrayData data[5];
    char stringdata0[59];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WatermarkPropertyManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WatermarkPropertyManager_t qt_meta_stringdata_WatermarkPropertyManager = {
    {
QT_MOC_LITERAL(0, 0, 24), // "WatermarkPropertyManager"
QT_MOC_LITERAL(1, 25, 11), // "nameChanged"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 5), // "value"
QT_MOC_LITERAL(4, 44, 14) // "blockedChanged"

    },
    "WatermarkPropertyManager\0nameChanged\0"
    "\0value\0blockedChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WatermarkPropertyManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x08 /* Private */,
       4,    1,   27,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Bool,    3,

       0        // eod
};

void WatermarkPropertyManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WatermarkPropertyManager *_t = static_cast<WatermarkPropertyManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->nameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->blockedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject WatermarkPropertyManager::staticMetaObject = {
    { &PropertyManager::staticMetaObject, qt_meta_stringdata_WatermarkPropertyManager.data,
      qt_meta_data_WatermarkPropertyManager,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WatermarkPropertyManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WatermarkPropertyManager::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WatermarkPropertyManager.stringdata0))
        return static_cast<void*>(const_cast< WatermarkPropertyManager*>(this));
    return PropertyManager::qt_metacast(_clname);
}

int WatermarkPropertyManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PropertyManager::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
struct qt_meta_stringdata_AddressCalculator_t {
    QByteArrayData data[6];
    char stringdata0[69];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AddressCalculator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AddressCalculator_t qt_meta_stringdata_AddressCalculator = {
    {
QT_MOC_LITERAL(0, 0, 17), // "AddressCalculator"
QT_MOC_LITERAL(1, 18, 14), // "addressChanged"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 5), // "value"
QT_MOC_LITERAL(4, 40, 13), // "offsetChanged"
QT_MOC_LITERAL(5, 54, 14) // "segmentChanged"

    },
    "AddressCalculator\0addressChanged\0\0"
    "value\0offsetChanged\0segmentChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AddressCalculator[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x08 /* Private */,
       4,    1,   32,    2, 0x08 /* Private */,
       5,    1,   35,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

void AddressCalculator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AddressCalculator *_t = static_cast<AddressCalculator *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addressChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->offsetChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->segmentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject AddressCalculator::staticMetaObject = {
    { &PropertyManager::staticMetaObject, qt_meta_stringdata_AddressCalculator.data,
      qt_meta_data_AddressCalculator,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *AddressCalculator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AddressCalculator::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_AddressCalculator.stringdata0))
        return static_cast<void*>(const_cast< AddressCalculator*>(this));
    return PropertyManager::qt_metacast(_clname);
}

int AddressCalculator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PropertyManager::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
