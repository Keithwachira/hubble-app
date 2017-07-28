/****************************************************************************
** Meta object code from reading C++ file 'box2dcontact.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../GCompris-qt/external/qml-box2d/box2dcontact.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'box2dcontact.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Box2DContact_t {
    QByteArrayData data[14];
    char stringdata0[154];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Box2DContact_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Box2DContact_t qt_meta_stringdata_Box2DContact = {
    {
QT_MOC_LITERAL(0, 0, 12), // "Box2DContact"
QT_MOC_LITERAL(1, 13, 10), // "isTouching"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 13), // "resetFriction"
QT_MOC_LITERAL(4, 39, 16), // "resetRestitution"
QT_MOC_LITERAL(5, 56, 7), // "enabled"
QT_MOC_LITERAL(6, 64, 8), // "fixtureA"
QT_MOC_LITERAL(7, 73, 13), // "Box2DFixture*"
QT_MOC_LITERAL(8, 87, 8), // "fixtureB"
QT_MOC_LITERAL(9, 96, 11), // "childIndexA"
QT_MOC_LITERAL(10, 108, 11), // "childIndexB"
QT_MOC_LITERAL(11, 120, 8), // "friction"
QT_MOC_LITERAL(12, 129, 11), // "restitution"
QT_MOC_LITERAL(13, 141, 12) // "tangentSpeed"

    },
    "Box2DContact\0isTouching\0\0resetFriction\0"
    "resetRestitution\0enabled\0fixtureA\0"
    "Box2DFixture*\0fixtureB\0childIndexA\0"
    "childIndexB\0friction\0restitution\0"
    "tangentSpeed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Box2DContact[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       8,   32, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x02 /* Public */,
       3,    0,   30,    2, 0x02 /* Public */,
       4,    0,   31,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       5, QMetaType::Bool, 0x00095103,
       6, 0x80000000 | 7, 0x00095009,
       8, 0x80000000 | 7, 0x00095009,
       9, QMetaType::Int, 0x00095001,
      10, QMetaType::Int, 0x00095001,
      11, QMetaType::QReal, 0x00095103,
      12, QMetaType::QReal, 0x00095103,
      13, QMetaType::QReal, 0x00095103,

       0        // eod
};

void Box2DContact::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Box2DContact *_t = static_cast<Box2DContact *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { bool _r = _t->isTouching();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 1: _t->resetFriction(); break;
        case 2: _t->resetRestitution(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        Box2DContact *_t = static_cast<Box2DContact *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isEnabled(); break;
        case 1: *reinterpret_cast< Box2DFixture**>(_v) = _t->fixtureA(); break;
        case 2: *reinterpret_cast< Box2DFixture**>(_v) = _t->fixtureB(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->childIndexA(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->childIndexB(); break;
        case 5: *reinterpret_cast< qreal*>(_v) = _t->getFriction(); break;
        case 6: *reinterpret_cast< qreal*>(_v) = _t->getRestitution(); break;
        case 7: *reinterpret_cast< qreal*>(_v) = _t->getTangentSpeed(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        Box2DContact *_t = static_cast<Box2DContact *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 5: _t->setFriction(*reinterpret_cast< qreal*>(_v)); break;
        case 6: _t->setRestitution(*reinterpret_cast< qreal*>(_v)); break;
        case 7: _t->setTangentSpeed(*reinterpret_cast< qreal*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject Box2DContact::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Box2DContact.data,
      qt_meta_data_Box2DContact,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Box2DContact::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Box2DContact::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Box2DContact.stringdata0))
        return static_cast<void*>(const_cast< Box2DContact*>(this));
    return QObject::qt_metacast(_clname);
}

int Box2DContact::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 8;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
