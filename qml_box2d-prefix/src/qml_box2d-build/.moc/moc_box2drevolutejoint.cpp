/****************************************************************************
** Meta object code from reading C++ file 'box2drevolutejoint.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../GCompris-qt/external/qml-box2d/box2drevolutejoint.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'box2drevolutejoint.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Box2DRevoluteJoint_t {
    QByteArrayData data[22];
    char stringdata0[337];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Box2DRevoluteJoint_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Box2DRevoluteJoint_t qt_meta_stringdata_Box2DRevoluteJoint = {
    {
QT_MOC_LITERAL(0, 0, 18), // "Box2DRevoluteJoint"
QT_MOC_LITERAL(1, 19, 19), // "localAnchorAChanged"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 19), // "localAnchorBChanged"
QT_MOC_LITERAL(4, 60, 21), // "referenceAngleChanged"
QT_MOC_LITERAL(5, 82, 18), // "enableLimitChanged"
QT_MOC_LITERAL(6, 101, 17), // "lowerAngleChanged"
QT_MOC_LITERAL(7, 119, 17), // "upperAngleChanged"
QT_MOC_LITERAL(8, 137, 18), // "enableMotorChanged"
QT_MOC_LITERAL(9, 156, 17), // "motorSpeedChanged"
QT_MOC_LITERAL(10, 174, 21), // "maxMotorTorqueChanged"
QT_MOC_LITERAL(11, 196, 13), // "getJointAngle"
QT_MOC_LITERAL(12, 210, 13), // "getJointSpeed"
QT_MOC_LITERAL(13, 224, 12), // "localAnchorA"
QT_MOC_LITERAL(14, 237, 12), // "localAnchorB"
QT_MOC_LITERAL(15, 250, 14), // "referenceAngle"
QT_MOC_LITERAL(16, 265, 11), // "enableLimit"
QT_MOC_LITERAL(17, 277, 10), // "lowerAngle"
QT_MOC_LITERAL(18, 288, 10), // "upperAngle"
QT_MOC_LITERAL(19, 299, 11), // "enableMotor"
QT_MOC_LITERAL(20, 311, 10), // "motorSpeed"
QT_MOC_LITERAL(21, 322, 14) // "maxMotorTorque"

    },
    "Box2DRevoluteJoint\0localAnchorAChanged\0"
    "\0localAnchorBChanged\0referenceAngleChanged\0"
    "enableLimitChanged\0lowerAngleChanged\0"
    "upperAngleChanged\0enableMotorChanged\0"
    "motorSpeedChanged\0maxMotorTorqueChanged\0"
    "getJointAngle\0getJointSpeed\0localAnchorA\0"
    "localAnchorB\0referenceAngle\0enableLimit\0"
    "lowerAngle\0upperAngle\0enableMotor\0"
    "motorSpeed\0maxMotorTorque"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Box2DRevoluteJoint[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       9,   80, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06 /* Public */,
       3,    0,   70,    2, 0x06 /* Public */,
       4,    0,   71,    2, 0x06 /* Public */,
       5,    0,   72,    2, 0x06 /* Public */,
       6,    0,   73,    2, 0x06 /* Public */,
       7,    0,   74,    2, 0x06 /* Public */,
       8,    0,   75,    2, 0x06 /* Public */,
       9,    0,   76,    2, 0x06 /* Public */,
      10,    0,   77,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
      11,    0,   78,    2, 0x02 /* Public */,
      12,    0,   79,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Float,
    QMetaType::Float,

 // properties: name, type, flags
      13, QMetaType::QPointF, 0x00495103,
      14, QMetaType::QPointF, 0x00495103,
      15, QMetaType::Float, 0x00495103,
      16, QMetaType::Bool, 0x00495103,
      17, QMetaType::Float, 0x00495103,
      18, QMetaType::Float, 0x00495103,
      19, QMetaType::Bool, 0x00495103,
      20, QMetaType::Float, 0x00495103,
      21, QMetaType::Float, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,
       6,
       7,
       8,

       0        // eod
};

void Box2DRevoluteJoint::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Box2DRevoluteJoint *_t = static_cast<Box2DRevoluteJoint *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->localAnchorAChanged(); break;
        case 1: _t->localAnchorBChanged(); break;
        case 2: _t->referenceAngleChanged(); break;
        case 3: _t->enableLimitChanged(); break;
        case 4: _t->lowerAngleChanged(); break;
        case 5: _t->upperAngleChanged(); break;
        case 6: _t->enableMotorChanged(); break;
        case 7: _t->motorSpeedChanged(); break;
        case 8: _t->maxMotorTorqueChanged(); break;
        case 9: { float _r = _t->getJointAngle();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        case 10: { float _r = _t->getJointSpeed();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Box2DRevoluteJoint::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Box2DRevoluteJoint::localAnchorAChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Box2DRevoluteJoint::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Box2DRevoluteJoint::localAnchorBChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Box2DRevoluteJoint::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Box2DRevoluteJoint::referenceAngleChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (Box2DRevoluteJoint::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Box2DRevoluteJoint::enableLimitChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (Box2DRevoluteJoint::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Box2DRevoluteJoint::lowerAngleChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (Box2DRevoluteJoint::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Box2DRevoluteJoint::upperAngleChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (Box2DRevoluteJoint::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Box2DRevoluteJoint::enableMotorChanged)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (Box2DRevoluteJoint::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Box2DRevoluteJoint::motorSpeedChanged)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (Box2DRevoluteJoint::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Box2DRevoluteJoint::maxMotorTorqueChanged)) {
                *result = 8;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        Box2DRevoluteJoint *_t = static_cast<Box2DRevoluteJoint *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QPointF*>(_v) = _t->localAnchorA(); break;
        case 1: *reinterpret_cast< QPointF*>(_v) = _t->localAnchorB(); break;
        case 2: *reinterpret_cast< float*>(_v) = _t->referenceAngle(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->enableLimit(); break;
        case 4: *reinterpret_cast< float*>(_v) = _t->lowerAngle(); break;
        case 5: *reinterpret_cast< float*>(_v) = _t->upperAngle(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->enableMotor(); break;
        case 7: *reinterpret_cast< float*>(_v) = _t->motorSpeed(); break;
        case 8: *reinterpret_cast< float*>(_v) = _t->maxMotorTorque(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        Box2DRevoluteJoint *_t = static_cast<Box2DRevoluteJoint *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setLocalAnchorA(*reinterpret_cast< QPointF*>(_v)); break;
        case 1: _t->setLocalAnchorB(*reinterpret_cast< QPointF*>(_v)); break;
        case 2: _t->setReferenceAngle(*reinterpret_cast< float*>(_v)); break;
        case 3: _t->setEnableLimit(*reinterpret_cast< bool*>(_v)); break;
        case 4: _t->setLowerAngle(*reinterpret_cast< float*>(_v)); break;
        case 5: _t->setUpperAngle(*reinterpret_cast< float*>(_v)); break;
        case 6: _t->setEnableMotor(*reinterpret_cast< bool*>(_v)); break;
        case 7: _t->setMotorSpeed(*reinterpret_cast< float*>(_v)); break;
        case 8: _t->setMaxMotorTorque(*reinterpret_cast< float*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject Box2DRevoluteJoint::staticMetaObject = {
    { &Box2DJoint::staticMetaObject, qt_meta_stringdata_Box2DRevoluteJoint.data,
      qt_meta_data_Box2DRevoluteJoint,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Box2DRevoluteJoint::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Box2DRevoluteJoint::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Box2DRevoluteJoint.stringdata0))
        return static_cast<void*>(const_cast< Box2DRevoluteJoint*>(this));
    return Box2DJoint::qt_metacast(_clname);
}

int Box2DRevoluteJoint::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Box2DJoint::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 9;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Box2DRevoluteJoint::localAnchorAChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void Box2DRevoluteJoint::localAnchorBChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void Box2DRevoluteJoint::referenceAngleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void Box2DRevoluteJoint::enableLimitChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void Box2DRevoluteJoint::lowerAngleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void Box2DRevoluteJoint::upperAngleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}

// SIGNAL 6
void Box2DRevoluteJoint::enableMotorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, Q_NULLPTR);
}

// SIGNAL 7
void Box2DRevoluteJoint::motorSpeedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, Q_NULLPTR);
}

// SIGNAL 8
void Box2DRevoluteJoint::maxMotorTorqueChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
