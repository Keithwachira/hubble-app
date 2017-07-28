/****************************************************************************
** Meta object code from reading C++ file 'box2ddistancejoint.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../GCompris-qt/external/qml-box2d/box2ddistancejoint.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'box2ddistancejoint.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Box2DDistanceJoint_t {
    QByteArrayData data[16];
    char stringdata0[221];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Box2DDistanceJoint_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Box2DDistanceJoint_t qt_meta_stringdata_Box2DDistanceJoint = {
    {
QT_MOC_LITERAL(0, 0, 18), // "Box2DDistanceJoint"
QT_MOC_LITERAL(1, 19, 19), // "localAnchorAChanged"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 19), // "localAnchorBChanged"
QT_MOC_LITERAL(4, 60, 13), // "lengthChanged"
QT_MOC_LITERAL(5, 74, 18), // "frequencyHzChanged"
QT_MOC_LITERAL(6, 93, 19), // "dampingRatioChanged"
QT_MOC_LITERAL(7, 113, 16), // "getReactionForce"
QT_MOC_LITERAL(8, 130, 7), // "float32"
QT_MOC_LITERAL(9, 138, 6), // "inv_dt"
QT_MOC_LITERAL(10, 145, 17), // "getReactionTorque"
QT_MOC_LITERAL(11, 163, 12), // "localAnchorA"
QT_MOC_LITERAL(12, 176, 12), // "localAnchorB"
QT_MOC_LITERAL(13, 189, 6), // "length"
QT_MOC_LITERAL(14, 196, 11), // "frequencyHz"
QT_MOC_LITERAL(15, 208, 12) // "dampingRatio"

    },
    "Box2DDistanceJoint\0localAnchorAChanged\0"
    "\0localAnchorBChanged\0lengthChanged\0"
    "frequencyHzChanged\0dampingRatioChanged\0"
    "getReactionForce\0float32\0inv_dt\0"
    "getReactionTorque\0localAnchorA\0"
    "localAnchorB\0length\0frequencyHz\0"
    "dampingRatio"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Box2DDistanceJoint[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       5,   60, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    0,   50,    2, 0x06 /* Public */,
       4,    0,   51,    2, 0x06 /* Public */,
       5,    0,   52,    2, 0x06 /* Public */,
       6,    0,   53,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       7,    1,   54,    2, 0x02 /* Public */,
      10,    1,   57,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::QPointF, 0x80000000 | 8,    9,
    QMetaType::Float, 0x80000000 | 8,    9,

 // properties: name, type, flags
      11, QMetaType::QPointF, 0x00495103,
      12, QMetaType::QPointF, 0x00495103,
      13, QMetaType::Float, 0x00495103,
      14, QMetaType::Float, 0x00495103,
      15, QMetaType::Float, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,

       0        // eod
};

void Box2DDistanceJoint::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Box2DDistanceJoint *_t = static_cast<Box2DDistanceJoint *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->localAnchorAChanged(); break;
        case 1: _t->localAnchorBChanged(); break;
        case 2: _t->lengthChanged(); break;
        case 3: _t->frequencyHzChanged(); break;
        case 4: _t->dampingRatioChanged(); break;
        case 5: { QPointF _r = _t->getReactionForce((*reinterpret_cast< float32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPointF*>(_a[0]) = _r; }  break;
        case 6: { float _r = _t->getReactionTorque((*reinterpret_cast< float32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Box2DDistanceJoint::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Box2DDistanceJoint::localAnchorAChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Box2DDistanceJoint::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Box2DDistanceJoint::localAnchorBChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Box2DDistanceJoint::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Box2DDistanceJoint::lengthChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (Box2DDistanceJoint::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Box2DDistanceJoint::frequencyHzChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (Box2DDistanceJoint::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Box2DDistanceJoint::dampingRatioChanged)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        Box2DDistanceJoint *_t = static_cast<Box2DDistanceJoint *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QPointF*>(_v) = _t->localAnchorA(); break;
        case 1: *reinterpret_cast< QPointF*>(_v) = _t->localAnchorB(); break;
        case 2: *reinterpret_cast< float*>(_v) = _t->length(); break;
        case 3: *reinterpret_cast< float*>(_v) = _t->frequencyHz(); break;
        case 4: *reinterpret_cast< float*>(_v) = _t->dampingRatio(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        Box2DDistanceJoint *_t = static_cast<Box2DDistanceJoint *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setLocalAnchorA(*reinterpret_cast< QPointF*>(_v)); break;
        case 1: _t->setLocalAnchorB(*reinterpret_cast< QPointF*>(_v)); break;
        case 2: _t->setLength(*reinterpret_cast< float*>(_v)); break;
        case 3: _t->setFrequencyHz(*reinterpret_cast< float*>(_v)); break;
        case 4: _t->setDampingRatio(*reinterpret_cast< float*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject Box2DDistanceJoint::staticMetaObject = {
    { &Box2DJoint::staticMetaObject, qt_meta_stringdata_Box2DDistanceJoint.data,
      qt_meta_data_Box2DDistanceJoint,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Box2DDistanceJoint::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Box2DDistanceJoint::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Box2DDistanceJoint.stringdata0))
        return static_cast<void*>(const_cast< Box2DDistanceJoint*>(this));
    return Box2DJoint::qt_metacast(_clname);
}

int Box2DDistanceJoint::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Box2DJoint::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Box2DDistanceJoint::localAnchorAChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void Box2DDistanceJoint::localAnchorBChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void Box2DDistanceJoint::lengthChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void Box2DDistanceJoint::frequencyHzChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void Box2DDistanceJoint::dampingRatioChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
