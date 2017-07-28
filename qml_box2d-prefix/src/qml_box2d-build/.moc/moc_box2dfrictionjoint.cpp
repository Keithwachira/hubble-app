/****************************************************************************
** Meta object code from reading C++ file 'box2dfrictionjoint.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../GCompris-qt/external/qml-box2d/box2dfrictionjoint.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'box2dfrictionjoint.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Box2DFrictionJoint_t {
    QByteArrayData data[14];
    char stringdata0[188];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Box2DFrictionJoint_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Box2DFrictionJoint_t qt_meta_stringdata_Box2DFrictionJoint = {
    {
QT_MOC_LITERAL(0, 0, 18), // "Box2DFrictionJoint"
QT_MOC_LITERAL(1, 19, 19), // "localAnchorAChanged"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 19), // "localAnchorBChanged"
QT_MOC_LITERAL(4, 60, 15), // "maxForceChanged"
QT_MOC_LITERAL(5, 76, 16), // "maxTorqueChanged"
QT_MOC_LITERAL(6, 93, 16), // "getReactionForce"
QT_MOC_LITERAL(7, 110, 7), // "float32"
QT_MOC_LITERAL(8, 118, 6), // "inv_dt"
QT_MOC_LITERAL(9, 125, 17), // "getReactionTorque"
QT_MOC_LITERAL(10, 143, 12), // "localAnchorA"
QT_MOC_LITERAL(11, 156, 12), // "localAnchorB"
QT_MOC_LITERAL(12, 169, 8), // "maxForce"
QT_MOC_LITERAL(13, 178, 9) // "maxTorque"

    },
    "Box2DFrictionJoint\0localAnchorAChanged\0"
    "\0localAnchorBChanged\0maxForceChanged\0"
    "maxTorqueChanged\0getReactionForce\0"
    "float32\0inv_dt\0getReactionTorque\0"
    "localAnchorA\0localAnchorB\0maxForce\0"
    "maxTorque"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Box2DFrictionJoint[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       4,   54, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    0,   45,    2, 0x06 /* Public */,
       4,    0,   46,    2, 0x06 /* Public */,
       5,    0,   47,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       6,    1,   48,    2, 0x02 /* Public */,
       9,    1,   51,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::QPointF, 0x80000000 | 7,    8,
    QMetaType::Float, 0x80000000 | 7,    8,

 // properties: name, type, flags
      10, QMetaType::QPointF, 0x00495103,
      11, QMetaType::QPointF, 0x00495103,
      12, QMetaType::Float, 0x00495103,
      13, QMetaType::Float, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,

       0        // eod
};

void Box2DFrictionJoint::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Box2DFrictionJoint *_t = static_cast<Box2DFrictionJoint *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->localAnchorAChanged(); break;
        case 1: _t->localAnchorBChanged(); break;
        case 2: _t->maxForceChanged(); break;
        case 3: _t->maxTorqueChanged(); break;
        case 4: { QPointF _r = _t->getReactionForce((*reinterpret_cast< float32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPointF*>(_a[0]) = _r; }  break;
        case 5: { float _r = _t->getReactionTorque((*reinterpret_cast< float32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Box2DFrictionJoint::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Box2DFrictionJoint::localAnchorAChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Box2DFrictionJoint::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Box2DFrictionJoint::localAnchorBChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Box2DFrictionJoint::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Box2DFrictionJoint::maxForceChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (Box2DFrictionJoint::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Box2DFrictionJoint::maxTorqueChanged)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        Box2DFrictionJoint *_t = static_cast<Box2DFrictionJoint *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QPointF*>(_v) = _t->localAnchorA(); break;
        case 1: *reinterpret_cast< QPointF*>(_v) = _t->localAnchorB(); break;
        case 2: *reinterpret_cast< float*>(_v) = _t->maxForce(); break;
        case 3: *reinterpret_cast< float*>(_v) = _t->maxTorque(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        Box2DFrictionJoint *_t = static_cast<Box2DFrictionJoint *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setLocalAnchorA(*reinterpret_cast< QPointF*>(_v)); break;
        case 1: _t->setLocalAnchorB(*reinterpret_cast< QPointF*>(_v)); break;
        case 2: _t->setMaxForce(*reinterpret_cast< float*>(_v)); break;
        case 3: _t->setMaxTorque(*reinterpret_cast< float*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject Box2DFrictionJoint::staticMetaObject = {
    { &Box2DJoint::staticMetaObject, qt_meta_stringdata_Box2DFrictionJoint.data,
      qt_meta_data_Box2DFrictionJoint,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Box2DFrictionJoint::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Box2DFrictionJoint::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Box2DFrictionJoint.stringdata0))
        return static_cast<void*>(const_cast< Box2DFrictionJoint*>(this));
    return Box2DJoint::qt_metacast(_clname);
}

int Box2DFrictionJoint::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Box2DJoint::qt_metacall(_c, _id, _a);
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
void Box2DFrictionJoint::localAnchorAChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void Box2DFrictionJoint::localAnchorBChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void Box2DFrictionJoint::maxForceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void Box2DFrictionJoint::maxTorqueChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
