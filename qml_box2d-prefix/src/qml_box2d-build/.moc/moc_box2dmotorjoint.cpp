/****************************************************************************
** Meta object code from reading C++ file 'box2dmotorjoint.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../GCompris-qt/external/qml-box2d/box2dmotorjoint.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'box2dmotorjoint.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Box2DMotorJoint_t {
    QByteArrayData data[12];
    char stringdata0[178];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Box2DMotorJoint_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Box2DMotorJoint_t qt_meta_stringdata_Box2DMotorJoint = {
    {
QT_MOC_LITERAL(0, 0, 15), // "Box2DMotorJoint"
QT_MOC_LITERAL(1, 16, 19), // "linearOffsetChanged"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 20), // "angularOffsetChanged"
QT_MOC_LITERAL(4, 58, 15), // "maxForceChanged"
QT_MOC_LITERAL(5, 74, 16), // "maxTorqueChanged"
QT_MOC_LITERAL(6, 91, 23), // "correctionFactorChanged"
QT_MOC_LITERAL(7, 115, 12), // "linearOffset"
QT_MOC_LITERAL(8, 128, 13), // "angularOffset"
QT_MOC_LITERAL(9, 142, 8), // "maxForce"
QT_MOC_LITERAL(10, 151, 9), // "maxTorque"
QT_MOC_LITERAL(11, 161, 16) // "correctionFactor"

    },
    "Box2DMotorJoint\0linearOffsetChanged\0"
    "\0angularOffsetChanged\0maxForceChanged\0"
    "maxTorqueChanged\0correctionFactorChanged\0"
    "linearOffset\0angularOffset\0maxForce\0"
    "maxTorque\0correctionFactor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Box2DMotorJoint[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       5,   44, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,
       4,    0,   41,    2, 0x06 /* Public */,
       5,    0,   42,    2, 0x06 /* Public */,
       6,    0,   43,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       7, QMetaType::QPointF, 0x00495103,
       8, QMetaType::Float, 0x00495103,
       9, QMetaType::Float, 0x00495103,
      10, QMetaType::Float, 0x00495103,
      11, QMetaType::Float, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,

       0        // eod
};

void Box2DMotorJoint::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Box2DMotorJoint *_t = static_cast<Box2DMotorJoint *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->linearOffsetChanged(); break;
        case 1: _t->angularOffsetChanged(); break;
        case 2: _t->maxForceChanged(); break;
        case 3: _t->maxTorqueChanged(); break;
        case 4: _t->correctionFactorChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Box2DMotorJoint::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Box2DMotorJoint::linearOffsetChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Box2DMotorJoint::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Box2DMotorJoint::angularOffsetChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Box2DMotorJoint::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Box2DMotorJoint::maxForceChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (Box2DMotorJoint::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Box2DMotorJoint::maxTorqueChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (Box2DMotorJoint::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Box2DMotorJoint::correctionFactorChanged)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        Box2DMotorJoint *_t = static_cast<Box2DMotorJoint *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QPointF*>(_v) = _t->linearOffset(); break;
        case 1: *reinterpret_cast< float*>(_v) = _t->angularOffset(); break;
        case 2: *reinterpret_cast< float*>(_v) = _t->maxForce(); break;
        case 3: *reinterpret_cast< float*>(_v) = _t->maxTorque(); break;
        case 4: *reinterpret_cast< float*>(_v) = _t->correctionFactor(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        Box2DMotorJoint *_t = static_cast<Box2DMotorJoint *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setLinearOffset(*reinterpret_cast< QPointF*>(_v)); break;
        case 1: _t->setAngularOffset(*reinterpret_cast< float*>(_v)); break;
        case 2: _t->setMaxForce(*reinterpret_cast< float*>(_v)); break;
        case 3: _t->setMaxTorque(*reinterpret_cast< float*>(_v)); break;
        case 4: _t->setCorrectionFactor(*reinterpret_cast< float*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject Box2DMotorJoint::staticMetaObject = {
    { &Box2DJoint::staticMetaObject, qt_meta_stringdata_Box2DMotorJoint.data,
      qt_meta_data_Box2DMotorJoint,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Box2DMotorJoint::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Box2DMotorJoint::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Box2DMotorJoint.stringdata0))
        return static_cast<void*>(const_cast< Box2DMotorJoint*>(this));
    return Box2DJoint::qt_metacast(_clname);
}

int Box2DMotorJoint::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Box2DJoint::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
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
void Box2DMotorJoint::linearOffsetChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void Box2DMotorJoint::angularOffsetChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void Box2DMotorJoint::maxForceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void Box2DMotorJoint::maxTorqueChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void Box2DMotorJoint::correctionFactorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
