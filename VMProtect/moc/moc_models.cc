/****************************************************************************
** Meta object code from reading C++ file 'models.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../models.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'models.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_BaseModel_t {
    QByteArrayData data[8];
    char stringdata0[74];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BaseModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BaseModel_t qt_meta_stringdata_BaseModel = {
    {
QT_MOC_LITERAL(0, 0, 9), // "BaseModel"
QT_MOC_LITERAL(1, 10, 11), // "nodeUpdated"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 12), // "ProjectNode*"
QT_MOC_LITERAL(4, 36, 4), // "node"
QT_MOC_LITERAL(5, 41, 11), // "nodeRemoved"
QT_MOC_LITERAL(6, 53, 13), // "objectRemoved"
QT_MOC_LITERAL(7, 67, 6) // "object"

    },
    "BaseModel\0nodeUpdated\0\0ProjectNode*\0"
    "node\0nodeRemoved\0objectRemoved\0object"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BaseModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       5,    1,   32,    2, 0x06 /* Public */,
       6,    1,   35,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::VoidStar,    7,

       0        // eod
};

void BaseModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BaseModel *_t = static_cast<BaseModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->nodeUpdated((*reinterpret_cast< ProjectNode*(*)>(_a[1]))); break;
        case 1: _t->nodeRemoved((*reinterpret_cast< ProjectNode*(*)>(_a[1]))); break;
        case 2: _t->objectRemoved((*reinterpret_cast< void*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (BaseModel::*_t)(ProjectNode * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BaseModel::nodeUpdated)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (BaseModel::*_t)(ProjectNode * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BaseModel::nodeRemoved)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (BaseModel::*_t)(void * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BaseModel::objectRemoved)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject BaseModel::staticMetaObject = {
    { &QAbstractItemModel::staticMetaObject, qt_meta_stringdata_BaseModel.data,
      qt_meta_data_BaseModel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *BaseModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BaseModel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_BaseModel.stringdata0))
        return static_cast<void*>(const_cast< BaseModel*>(this));
    if (!strcmp(_clname, "IProjectNodesModel"))
        return static_cast< IProjectNodesModel*>(const_cast< BaseModel*>(this));
    return QAbstractItemModel::qt_metacast(_clname);
}

int BaseModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void BaseModel::nodeUpdated(ProjectNode * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void BaseModel::nodeRemoved(ProjectNode * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void BaseModel::objectRemoved(void * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
struct qt_meta_stringdata_ProjectModel_t {
    QByteArrayData data[3];
    char stringdata0[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ProjectModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ProjectModel_t qt_meta_stringdata_ProjectModel = {
    {
QT_MOC_LITERAL(0, 0, 12), // "ProjectModel"
QT_MOC_LITERAL(1, 13, 8), // "modified"
QT_MOC_LITERAL(2, 22, 0) // ""

    },
    "ProjectModel\0modified\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ProjectModel[] = {

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

void ProjectModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ProjectModel *_t = static_cast<ProjectModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->modified(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ProjectModel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ProjectModel::modified)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject ProjectModel::staticMetaObject = {
    { &BaseModel::staticMetaObject, qt_meta_stringdata_ProjectModel.data,
      qt_meta_data_ProjectModel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ProjectModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ProjectModel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ProjectModel.stringdata0))
        return static_cast<void*>(const_cast< ProjectModel*>(this));
    return BaseModel::qt_metacast(_clname);
}

int ProjectModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BaseModel::qt_metacall(_c, _id, _a);
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
void ProjectModel::modified()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
struct qt_meta_stringdata_InfoModel_t {
    QByteArrayData data[3];
    char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_InfoModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_InfoModel_t qt_meta_stringdata_InfoModel = {
    {
QT_MOC_LITERAL(0, 0, 9), // "InfoModel"
QT_MOC_LITERAL(1, 10, 8), // "modified"
QT_MOC_LITERAL(2, 19, 0) // ""

    },
    "InfoModel\0modified\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_InfoModel[] = {

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

void InfoModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        InfoModel *_t = static_cast<InfoModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->modified(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (InfoModel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&InfoModel::modified)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject InfoModel::staticMetaObject = {
    { &BaseModel::staticMetaObject, qt_meta_stringdata_InfoModel.data,
      qt_meta_data_InfoModel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *InfoModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *InfoModel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_InfoModel.stringdata0))
        return static_cast<void*>(const_cast< InfoModel*>(this));
    return BaseModel::qt_metacast(_clname);
}

int InfoModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BaseModel::qt_metacall(_c, _id, _a);
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
void InfoModel::modified()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
struct qt_meta_stringdata_MapFunctionBundleListModel_t {
    QByteArrayData data[1];
    char stringdata0[27];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MapFunctionBundleListModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MapFunctionBundleListModel_t qt_meta_stringdata_MapFunctionBundleListModel = {
    {
QT_MOC_LITERAL(0, 0, 26) // "MapFunctionBundleListModel"

    },
    "MapFunctionBundleListModel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MapFunctionBundleListModel[] = {

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

void MapFunctionBundleListModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject MapFunctionBundleListModel::staticMetaObject = {
    { &QAbstractItemModel::staticMetaObject, qt_meta_stringdata_MapFunctionBundleListModel.data,
      qt_meta_data_MapFunctionBundleListModel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MapFunctionBundleListModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MapFunctionBundleListModel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MapFunctionBundleListModel.stringdata0))
        return static_cast<void*>(const_cast< MapFunctionBundleListModel*>(this));
    return QAbstractItemModel::qt_metacast(_clname);
}

int MapFunctionBundleListModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_MapFunctionListModel_t {
    QByteArrayData data[1];
    char stringdata0[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MapFunctionListModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MapFunctionListModel_t qt_meta_stringdata_MapFunctionListModel = {
    {
QT_MOC_LITERAL(0, 0, 20) // "MapFunctionListModel"

    },
    "MapFunctionListModel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MapFunctionListModel[] = {

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

void MapFunctionListModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject MapFunctionListModel::staticMetaObject = {
    { &QAbstractItemModel::staticMetaObject, qt_meta_stringdata_MapFunctionListModel.data,
      qt_meta_data_MapFunctionListModel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MapFunctionListModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MapFunctionListModel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MapFunctionListModel.stringdata0))
        return static_cast<void*>(const_cast< MapFunctionListModel*>(this));
    return QAbstractItemModel::qt_metacast(_clname);
}

int MapFunctionListModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_WatermarksModel_t {
    QByteArrayData data[1];
    char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WatermarksModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WatermarksModel_t qt_meta_stringdata_WatermarksModel = {
    {
QT_MOC_LITERAL(0, 0, 15) // "WatermarksModel"

    },
    "WatermarksModel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WatermarksModel[] = {

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

void WatermarksModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject WatermarksModel::staticMetaObject = {
    { &BaseModel::staticMetaObject, qt_meta_stringdata_WatermarksModel.data,
      qt_meta_data_WatermarksModel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WatermarksModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WatermarksModel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WatermarksModel.stringdata0))
        return static_cast<void*>(const_cast< WatermarksModel*>(this));
    return BaseModel::qt_metacast(_clname);
}

int WatermarksModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BaseModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_TemplatesModel_t {
    QByteArrayData data[1];
    char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TemplatesModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TemplatesModel_t qt_meta_stringdata_TemplatesModel = {
    {
QT_MOC_LITERAL(0, 0, 14) // "TemplatesModel"

    },
    "TemplatesModel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TemplatesModel[] = {

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

void TemplatesModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject TemplatesModel::staticMetaObject = {
    { &BaseModel::staticMetaObject, qt_meta_stringdata_TemplatesModel.data,
      qt_meta_data_TemplatesModel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *TemplatesModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TemplatesModel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_TemplatesModel.stringdata0))
        return static_cast<void*>(const_cast< TemplatesModel*>(this));
    return BaseModel::qt_metacast(_clname);
}

int TemplatesModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BaseModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_ProjectTreeDelegate_t {
    QByteArrayData data[1];
    char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ProjectTreeDelegate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ProjectTreeDelegate_t qt_meta_stringdata_ProjectTreeDelegate = {
    {
QT_MOC_LITERAL(0, 0, 19) // "ProjectTreeDelegate"

    },
    "ProjectTreeDelegate"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ProjectTreeDelegate[] = {

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

void ProjectTreeDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject ProjectTreeDelegate::staticMetaObject = {
    { &TreeViewItemDelegate::staticMetaObject, qt_meta_stringdata_ProjectTreeDelegate.data,
      qt_meta_data_ProjectTreeDelegate,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ProjectTreeDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ProjectTreeDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ProjectTreeDelegate.stringdata0))
        return static_cast<void*>(const_cast< ProjectTreeDelegate*>(this));
    return TreeViewItemDelegate::qt_metacast(_clname);
}

int ProjectTreeDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TreeViewItemDelegate::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_WatermarksTreeDelegate_t {
    QByteArrayData data[1];
    char stringdata0[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WatermarksTreeDelegate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WatermarksTreeDelegate_t qt_meta_stringdata_WatermarksTreeDelegate = {
    {
QT_MOC_LITERAL(0, 0, 22) // "WatermarksTreeDelegate"

    },
    "WatermarksTreeDelegate"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WatermarksTreeDelegate[] = {

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

void WatermarksTreeDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject WatermarksTreeDelegate::staticMetaObject = {
    { &TreeViewItemDelegate::staticMetaObject, qt_meta_stringdata_WatermarksTreeDelegate.data,
      qt_meta_data_WatermarksTreeDelegate,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WatermarksTreeDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WatermarksTreeDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WatermarksTreeDelegate.stringdata0))
        return static_cast<void*>(const_cast< WatermarksTreeDelegate*>(this));
    return TreeViewItemDelegate::qt_metacast(_clname);
}

int WatermarksTreeDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TreeViewItemDelegate::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_TemplatesTreeDelegate_t {
    QByteArrayData data[1];
    char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TemplatesTreeDelegate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TemplatesTreeDelegate_t qt_meta_stringdata_TemplatesTreeDelegate = {
    {
QT_MOC_LITERAL(0, 0, 21) // "TemplatesTreeDelegate"

    },
    "TemplatesTreeDelegate"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TemplatesTreeDelegate[] = {

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

void TemplatesTreeDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject TemplatesTreeDelegate::staticMetaObject = {
    { &TreeViewItemDelegate::staticMetaObject, qt_meta_stringdata_TemplatesTreeDelegate.data,
      qt_meta_data_TemplatesTreeDelegate,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *TemplatesTreeDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TemplatesTreeDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_TemplatesTreeDelegate.stringdata0))
        return static_cast<void*>(const_cast< TemplatesTreeDelegate*>(this));
    return TreeViewItemDelegate::qt_metacast(_clname);
}

int TemplatesTreeDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TreeViewItemDelegate::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
