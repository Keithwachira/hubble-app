/****************************************************************************
** Meta object code from reading C++ file 'ActivityInfoTree.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../GCompris-qt/src/core/ActivityInfoTree.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ActivityInfoTree.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ActivityInfoTree_t {
    QByteArrayData data[24];
    char stringdata0[353];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ActivityInfoTree_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ActivityInfoTree_t qt_meta_stringdata_ActivityInfoTree = {
    {
QT_MOC_LITERAL(0, 0, 16), // "ActivityInfoTree"
QT_MOC_LITERAL(1, 17, 15), // "menuTreeChanged"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 22), // "currentActivityChanged"
QT_MOC_LITERAL(4, 57, 20), // "allCharactersChanged"
QT_MOC_LITERAL(5, 78, 11), // "filterByTag"
QT_MOC_LITERAL(6, 90, 3), // "tag"
QT_MOC_LITERAL(7, 94, 11), // "emitChanged"
QT_MOC_LITERAL(8, 106, 22), // "filterLockedActivities"
QT_MOC_LITERAL(9, 129, 23), // "filterEnabledActivities"
QT_MOC_LITERAL(10, 153, 27), // "filterCreatedWithinVersions"
QT_MOC_LITERAL(11, 181, 12), // "firstVersion"
QT_MOC_LITERAL(12, 194, 11), // "lastVersion"
QT_MOC_LITERAL(13, 206, 14), // "filterBySearch"
QT_MOC_LITERAL(14, 221, 4), // "text"
QT_MOC_LITERAL(15, 226, 18), // "filterByDifficulty"
QT_MOC_LITERAL(16, 245, 8), // "levelMin"
QT_MOC_LITERAL(17, 254, 8), // "levelMax"
QT_MOC_LITERAL(18, 263, 8), // "rootMenu"
QT_MOC_LITERAL(19, 272, 13), // "ActivityInfo*"
QT_MOC_LITERAL(20, 286, 8), // "menuTree"
QT_MOC_LITERAL(21, 295, 30), // "QQmlListProperty<ActivityInfo>"
QT_MOC_LITERAL(22, 326, 15), // "currentActivity"
QT_MOC_LITERAL(23, 342, 10) // "characters"

    },
    "ActivityInfoTree\0menuTreeChanged\0\0"
    "currentActivityChanged\0allCharactersChanged\0"
    "filterByTag\0tag\0emitChanged\0"
    "filterLockedActivities\0filterEnabledActivities\0"
    "filterCreatedWithinVersions\0firstVersion\0"
    "lastVersion\0filterBySearch\0text\0"
    "filterByDifficulty\0levelMin\0levelMax\0"
    "rootMenu\0ActivityInfo*\0menuTree\0"
    "QQmlListProperty<ActivityInfo>\0"
    "currentActivity\0characters"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ActivityInfoTree[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       4,  118, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x06 /* Public */,
       3,    0,   80,    2, 0x06 /* Public */,
       4,    0,   81,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    2,   82,    2, 0x09 /* Protected */,
       5,    1,   87,    2, 0x29 /* Protected | MethodCloned */,
       8,    1,   90,    2, 0x09 /* Protected */,
       8,    0,   93,    2, 0x29 /* Protected | MethodCloned */,
       9,    1,   94,    2, 0x09 /* Protected */,
       9,    0,   97,    2, 0x29 /* Protected | MethodCloned */,
      10,    3,   98,    2, 0x09 /* Protected */,
      10,    2,  105,    2, 0x29 /* Protected | MethodCloned */,
      13,    1,  110,    2, 0x09 /* Protected */,
      15,    2,  113,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    6,    7,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Bool,   11,   12,    7,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   11,   12,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   16,   17,

 // properties: name, type, flags
      18, 0x80000000 | 19, 0x00095409,
      20, 0x80000000 | 21, 0x00495009,
      22, 0x80000000 | 19, 0x0049510b,
      23, QMetaType::QVariantList, 0x00095401,

 // properties: notify_signal_id
       0,
       0,
       1,
       0,

       0        // eod
};

void ActivityInfoTree::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ActivityInfoTree *_t = static_cast<ActivityInfoTree *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->menuTreeChanged(); break;
        case 1: _t->currentActivityChanged(); break;
        case 2: _t->allCharactersChanged(); break;
        case 3: _t->filterByTag((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 4: _t->filterByTag((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->filterLockedActivities((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->filterLockedActivities(); break;
        case 7: _t->filterEnabledActivities((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->filterEnabledActivities(); break;
        case 9: _t->filterCreatedWithinVersions((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 10: _t->filterCreatedWithinVersions((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 11: _t->filterBySearch((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->filterByDifficulty((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ActivityInfoTree::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ActivityInfoTree::menuTreeChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ActivityInfoTree::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ActivityInfoTree::currentActivityChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (ActivityInfoTree::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ActivityInfoTree::allCharactersChanged)) {
                *result = 2;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ActivityInfo* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        ActivityInfoTree *_t = static_cast<ActivityInfoTree *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< ActivityInfo**>(_v) = _t->getRootMenu(); break;
        case 1: *reinterpret_cast< QQmlListProperty<ActivityInfo>*>(_v) = _t->menuTree(); break;
        case 2: *reinterpret_cast< ActivityInfo**>(_v) = _t->getCurrentActivity(); break;
        case 3: *reinterpret_cast< QVariantList*>(_v) = _t->allCharacters(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        ActivityInfoTree *_t = static_cast<ActivityInfoTree *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 2: _t->setCurrentActivity(*reinterpret_cast< ActivityInfo**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject ActivityInfoTree::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ActivityInfoTree.data,
      qt_meta_data_ActivityInfoTree,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ActivityInfoTree::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ActivityInfoTree::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ActivityInfoTree.stringdata0))
        return static_cast<void*>(const_cast< ActivityInfoTree*>(this));
    return QObject::qt_metacast(_clname);
}

int ActivityInfoTree::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ActivityInfoTree::menuTreeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void ActivityInfoTree::currentActivityChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void ActivityInfoTree::allCharactersChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
