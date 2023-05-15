/****************************************************************************
** Meta object code from reading C++ file 'help_browser.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../help_browser.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'help_browser.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_HelpResultModel_t {
    QByteArrayData data[5];
    char stringdata0[49];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HelpResultModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HelpResultModel_t qt_meta_stringdata_HelpResultModel = {
    {
QT_MOC_LITERAL(0, 0, 15), // "HelpResultModel"
QT_MOC_LITERAL(1, 16, 8), // "finished"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 4), // "hits"
QT_MOC_LITERAL(4, 31, 17) // "searchingFinished"

    },
    "HelpResultModel\0finished\0\0hits\0"
    "searchingFinished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HelpResultModel[] = {

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
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void HelpResultModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HelpResultModel *_t = static_cast<HelpResultModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->finished((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->searchingFinished(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (HelpResultModel::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HelpResultModel::finished)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject HelpResultModel::staticMetaObject = {
    { &QAbstractItemModel::staticMetaObject, qt_meta_stringdata_HelpResultModel.data,
      qt_meta_data_HelpResultModel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *HelpResultModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HelpResultModel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_HelpResultModel.stringdata0))
        return static_cast<void*>(const_cast< HelpResultModel*>(this));
    return QAbstractItemModel::qt_metacast(_clname);
}

int HelpResultModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void HelpResultModel::finished(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_HelpBrowser_t {
    QByteArrayData data[21];
    char stringdata0[263];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HelpBrowser_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HelpBrowser_t qt_meta_stringdata_HelpBrowser = {
    {
QT_MOC_LITERAL(0, 0, 11), // "HelpBrowser"
QT_MOC_LITERAL(1, 12, 8), // "syncTree"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 16), // "searchBoxChanged"
QT_MOC_LITERAL(4, 39, 17), // "searchingFinished"
QT_MOC_LITERAL(5, 57, 20), // "highlightSearchTerms"
QT_MOC_LITERAL(6, 78, 8), // "findNext"
QT_MOC_LITERAL(7, 87, 12), // "findPrevious"
QT_MOC_LITERAL(8, 100, 4), // "find"
QT_MOC_LITERAL(9, 105, 3), // "ttf"
QT_MOC_LITERAL(10, 109, 7), // "forward"
QT_MOC_LITERAL(11, 117, 11), // "incremental"
QT_MOC_LITERAL(12, 129, 20), // "contentWidgetClicked"
QT_MOC_LITERAL(13, 150, 5), // "index"
QT_MOC_LITERAL(14, 156, 19), // "resultWidgetClicked"
QT_MOC_LITERAL(15, 176, 11), // "pathClicked"
QT_MOC_LITERAL(16, 188, 4), // "link"
QT_MOC_LITERAL(17, 193, 18), // "resultCloseClicked"
QT_MOC_LITERAL(18, 212, 15), // "contentsCreated"
QT_MOC_LITERAL(19, 228, 30), // "handleNavigateToKeywordCommand"
QT_MOC_LITERAL(20, 259, 3) // "arg"

    },
    "HelpBrowser\0syncTree\0\0searchBoxChanged\0"
    "searchingFinished\0highlightSearchTerms\0"
    "findNext\0findPrevious\0find\0ttf\0forward\0"
    "incremental\0contentWidgetClicked\0index\0"
    "resultWidgetClicked\0pathClicked\0link\0"
    "resultCloseClicked\0contentsCreated\0"
    "handleNavigateToKeywordCommand\0arg"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HelpBrowser[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x09 /* Protected */,
       3,    0,   82,    2, 0x09 /* Protected */,
       4,    0,   83,    2, 0x09 /* Protected */,
       5,    0,   84,    2, 0x09 /* Protected */,
       6,    0,   85,    2, 0x09 /* Protected */,
       7,    0,   86,    2, 0x09 /* Protected */,
       8,    3,   87,    2, 0x09 /* Protected */,
      12,    1,   94,    2, 0x09 /* Protected */,
      14,    1,   97,    2, 0x09 /* Protected */,
      15,    1,  100,    2, 0x09 /* Protected */,
      17,    0,  103,    2, 0x09 /* Protected */,
      18,    0,  104,    2, 0x09 /* Protected */,
      19,    1,  105,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::QUrl,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool, QMetaType::Bool,    9,   10,   11,
    QMetaType::Void, QMetaType::QModelIndex,   13,
    QMetaType::Void, QMetaType::QModelIndex,   13,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   20,

       0        // eod
};

void HelpBrowser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HelpBrowser *_t = static_cast<HelpBrowser *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->syncTree((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 1: _t->searchBoxChanged(); break;
        case 2: _t->searchingFinished(); break;
        case 3: _t->highlightSearchTerms(); break;
        case 4: _t->findNext(); break;
        case 5: _t->findPrevious(); break;
        case 6: _t->find((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 7: _t->contentWidgetClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 8: _t->resultWidgetClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 9: _t->pathClicked((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->resultCloseClicked(); break;
        case 11: _t->contentsCreated(); break;
        case 12: _t->handleNavigateToKeywordCommand((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject HelpBrowser::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_HelpBrowser.data,
      qt_meta_data_HelpBrowser,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *HelpBrowser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HelpBrowser::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_HelpBrowser.stringdata0))
        return static_cast<void*>(const_cast< HelpBrowser*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int HelpBrowser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
