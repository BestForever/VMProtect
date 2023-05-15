/****************************************************************************
** Meta object code from reading C++ file 'widgets.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../widgets.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widgets.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_LineEditHelper_t {
    QByteArrayData data[3];
    char stringdata0[30];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LineEditHelper_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LineEditHelper_t qt_meta_stringdata_LineEditHelper = {
    {
QT_MOC_LITERAL(0, 0, 14), // "LineEditHelper"
QT_MOC_LITERAL(1, 15, 13), // "doubleClicked"
QT_MOC_LITERAL(2, 29, 0) // ""

    },
    "LineEditHelper\0doubleClicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LineEditHelper[] = {

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
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void LineEditHelper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LineEditHelper *_t = static_cast<LineEditHelper *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->doubleClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (LineEditHelper::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LineEditHelper::doubleClicked)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject LineEditHelper::staticMetaObject = {
    { &QLineEdit::staticMetaObject, qt_meta_stringdata_LineEditHelper.data,
      qt_meta_data_LineEditHelper,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *LineEditHelper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LineEditHelper::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_LineEditHelper.stringdata0))
        return static_cast<void*>(const_cast< LineEditHelper*>(this));
    return QLineEdit::qt_metacast(_clname);
}

int LineEditHelper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLineEdit::qt_metacall(_c, _id, _a);
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
void LineEditHelper::doubleClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
struct qt_meta_stringdata_EnumEdit_t {
    QByteArrayData data[4];
    char stringdata0[37];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EnumEdit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EnumEdit_t qt_meta_stringdata_EnumEdit = {
    {
QT_MOC_LITERAL(0, 0, 8), // "EnumEdit"
QT_MOC_LITERAL(1, 9, 8), // "dropDown"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 17) // "editDoubleClicked"

    },
    "EnumEdit\0dropDown\0\0editDoubleClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EnumEdit[] = {

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
       1,    0,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   25,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void EnumEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        EnumEdit *_t = static_cast<EnumEdit *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dropDown(); break;
        case 1: _t->editDoubleClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (EnumEdit::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&EnumEdit::dropDown)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject EnumEdit::staticMetaObject = {
    { &QComboBox::staticMetaObject, qt_meta_stringdata_EnumEdit.data,
      qt_meta_data_EnumEdit,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *EnumEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EnumEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_EnumEdit.stringdata0))
        return static_cast<void*>(const_cast< EnumEdit*>(this));
    return QComboBox::qt_metacast(_clname);
}

int EnumEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QComboBox::qt_metacall(_c, _id, _a);
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
void EnumEdit::dropDown()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
struct qt_meta_stringdata_BoolEdit_t {
    QByteArrayData data[5];
    char stringdata0[48];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BoolEdit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BoolEdit_t qt_meta_stringdata_BoolEdit = {
    {
QT_MOC_LITERAL(0, 0, 8), // "BoolEdit"
QT_MOC_LITERAL(1, 9, 7), // "toggled"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 5), // "value"
QT_MOC_LITERAL(4, 24, 23) // "slotCurrentIndexChanged"

    },
    "BoolEdit\0toggled\0\0value\0slotCurrentIndexChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BoolEdit[] = {

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
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

void BoolEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BoolEdit *_t = static_cast<BoolEdit *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->slotCurrentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (BoolEdit::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BoolEdit::toggled)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject BoolEdit::staticMetaObject = {
    { &EnumEdit::staticMetaObject, qt_meta_stringdata_BoolEdit.data,
      qt_meta_data_BoolEdit,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *BoolEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BoolEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_BoolEdit.stringdata0))
        return static_cast<void*>(const_cast< BoolEdit*>(this));
    return EnumEdit::qt_metacast(_clname);
}

int BoolEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = EnumEdit::qt_metacall(_c, _id, _a);
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
void BoolEdit::toggled(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_StringListEdit_t {
    QByteArrayData data[5];
    char stringdata0[51];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StringListEdit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StringListEdit_t qt_meta_stringdata_StringListEdit = {
    {
QT_MOC_LITERAL(0, 0, 14), // "StringListEdit"
QT_MOC_LITERAL(1, 15, 11), // "textChanged"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 6), // "string"
QT_MOC_LITERAL(4, 35, 15) // "slotTextChanged"

    },
    "StringListEdit\0textChanged\0\0string\0"
    "slotTextChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StringListEdit[] = {

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
       4,    0,   27,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void StringListEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        StringListEdit *_t = static_cast<StringListEdit *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->slotTextChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (StringListEdit::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StringListEdit::textChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject StringListEdit::staticMetaObject = {
    { &QPlainTextEdit::staticMetaObject, qt_meta_stringdata_StringListEdit.data,
      qt_meta_data_StringListEdit,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *StringListEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StringListEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_StringListEdit.stringdata0))
        return static_cast<void*>(const_cast< StringListEdit*>(this));
    return QPlainTextEdit::qt_metacast(_clname);
}

int StringListEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPlainTextEdit::qt_metacall(_c, _id, _a);
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
void StringListEdit::textChanged(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_ButtonLineEdit_t {
    QByteArrayData data[3];
    char stringdata0[30];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ButtonLineEdit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ButtonLineEdit_t qt_meta_stringdata_ButtonLineEdit = {
    {
QT_MOC_LITERAL(0, 0, 14), // "ButtonLineEdit"
QT_MOC_LITERAL(1, 15, 13), // "buttonClicked"
QT_MOC_LITERAL(2, 29, 0) // ""

    },
    "ButtonLineEdit\0buttonClicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ButtonLineEdit[] = {

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
       1,    0,   19,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void ButtonLineEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ButtonLineEdit *_t = static_cast<ButtonLineEdit *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->buttonClicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject ButtonLineEdit::staticMetaObject = {
    { &LineEdit::staticMetaObject, qt_meta_stringdata_ButtonLineEdit.data,
      qt_meta_data_ButtonLineEdit,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ButtonLineEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ButtonLineEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ButtonLineEdit.stringdata0))
        return static_cast<void*>(const_cast< ButtonLineEdit*>(this));
    return LineEdit::qt_metacast(_clname);
}

int ButtonLineEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = LineEdit::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_SearchLineEdit_t {
    QByteArrayData data[5];
    char stringdata0[48];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SearchLineEdit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SearchLineEdit_t qt_meta_stringdata_SearchLineEdit = {
    {
QT_MOC_LITERAL(0, 0, 14), // "SearchLineEdit"
QT_MOC_LITERAL(1, 15, 13), // "buttonClicked"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 12), // "updateButton"
QT_MOC_LITERAL(4, 43, 4) // "text"

    },
    "SearchLineEdit\0buttonClicked\0\0"
    "updateButton\0text"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SearchLineEdit[] = {

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
       1,    0,   24,    2, 0x09 /* Protected */,
       3,    1,   25,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,

       0        // eod
};

void SearchLineEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SearchLineEdit *_t = static_cast<SearchLineEdit *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->buttonClicked(); break;
        case 1: _t->updateButton((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject SearchLineEdit::staticMetaObject = {
    { &ButtonLineEdit::staticMetaObject, qt_meta_stringdata_SearchLineEdit.data,
      qt_meta_data_SearchLineEdit,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SearchLineEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SearchLineEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SearchLineEdit.stringdata0))
        return static_cast<void*>(const_cast< SearchLineEdit*>(this));
    return ButtonLineEdit::qt_metacast(_clname);
}

int SearchLineEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ButtonLineEdit::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_FileNameEdit_t {
    QByteArrayData data[5];
    char stringdata0[45];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FileNameEdit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FileNameEdit_t qt_meta_stringdata_FileNameEdit = {
    {
QT_MOC_LITERAL(0, 0, 12), // "FileNameEdit"
QT_MOC_LITERAL(1, 13, 10), // "fileOpened"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 5), // "value"
QT_MOC_LITERAL(4, 31, 13) // "buttonClicked"

    },
    "FileNameEdit\0fileOpened\0\0value\0"
    "buttonClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FileNameEdit[] = {

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
       4,    0,   27,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void FileNameEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FileNameEdit *_t = static_cast<FileNameEdit *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->fileOpened((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->buttonClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (FileNameEdit::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FileNameEdit::fileOpened)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject FileNameEdit::staticMetaObject = {
    { &ButtonLineEdit::staticMetaObject, qt_meta_stringdata_FileNameEdit.data,
      qt_meta_data_FileNameEdit,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *FileNameEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FileNameEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_FileNameEdit.stringdata0))
        return static_cast<void*>(const_cast< FileNameEdit*>(this));
    return ButtonLineEdit::qt_metacast(_clname);
}

int FileNameEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ButtonLineEdit::qt_metacall(_c, _id, _a);
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
void FileNameEdit::fileOpened(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_WatermarkEdit_t {
    QByteArrayData data[3];
    char stringdata0[29];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WatermarkEdit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WatermarkEdit_t qt_meta_stringdata_WatermarkEdit = {
    {
QT_MOC_LITERAL(0, 0, 13), // "WatermarkEdit"
QT_MOC_LITERAL(1, 14, 13), // "buttonClicked"
QT_MOC_LITERAL(2, 28, 0) // ""

    },
    "WatermarkEdit\0buttonClicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WatermarkEdit[] = {

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
       1,    0,   19,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void WatermarkEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WatermarkEdit *_t = static_cast<WatermarkEdit *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->buttonClicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject WatermarkEdit::staticMetaObject = {
    { &ButtonLineEdit::staticMetaObject, qt_meta_stringdata_WatermarkEdit.data,
      qt_meta_data_WatermarkEdit,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WatermarkEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WatermarkEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WatermarkEdit.stringdata0))
        return static_cast<void*>(const_cast< WatermarkEdit*>(this));
    return ButtonLineEdit::qt_metacast(_clname);
}

int WatermarkEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ButtonLineEdit::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_ScriptEdit_t {
    QByteArrayData data[8];
    char stringdata0[46];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ScriptEdit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ScriptEdit_t qt_meta_stringdata_ScriptEdit = {
    {
QT_MOC_LITERAL(0, 0, 10), // "ScriptEdit"
QT_MOC_LITERAL(1, 11, 8), // "updateUI"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 4), // "undo"
QT_MOC_LITERAL(4, 26, 4), // "redo"
QT_MOC_LITERAL(5, 31, 4), // "copy"
QT_MOC_LITERAL(6, 36, 3), // "cut"
QT_MOC_LITERAL(7, 40, 5) // "paste"

    },
    "ScriptEdit\0updateUI\0\0undo\0redo\0copy\0"
    "cut\0paste"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ScriptEdit[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   45,    2, 0x0a /* Public */,
       4,    0,   46,    2, 0x0a /* Public */,
       5,    0,   47,    2, 0x0a /* Public */,
       6,    0,   48,    2, 0x0a /* Public */,
       7,    0,   49,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ScriptEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ScriptEdit *_t = static_cast<ScriptEdit *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateUI(); break;
        case 1: _t->undo(); break;
        case 2: _t->redo(); break;
        case 3: _t->copy(); break;
        case 4: _t->cut(); break;
        case 5: _t->paste(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ScriptEdit::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ScriptEdit::updateUI)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject ScriptEdit::staticMetaObject = {
    { &Scintilla::ScintillaEditBase::staticMetaObject, qt_meta_stringdata_ScriptEdit.data,
      qt_meta_data_ScriptEdit,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ScriptEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ScriptEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ScriptEdit.stringdata0))
        return static_cast<void*>(const_cast< ScriptEdit*>(this));
    return Scintilla::ScintillaEditBase::qt_metacast(_clname);
}

int ScriptEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Scintilla::ScintillaEditBase::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void ScriptEdit::updateUI()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
struct qt_meta_stringdata_TabWidget_t {
    QByteArrayData data[3];
    char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TabWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TabWidget_t qt_meta_stringdata_TabWidget = {
    {
QT_MOC_LITERAL(0, 0, 9), // "TabWidget"
QT_MOC_LITERAL(1, 10, 7), // "resized"
QT_MOC_LITERAL(2, 18, 0) // ""

    },
    "TabWidget\0resized\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TabWidget[] = {

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
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void TabWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TabWidget *_t = static_cast<TabWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->resized(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (TabWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TabWidget::resized)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject TabWidget::staticMetaObject = {
    { &QTabWidget::staticMetaObject, qt_meta_stringdata_TabWidget.data,
      qt_meta_data_TabWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *TabWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TabWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_TabWidget.stringdata0))
        return static_cast<void*>(const_cast< TabWidget*>(this));
    return QTabWidget::qt_metacast(_clname);
}

int TabWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTabWidget::qt_metacall(_c, _id, _a);
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
void TabWidget::resized()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
struct qt_meta_stringdata_BinEditor_t {
    QByteArrayData data[10];
    char stringdata0[74];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BinEditor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BinEditor_t qt_meta_stringdata_BinEditor = {
    {
QT_MOC_LITERAL(0, 0, 9), // "BinEditor"
QT_MOC_LITERAL(1, 10, 11), // "dataChanged"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 9), // "selectAll"
QT_MOC_LITERAL(4, 33, 4), // "copy"
QT_MOC_LITERAL(5, 38, 3), // "cut"
QT_MOC_LITERAL(6, 42, 15), // "deleteSelection"
QT_MOC_LITERAL(7, 58, 5), // "paste"
QT_MOC_LITERAL(8, 64, 4), // "undo"
QT_MOC_LITERAL(9, 69, 4) // "redo"

    },
    "BinEditor\0dataChanged\0\0selectAll\0copy\0"
    "cut\0deleteSelection\0paste\0undo\0redo"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BinEditor[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   55,    2, 0x0a /* Public */,
       4,    0,   56,    2, 0x0a /* Public */,
       5,    0,   57,    2, 0x0a /* Public */,
       6,    0,   58,    2, 0x0a /* Public */,
       7,    0,   59,    2, 0x0a /* Public */,
       8,    0,   60,    2, 0x0a /* Public */,
       9,    0,   61,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void BinEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BinEditor *_t = static_cast<BinEditor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dataChanged(); break;
        case 1: _t->selectAll(); break;
        case 2: _t->copy(); break;
        case 3: _t->cut(); break;
        case 4: { bool _r = _t->deleteSelection();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: _t->paste(); break;
        case 6: _t->undo(); break;
        case 7: _t->redo(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (BinEditor::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BinEditor::dataChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject BinEditor::staticMetaObject = {
    { &QAbstractScrollArea::staticMetaObject, qt_meta_stringdata_BinEditor.data,
      qt_meta_data_BinEditor,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *BinEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BinEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_BinEditor.stringdata0))
        return static_cast<void*>(const_cast< BinEditor*>(this));
    return QAbstractScrollArea::qt_metacast(_clname);
}

int BinEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractScrollArea::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void BinEditor::dataChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
struct qt_meta_stringdata_FindWidget_t {
    QByteArrayData data[11];
    char stringdata0[104];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FindWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FindWidget_t qt_meta_stringdata_FindWidget = {
    {
QT_MOC_LITERAL(0, 0, 10), // "FindWidget"
QT_MOC_LITERAL(1, 11, 8), // "findNext"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 12), // "findPrevious"
QT_MOC_LITERAL(4, 34, 13), // "escapePressed"
QT_MOC_LITERAL(5, 48, 4), // "find"
QT_MOC_LITERAL(6, 53, 4), // "text"
QT_MOC_LITERAL(7, 58, 7), // "forward"
QT_MOC_LITERAL(8, 66, 11), // "incremental"
QT_MOC_LITERAL(9, 78, 13), // "updateButtons"
QT_MOC_LITERAL(10, 92, 11) // "textChanged"

    },
    "FindWidget\0findNext\0\0findPrevious\0"
    "escapePressed\0find\0text\0forward\0"
    "incremental\0updateButtons\0textChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FindWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    0,   45,    2, 0x06 /* Public */,
       4,    0,   46,    2, 0x06 /* Public */,
       5,    3,   47,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,   54,    2, 0x08 /* Private */,
      10,    1,   55,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool, QMetaType::Bool,    6,    7,    8,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,

       0        // eod
};

void FindWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FindWidget *_t = static_cast<FindWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->findNext(); break;
        case 1: _t->findPrevious(); break;
        case 2: _t->escapePressed(); break;
        case 3: _t->find((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 4: _t->updateButtons(); break;
        case 5: _t->textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (FindWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FindWidget::findNext)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (FindWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FindWidget::findPrevious)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (FindWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FindWidget::escapePressed)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (FindWidget::*_t)(const QString & , bool , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FindWidget::find)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject FindWidget::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_FindWidget.data,
      qt_meta_data_FindWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *FindWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FindWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_FindWidget.stringdata0))
        return static_cast<void*>(const_cast< FindWidget*>(this));
    return QFrame::qt_metacast(_clname);
}

int FindWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void FindWidget::findNext()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void FindWidget::findPrevious()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void FindWidget::escapePressed()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void FindWidget::find(const QString & _t1, bool _t2, bool _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
struct qt_meta_stringdata_Label_t {
    QByteArrayData data[3];
    char stringdata0[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Label_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Label_t qt_meta_stringdata_Label = {
    {
QT_MOC_LITERAL(0, 0, 5), // "Label"
QT_MOC_LITERAL(1, 6, 13), // "doubleClicked"
QT_MOC_LITERAL(2, 20, 0) // ""

    },
    "Label\0doubleClicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Label[] = {

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
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void Label::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Label *_t = static_cast<Label *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->doubleClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Label::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Label::doubleClicked)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject Label::staticMetaObject = {
    { &QLabel::staticMetaObject, qt_meta_stringdata_Label.data,
      qt_meta_data_Label,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Label::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Label::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Label.stringdata0))
        return static_cast<void*>(const_cast< Label*>(this));
    return QLabel::qt_metacast(_clname);
}

int Label::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
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
void Label::doubleClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
struct qt_meta_stringdata_DisasmView_t {
    QByteArrayData data[1];
    char stringdata0[11];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DisasmView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DisasmView_t qt_meta_stringdata_DisasmView = {
    {
QT_MOC_LITERAL(0, 0, 10) // "DisasmView"

    },
    "DisasmView"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DisasmView[] = {

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

void DisasmView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject DisasmView::staticMetaObject = {
    { &TableView::staticMetaObject, qt_meta_stringdata_DisasmView.data,
      qt_meta_data_DisasmView,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DisasmView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DisasmView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DisasmView.stringdata0))
        return static_cast<void*>(const_cast< DisasmView*>(this));
    return TableView::qt_metacast(_clname);
}

int DisasmView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TableView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
