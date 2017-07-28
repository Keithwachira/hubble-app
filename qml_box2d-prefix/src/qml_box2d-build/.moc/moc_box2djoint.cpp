/****************************************************************************
** Meta object code from reading C++ file 'box2djoint.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../GCompris-qt/external/qml-box2d/box2djoint.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'box2djoint.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Box2DJoint_t {
    QByteArrayData data[26];
    char stringdata0[301];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Box2DJoint_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Box2DJoint_t qt_meta_stringdata_Box2DJoint = {
    {
QT_MOC_LITERAL(0, 0, 10), // "Box2DJoint"
QT_MOC_LITERAL(1, 11, 23), // "collideConnectedChanged"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 12), // "bodyAChanged"
QT_MOC_LITERAL(4, 49, 12), // "bodyBChanged"
QT_MOC_LITERAL(5, 62, 7), // "created"
QT_MOC_LITERAL(6, 70, 12), // "bodyACreated"
QT_MOC_LITERAL(7, 83, 12), // "bodyBCreated"
QT_MOC_LITERAL(8, 96, 9), // "jointType"
QT_MOC_LITERAL(9, 106, 9), // "JointType"
QT_MOC_LITERAL(10, 116, 16), // "collideConnected"
QT_MOC_LITERAL(11, 133, 5), // "bodyA"
QT_MOC_LITERAL(12, 139, 10), // "Box2DBody*"
QT_MOC_LITERAL(13, 150, 5), // "bodyB"
QT_MOC_LITERAL(14, 156, 12), // "UnknownJoint"
QT_MOC_LITERAL(15, 169, 13), // "RevoluteJoint"
QT_MOC_LITERAL(16, 183, 14), // "PrismaticJoint"
QT_MOC_LITERAL(17, 198, 13), // "DistanceJoint"
QT_MOC_LITERAL(18, 212, 11), // "PulleyJoint"
QT_MOC_LITERAL(19, 224, 10), // "MouseJoint"
QT_MOC_LITERAL(20, 235, 9), // "GearJoint"
QT_MOC_LITERAL(21, 245, 10), // "WheelJoint"
QT_MOC_LITERAL(22, 256, 9), // "WeldJoint"
QT_MOC_LITERAL(23, 266, 13), // "FrictionJoint"
QT_MOC_LITERAL(24, 280, 9), // "RopeJoint"
QT_MOC_LITERAL(25, 290, 10) // "MotorJoint"

    },
    "Box2DJoint\0collideConnectedChanged\0\0"
    "bodyAChanged\0bodyBChanged\0created\0"
    "bodyACreated\0bodyBCreated\0jointType\0"
    "JointType\0collideConnected\0bodyA\0"
    "Box2DBody*\0bodyB\0UnknownJoint\0"
    "RevoluteJoint\0PrismaticJoint\0DistanceJoint\0"
    "PulleyJoint\0MouseJoint\0GearJoint\0"
    "WheelJoint\0WeldJoint\0FrictionJoint\0"
    "RopeJoint\0MotorJoint"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Box2DJoint[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       4,   50, // properties
       1,   66, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    0,   45,    2, 0x06 /* Public */,
       4,    0,   46,    2, 0x06 /* Public */,
       5,    0,   47,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   48,    2, 0x08 /* Private */,
       7,    0,   49,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       8, 0x80000000 | 9, 0x00095409,
      10, QMetaType::Bool, 0x00495103,
      11, 0x80000000 | 12, 0x0049510b,
      13, 0x80000000 | 12, 0x0049510b,

 // properties: notify_signal_id
       0,
       0,
       1,
       2,

 // enums: name, flags, count, data
       9, 0x0,   12,   70,

 // enum data: key, value
      14, uint(Box2DJoint::UnknownJoint),
      15, uint(Box2DJoint::RevoluteJoint),
      16, uint(Box2DJoint::PrismaticJoint),
      17, uint(Box2DJoint::DistanceJoint),
      18, uint(Box2DJoint::PulleyJoint),
      19, uint(Box2DJoint::MouseJoint),
      20, uint(Box2DJoint::GearJoint),
      21, uint(Box2DJoint::WheelJoint),
      22, uint(Box2DJoint::WeldJoint),
      23, uint(Box2DJoint::FrictionJoint),
      24, uint(Box2DJoint::RopeJoint),
      25, uint(Box2DJoint::MotorJoint),

       0        // eod
};

void Box2DJoint::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Box2DJoint *_t = static_cast<Box2DJoint *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->collideConnectedChanged(); break;
        case 1: _t->bodyAChanged(); break;
        case 2: _t->bodyBChanged(); break;
        case 3: _t->created(); break;
        case 4: _t->bodyACreated(); break;
        case 5: _t->bodyBCreated(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Box2DJoint::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Box2DJoint::collideConnectedChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Box2DJoint::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Box2DJoint::bodyAChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Box2DJoint::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Box2DJoint::bodyBChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (Box2DJoint::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Box2DJoint::created)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        Box2DJoint *_t = static_cast<Box2DJoint *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< JointType*>(_v) = _t->jointType(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->collideConnected(); break;
        case 2: *reinterpret_cast< Box2DBody**>(_v) = _t->bodyA(); break;
        case 3: *reinterpret_cast< Box2DBody**>(_v) = _t->bodyB(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        Box2DJoint *_t = static_cast<Box2DJoint *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setCollideConnected(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setBodyA(*reinterpret_cast< Box2DBody**>(_v)); break;
        case 3: _t->setBodyB(*reinterpret_cast< Box2DBody**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject Box2DJoint::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Box2DJoint.data,
      qt_meta_data_Box2DJoint,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Box2DJoint::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Box2DJoint::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Box2DJoint.stringdata0))
        return static_cast<void*>(const_cast< Box2DJoint*>(this));
    if (!strcmp(_clname, "QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(const_cast< Box2DJoint*>(this));
    if (!strcmp(_clname, "org.qt-project.Qt.QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(const_cast< Box2DJoint*>(this));
    return QObject::qt_metacast(_clname);
}

int Box2DJoint::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void Box2DJoint::collideConnectedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void Box2DJoint::bodyAChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void Box2DJoint::bodyBChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void Box2DJoint::created()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
