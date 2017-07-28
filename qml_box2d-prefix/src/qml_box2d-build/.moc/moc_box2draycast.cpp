/****************************************************************************
** Meta object code from reading C++ file 'box2draycast.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../GCompris-qt/external/qml-box2d/box2draycast.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'box2draycast.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Box2DRayCast_t {
    QByteArrayData data[9];
    char stringdata0[86];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Box2DRayCast_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Box2DRayCast_t qt_meta_stringdata_Box2DRayCast = {
    {
QT_MOC_LITERAL(0, 0, 12), // "Box2DRayCast"
QT_MOC_LITERAL(1, 13, 15), // "fixtureReported"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 13), // "Box2DFixture*"
QT_MOC_LITERAL(4, 44, 7), // "fixture"
QT_MOC_LITERAL(5, 52, 5), // "point"
QT_MOC_LITERAL(6, 58, 6), // "normal"
QT_MOC_LITERAL(7, 65, 8), // "fraction"
QT_MOC_LITERAL(8, 74, 11) // "maxFraction"

    },
    "Box2DRayCast\0fixtureReported\0\0"
    "Box2DFixture*\0fixture\0point\0normal\0"
    "fraction\0maxFraction"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Box2DRayCast[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       1,   28, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    4,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QPointF, QMetaType::QPointF, QMetaType::QReal,    4,    5,    6,    7,

 // properties: name, type, flags
       8, QMetaType::Float, 0x00095103,

       0        // eod
};

void Box2DRayCast::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Box2DRayCast *_t = static_cast<Box2DRayCast *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->fixtureReported((*reinterpret_cast< Box2DFixture*(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2])),(*reinterpret_cast< const QPointF(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Box2DRayCast::*_t)(Box2DFixture * , const QPointF & , const QPointF & , qreal );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Box2DRayCast::fixtureReported)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        Box2DRayCast *_t = static_cast<Box2DRayCast *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = _t->maxFraction(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        Box2DRayCast *_t = static_cast<Box2DRayCast *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setMaxFraction(*reinterpret_cast< float*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject Box2DRayCast::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Box2DRayCast.data,
      qt_meta_data_Box2DRayCast,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Box2DRayCast::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Box2DRayCast::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Box2DRayCast.stringdata0))
        return static_cast<void*>(const_cast< Box2DRayCast*>(this));
    if (!strcmp(_clname, "b2RayCastCallback"))
        return static_cast< b2RayCastCallback*>(const_cast< Box2DRayCast*>(this));
    return QObject::qt_metacast(_clname);
}

int Box2DRayCast::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Box2DRayCast::fixtureReported(Box2DFixture * _t1, const QPointF & _t2, const QPointF & _t3, qreal _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
