/****************************************************************************
** Meta object code from reading C++ file 'box2dwheeljoint.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../GCompris-qt/external/qml-box2d/box2dwheeljoint.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'box2dwheeljoint.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Box2DWheelJoint_t {
    QByteArrayData data[24];
    char stringdata0[357];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Box2DWheelJoint_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Box2DWheelJoint_t qt_meta_stringdata_Box2DWheelJoint = {
    {
QT_MOC_LITERAL(0, 0, 15), // "Box2DWheelJoint"
QT_MOC_LITERAL(1, 16, 19), // "localAnchorAChanged"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 19), // "localAnchorBChanged"
QT_MOC_LITERAL(4, 57, 17), // "localAxisAChanged"
QT_MOC_LITERAL(5, 75, 18), // "enableMotorChanged"
QT_MOC_LITERAL(6, 94, 21), // "maxMotorTorqueChanged"
QT_MOC_LITERAL(7, 116, 17), // "motorSpeedChanged"
QT_MOC_LITERAL(8, 134, 18), // "frequencyHzChanged"
QT_MOC_LITERAL(9, 153, 19), // "dampingRatioChanged"
QT_MOC_LITERAL(10, 173, 16), // "getReactionForce"
QT_MOC_LITERAL(11, 190, 7), // "float32"
QT_MOC_LITERAL(12, 198, 6), // "inv_dt"
QT_MOC_LITERAL(13, 205, 17), // "getReactionTorque"
QT_MOC_LITERAL(14, 223, 19), // "getJointTranslation"
QT_MOC_LITERAL(15, 243, 13), // "getJointSpeed"
QT_MOC_LITERAL(16, 257, 12), // "localAnchorA"
QT_MOC_LITERAL(17, 270, 12), // "localAnchorB"
QT_MOC_LITERAL(18, 283, 10), // "localAxisA"
QT_MOC_LITERAL(19, 294, 12), // "dampingRatio"
QT_MOC_LITERAL(20, 307, 11), // "frequencyHz"
QT_MOC_LITERAL(21, 319, 14), // "maxMotorTorque"
QT_MOC_LITERAL(22, 334, 10), // "motorSpeed"
QT_MOC_LITERAL(23, 345, 11) // "enableMotor"

    },
    "Box2DWheelJoint\0localAnchorAChanged\0"
    "\0localAnchorBChanged\0localAxisAChanged\0"
    "enableMotorChanged\0maxMotorTorqueChanged\0"
    "motorSpeedChanged\0frequencyHzChanged\0"
    "dampingRatioChanged\0getReactionForce\0"
    "float32\0inv_dt\0getReactionTorque\0"
    "getJointTranslation\0getJointSpeed\0"
    "localAnchorA\0localAnchorB\0localAxisA\0"
    "dampingRatio\0frequencyHz\0maxMotorTorque\0"
    "motorSpeed\0enableMotor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Box2DWheelJoint[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       8,   90, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x06 /* Public */,
       3,    0,   75,    2, 0x06 /* Public */,
       4,    0,   76,    2, 0x06 /* Public */,
       5,    0,   77,    2, 0x06 /* Public */,
       6,    0,   78,    2, 0x06 /* Public */,
       7,    0,   79,    2, 0x06 /* Public */,
       8,    0,   80,    2, 0x06 /* Public */,
       9,    0,   81,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
      10,    1,   82,    2, 0x02 /* Public */,
      13,    1,   85,    2, 0x02 /* Public */,
      14,    0,   88,    2, 0x02 /* Public */,
      15,    0,   89,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::QPointF, 0x80000000 | 11,   12,
    QMetaType::Float, 0x80000000 | 11,   12,
    QMetaType::Float,
    QMetaType::Float,

 // properties: name, type, flags
      16, QMetaType::QPointF, 0x00495103,
      17, QMetaType::QPointF, 0x00495103,
      18, QMetaType::QPointF, 0x00495103,
      19, QMetaType::Float, 0x00495103,
      20, QMetaType::Float, 0x00495103,
      21, QMetaType::Float, 0x00495103,
      22, QMetaType::Float, 0x00495103,
      23, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       7,
       6,
       4,
       5,
       3,

       0        // eod
};

void Box2DWheelJoint::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Box2DWheelJoint *_t = static_cast<Box2DWheelJoint *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->localAnchorAChanged(); break;
        case 1: _t->localAnchorBChanged(); break;
        case 2: _t->localAxisAChanged(); break;
        case 3: _t->enableMotorChanged(); break;
        case 4: _t->maxMotorTorqueChanged(); break;
        case 5: _t->motorSpeedChanged(); break;
        case 6: _t->frequencyHzChanged(); break;
        case 7: _t->dampingRatioChanged(); break;
        case 8: { QPointF _r = _t->getReactionForce((*reinterpret_cast< float32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPointF*>(_a[0]) = _r; }  break;
        case 9: { float _r = _t->getReactionTorque((*reinterpret_cast< float32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        case 10: { float _r = _t->getJointTranslation();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        case 11: { float _r = _t->getJointSpeed();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Box2DWheelJoint::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Box2DWheelJoint::localAnchorAChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Box2DWheelJoint::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Box2DWheelJoint::localAnchorBChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Box2DWheelJoint::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Box2DWheelJoint::localAxisAChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (Box2DWheelJoint::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Box2DWheelJoint::enableMotorChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (Box2DWheelJoint::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Box2DWheelJoint::maxMotorTorqueChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (Box2DWheelJoint::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Box2DWheelJoint::motorSpeedChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (Box2DWheelJoint::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Box2DWheelJoint::frequencyHzChanged)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (Box2DWheelJoint::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Box2DWheelJoint::dampingRatioChanged)) {
                *result = 7;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        Box2DWheelJoint *_t = static_cast<Box2DWheelJoint *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QPointF*>(_v) = _t->localAnchorA(); break;
        case 1: *reinterpret_cast< QPointF*>(_v) = _t->localAnchorB(); break;
        case 2: *reinterpret_cast< QPointF*>(_v) = _t->localAxisA(); break;
        case 3: *reinterpret_cast< float*>(_v) = _t->dampingRatio(); break;
        case 4: *reinterpret_cast< float*>(_v) = _t->frequencyHz(); break;
        case 5: *reinterpret_cast< float*>(_v) = _t->maxMotorTorque(); break;
        case 6: *reinterpret_cast< float*>(_v) = _t->motorSpeed(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->enableMotor(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        Box2DWheelJoint *_t = static_cast<Box2DWheelJoint *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setLocalAnchorA(*reinterpret_cast< QPointF*>(_v)); break;
        case 1: _t->setLocalAnchorB(*reinterpret_cast< QPointF*>(_v)); break;
        case 2: _t->setLocalAxisA(*reinterpret_cast< QPointF*>(_v)); break;
        case 3: _t->setDampingRatio(*reinterpret_cast< float*>(_v)); break;
        case 4: _t->setFrequencyHz(*reinterpret_cast< float*>(_v)); break;
        case 5: _t->setMaxMotorTorque(*reinterpret_cast< float*>(_v)); break;
        case 6: _t->setMotorSpeed(*reinterpret_cast< float*>(_v)); break;
        case 7: _t->setEnableMotor(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject Box2DWheelJoint::staticMetaObject = {
    { &Box2DJoint::staticMetaObject, qt_meta_stringdata_Box2DWheelJoint.data,
      qt_meta_data_Box2DWheelJoint,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Box2DWheelJoint::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Box2DWheelJoint::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Box2DWheelJoint.stringdata0))
        return static_cast<void*>(const_cast< Box2DWheelJoint*>(this));
    return Box2DJoint::qt_metacast(_clname);
}

int Box2DWheelJoint::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Box2DJoint::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
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

// SIGNAL 0
void Box2DWheelJoint::localAnchorAChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void Box2DWheelJoint::localAnchorBChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void Box2DWheelJoint::localAxisAChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void Box2DWheelJoint::enableMotorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void Box2DWheelJoint::maxMotorTorqueChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void Box2DWheelJoint::motorSpeedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}

// SIGNAL 6
void Box2DWheelJoint::frequencyHzChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, Q_NULLPTR);
}

// SIGNAL 7
void Box2DWheelJoint::dampingRatioChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
