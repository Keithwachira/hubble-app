/****************************************************************************
** Meta object code from reading C++ file 'box2dbody.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../GCompris-qt/external/qml-box2d/box2dbody.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'box2dbody.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Box2DBody_t {
    QByteArrayData data[66];
    char stringdata0[923];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Box2DBody_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Box2DBody_t qt_meta_stringdata_Box2DBody = {
    {
QT_MOC_LITERAL(0, 0, 9), // "Box2DBody"
QT_MOC_LITERAL(1, 10, 15), // "DefaultProperty"
QT_MOC_LITERAL(2, 26, 8), // "fixtures"
QT_MOC_LITERAL(3, 35, 12), // "worldChanged"
QT_MOC_LITERAL(4, 48, 0), // ""
QT_MOC_LITERAL(5, 49, 13), // "targetChanged"
QT_MOC_LITERAL(6, 63, 20), // "linearDampingChanged"
QT_MOC_LITERAL(7, 84, 21), // "angularDampingChanged"
QT_MOC_LITERAL(8, 106, 15), // "bodyTypeChanged"
QT_MOC_LITERAL(9, 122, 13), // "bulletChanged"
QT_MOC_LITERAL(10, 136, 22), // "sleepingAllowedChanged"
QT_MOC_LITERAL(11, 159, 20), // "fixedRotationChanged"
QT_MOC_LITERAL(12, 180, 21), // "linearVelocityChanged"
QT_MOC_LITERAL(13, 202, 22), // "angularVelocityChanged"
QT_MOC_LITERAL(14, 225, 11), // "bodyCreated"
QT_MOC_LITERAL(15, 237, 19), // "gravityScaleChanged"
QT_MOC_LITERAL(16, 257, 15), // "positionChanged"
QT_MOC_LITERAL(17, 273, 18), // "markTransformDirty"
QT_MOC_LITERAL(18, 292, 28), // "onWorldPixelsPerMeterChanged"
QT_MOC_LITERAL(19, 321, 10), // "applyForce"
QT_MOC_LITERAL(20, 332, 5), // "force"
QT_MOC_LITERAL(21, 338, 5), // "point"
QT_MOC_LITERAL(22, 344, 18), // "applyForceToCenter"
QT_MOC_LITERAL(23, 363, 11), // "applyTorque"
QT_MOC_LITERAL(24, 375, 6), // "torque"
QT_MOC_LITERAL(25, 382, 18), // "applyLinearImpulse"
QT_MOC_LITERAL(26, 401, 7), // "impulse"
QT_MOC_LITERAL(27, 409, 19), // "applyAngularImpulse"
QT_MOC_LITERAL(28, 429, 14), // "getWorldCenter"
QT_MOC_LITERAL(29, 444, 14), // "getLocalCenter"
QT_MOC_LITERAL(30, 459, 7), // "getMass"
QT_MOC_LITERAL(31, 467, 13), // "resetMassData"
QT_MOC_LITERAL(32, 481, 10), // "getInertia"
QT_MOC_LITERAL(33, 492, 12), // "toWorldPoint"
QT_MOC_LITERAL(34, 505, 10), // "localPoint"
QT_MOC_LITERAL(35, 516, 13), // "toWorldVector"
QT_MOC_LITERAL(36, 530, 11), // "localVector"
QT_MOC_LITERAL(37, 542, 12), // "toLocalPoint"
QT_MOC_LITERAL(38, 555, 10), // "worldPoint"
QT_MOC_LITERAL(39, 566, 13), // "toLocalVector"
QT_MOC_LITERAL(40, 580, 11), // "worldVector"
QT_MOC_LITERAL(41, 592, 31), // "getLinearVelocityFromWorldPoint"
QT_MOC_LITERAL(42, 624, 31), // "getLinearVelocityFromLocalPoint"
QT_MOC_LITERAL(43, 656, 10), // "addFixture"
QT_MOC_LITERAL(44, 667, 13), // "Box2DFixture*"
QT_MOC_LITERAL(45, 681, 7), // "fixture"
QT_MOC_LITERAL(46, 689, 5), // "world"
QT_MOC_LITERAL(47, 695, 11), // "Box2DWorld*"
QT_MOC_LITERAL(48, 707, 6), // "target"
QT_MOC_LITERAL(49, 714, 11), // "QQuickItem*"
QT_MOC_LITERAL(50, 726, 13), // "linearDamping"
QT_MOC_LITERAL(51, 740, 14), // "angularDamping"
QT_MOC_LITERAL(52, 755, 8), // "bodyType"
QT_MOC_LITERAL(53, 764, 8), // "BodyType"
QT_MOC_LITERAL(54, 773, 6), // "bullet"
QT_MOC_LITERAL(55, 780, 15), // "sleepingAllowed"
QT_MOC_LITERAL(56, 796, 13), // "fixedRotation"
QT_MOC_LITERAL(57, 810, 6), // "active"
QT_MOC_LITERAL(58, 817, 5), // "awake"
QT_MOC_LITERAL(59, 823, 14), // "linearVelocity"
QT_MOC_LITERAL(60, 838, 15), // "angularVelocity"
QT_MOC_LITERAL(61, 854, 30), // "QQmlListProperty<Box2DFixture>"
QT_MOC_LITERAL(62, 885, 12), // "gravityScale"
QT_MOC_LITERAL(63, 898, 6), // "Static"
QT_MOC_LITERAL(64, 905, 9), // "Kinematic"
QT_MOC_LITERAL(65, 915, 7) // "Dynamic"

    },
    "Box2DBody\0DefaultProperty\0fixtures\0"
    "worldChanged\0\0targetChanged\0"
    "linearDampingChanged\0angularDampingChanged\0"
    "bodyTypeChanged\0bulletChanged\0"
    "sleepingAllowedChanged\0fixedRotationChanged\0"
    "linearVelocityChanged\0angularVelocityChanged\0"
    "bodyCreated\0gravityScaleChanged\0"
    "positionChanged\0markTransformDirty\0"
    "onWorldPixelsPerMeterChanged\0applyForce\0"
    "force\0point\0applyForceToCenter\0"
    "applyTorque\0torque\0applyLinearImpulse\0"
    "impulse\0applyAngularImpulse\0getWorldCenter\0"
    "getLocalCenter\0getMass\0resetMassData\0"
    "getInertia\0toWorldPoint\0localPoint\0"
    "toWorldVector\0localVector\0toLocalPoint\0"
    "worldPoint\0toLocalVector\0worldVector\0"
    "getLinearVelocityFromWorldPoint\0"
    "getLinearVelocityFromLocalPoint\0"
    "addFixture\0Box2DFixture*\0fixture\0world\0"
    "Box2DWorld*\0target\0QQuickItem*\0"
    "linearDamping\0angularDamping\0bodyType\0"
    "BodyType\0bullet\0sleepingAllowed\0"
    "fixedRotation\0active\0awake\0linearVelocity\0"
    "angularVelocity\0QQmlListProperty<Box2DFixture>\0"
    "gravityScale\0Static\0Kinematic\0Dynamic"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Box2DBody[] = {

 // content:
       7,       // revision
       0,       // classname
       1,   14, // classinfo
      32,   16, // methods
      14,  236, // properties
       1,  292, // enums/sets
       0,    0, // constructors
       0,       // flags
      13,       // signalCount

 // classinfo: key, value
       1,    2,

 // signals: name, argc, parameters, tag, flags
       3,    0,  176,    4, 0x06 /* Public */,
       5,    0,  177,    4, 0x06 /* Public */,
       6,    0,  178,    4, 0x06 /* Public */,
       7,    0,  179,    4, 0x06 /* Public */,
       8,    0,  180,    4, 0x06 /* Public */,
       9,    0,  181,    4, 0x06 /* Public */,
      10,    0,  182,    4, 0x06 /* Public */,
      11,    0,  183,    4, 0x06 /* Public */,
      12,    0,  184,    4, 0x06 /* Public */,
      13,    0,  185,    4, 0x06 /* Public */,
      14,    0,  186,    4, 0x06 /* Public */,
      15,    0,  187,    4, 0x06 /* Public */,
      16,    0,  188,    4, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      17,    0,  189,    4, 0x08 /* Private */,
      18,    0,  190,    4, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      19,    2,  191,    4, 0x02 /* Public */,
      22,    1,  196,    4, 0x02 /* Public */,
      23,    1,  199,    4, 0x02 /* Public */,
      25,    2,  202,    4, 0x02 /* Public */,
      27,    1,  207,    4, 0x02 /* Public */,
      28,    0,  210,    4, 0x02 /* Public */,
      29,    0,  211,    4, 0x02 /* Public */,
      30,    0,  212,    4, 0x02 /* Public */,
      31,    0,  213,    4, 0x02 /* Public */,
      32,    0,  214,    4, 0x02 /* Public */,
      33,    1,  215,    4, 0x02 /* Public */,
      35,    1,  218,    4, 0x02 /* Public */,
      37,    1,  221,    4, 0x02 /* Public */,
      39,    1,  224,    4, 0x02 /* Public */,
      41,    1,  227,    4, 0x02 /* Public */,
      42,    1,  230,    4, 0x02 /* Public */,
      43,    1,  233,    4, 0x02 /* Public */,

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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::QPointF, QMetaType::QPointF,   20,   21,
    QMetaType::Void, QMetaType::QPointF,   20,
    QMetaType::Void, QMetaType::QReal,   24,
    QMetaType::Void, QMetaType::QPointF, QMetaType::QPointF,   26,   21,
    QMetaType::Void, QMetaType::QReal,   26,
    QMetaType::QPointF,
    QMetaType::QPointF,
    QMetaType::Float,
    QMetaType::Void,
    QMetaType::Float,
    QMetaType::QPointF, QMetaType::QPointF,   34,
    QMetaType::QPointF, QMetaType::QPointF,   36,
    QMetaType::QPointF, QMetaType::QPointF,   38,
    QMetaType::QPointF, QMetaType::QPointF,   40,
    QMetaType::QPointF, QMetaType::QPointF,   21,
    QMetaType::QPointF, QMetaType::QPointF,   21,
    QMetaType::Void, 0x80000000 | 44,   45,

 // properties: name, type, flags
      46, 0x80000000 | 47, 0x0049510b,
      48, 0x80000000 | 49, 0x0049510b,
      50, QMetaType::Float, 0x00495103,
      51, QMetaType::Float, 0x00495103,
      52, 0x80000000 | 53, 0x0049510b,
      54, QMetaType::Bool, 0x00495103,
      55, QMetaType::Bool, 0x00495103,
      56, QMetaType::Bool, 0x00495103,
      57, QMetaType::Bool, 0x00095103,
      58, QMetaType::Bool, 0x00095103,
      59, QMetaType::QPointF, 0x00495103,
      60, QMetaType::Float, 0x00495103,
       2, 0x80000000 | 61, 0x00095009,
      62, QMetaType::Float, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,
       6,
       7,
       0,
       0,
       8,
       9,
       0,
      11,

 // enums: name, flags, count, data
      53, 0x0,    3,  296,

 // enum data: key, value
      63, uint(Box2DBody::Static),
      64, uint(Box2DBody::Kinematic),
      65, uint(Box2DBody::Dynamic),

       0        // eod
};

void Box2DBody::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Box2DBody *_t = static_cast<Box2DBody *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->worldChanged(); break;
        case 1: _t->targetChanged(); break;
        case 2: _t->linearDampingChanged(); break;
        case 3: _t->angularDampingChanged(); break;
        case 4: _t->bodyTypeChanged(); break;
        case 5: _t->bulletChanged(); break;
        case 6: _t->sleepingAllowedChanged(); break;
        case 7: _t->fixedRotationChanged(); break;
        case 8: _t->linearVelocityChanged(); break;
        case 9: _t->angularVelocityChanged(); break;
        case 10: _t->bodyCreated(); break;
        case 11: _t->gravityScaleChanged(); break;
        case 12: _t->positionChanged(); break;
        case 13: _t->markTransformDirty(); break;
        case 14: _t->onWorldPixelsPerMeterChanged(); break;
        case 15: _t->applyForce((*reinterpret_cast< const QPointF(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2]))); break;
        case 16: _t->applyForceToCenter((*reinterpret_cast< const QPointF(*)>(_a[1]))); break;
        case 17: _t->applyTorque((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 18: _t->applyLinearImpulse((*reinterpret_cast< const QPointF(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2]))); break;
        case 19: _t->applyAngularImpulse((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 20: { QPointF _r = _t->getWorldCenter();
            if (_a[0]) *reinterpret_cast< QPointF*>(_a[0]) = _r; }  break;
        case 21: { QPointF _r = _t->getLocalCenter();
            if (_a[0]) *reinterpret_cast< QPointF*>(_a[0]) = _r; }  break;
        case 22: { float _r = _t->getMass();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        case 23: _t->resetMassData(); break;
        case 24: { float _r = _t->getInertia();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        case 25: { QPointF _r = _t->toWorldPoint((*reinterpret_cast< const QPointF(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPointF*>(_a[0]) = _r; }  break;
        case 26: { QPointF _r = _t->toWorldVector((*reinterpret_cast< const QPointF(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPointF*>(_a[0]) = _r; }  break;
        case 27: { QPointF _r = _t->toLocalPoint((*reinterpret_cast< const QPointF(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPointF*>(_a[0]) = _r; }  break;
        case 28: { QPointF _r = _t->toLocalVector((*reinterpret_cast< const QPointF(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPointF*>(_a[0]) = _r; }  break;
        case 29: { QPointF _r = _t->getLinearVelocityFromWorldPoint((*reinterpret_cast< const QPointF(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPointF*>(_a[0]) = _r; }  break;
        case 30: { QPointF _r = _t->getLinearVelocityFromLocalPoint((*reinterpret_cast< const QPointF(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPointF*>(_a[0]) = _r; }  break;
        case 31: _t->addFixture((*reinterpret_cast< Box2DFixture*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Box2DBody::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Box2DBody::worldChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Box2DBody::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Box2DBody::targetChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Box2DBody::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Box2DBody::linearDampingChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (Box2DBody::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Box2DBody::angularDampingChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (Box2DBody::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Box2DBody::bodyTypeChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (Box2DBody::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Box2DBody::bulletChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (Box2DBody::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Box2DBody::sleepingAllowedChanged)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (Box2DBody::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Box2DBody::fixedRotationChanged)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (Box2DBody::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Box2DBody::linearVelocityChanged)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (Box2DBody::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Box2DBody::angularVelocityChanged)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (Box2DBody::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Box2DBody::bodyCreated)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (Box2DBody::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Box2DBody::gravityScaleChanged)) {
                *result = 11;
                return;
            }
        }
        {
            typedef void (Box2DBody::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Box2DBody::positionChanged)) {
                *result = 12;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickItem* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        Box2DBody *_t = static_cast<Box2DBody *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Box2DWorld**>(_v) = _t->world(); break;
        case 1: *reinterpret_cast< QQuickItem**>(_v) = _t->target(); break;
        case 2: *reinterpret_cast< float*>(_v) = _t->linearDamping(); break;
        case 3: *reinterpret_cast< float*>(_v) = _t->angularDamping(); break;
        case 4: *reinterpret_cast< BodyType*>(_v) = _t->bodyType(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->isBullet(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->sleepingAllowed(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->fixedRotation(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->isActive(); break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->isAwake(); break;
        case 10: *reinterpret_cast< QPointF*>(_v) = _t->linearVelocity(); break;
        case 11: *reinterpret_cast< float*>(_v) = _t->angularVelocity(); break;
        case 12: *reinterpret_cast< QQmlListProperty<Box2DFixture>*>(_v) = _t->fixtures(); break;
        case 13: *reinterpret_cast< float*>(_v) = _t->gravityScale(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        Box2DBody *_t = static_cast<Box2DBody *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setWorld(*reinterpret_cast< Box2DWorld**>(_v)); break;
        case 1: _t->setTarget(*reinterpret_cast< QQuickItem**>(_v)); break;
        case 2: _t->setLinearDamping(*reinterpret_cast< float*>(_v)); break;
        case 3: _t->setAngularDamping(*reinterpret_cast< float*>(_v)); break;
        case 4: _t->setBodyType(*reinterpret_cast< BodyType*>(_v)); break;
        case 5: _t->setBullet(*reinterpret_cast< bool*>(_v)); break;
        case 6: _t->setSleepingAllowed(*reinterpret_cast< bool*>(_v)); break;
        case 7: _t->setFixedRotation(*reinterpret_cast< bool*>(_v)); break;
        case 8: _t->setActive(*reinterpret_cast< bool*>(_v)); break;
        case 9: _t->setAwake(*reinterpret_cast< bool*>(_v)); break;
        case 10: _t->setLinearVelocity(*reinterpret_cast< QPointF*>(_v)); break;
        case 11: _t->setAngularVelocity(*reinterpret_cast< float*>(_v)); break;
        case 13: _t->setGravityScale(*reinterpret_cast< float*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject Box2DBody::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Box2DBody.data,
      qt_meta_data_Box2DBody,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Box2DBody::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Box2DBody::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Box2DBody.stringdata0))
        return static_cast<void*>(const_cast< Box2DBody*>(this));
    if (!strcmp(_clname, "QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(const_cast< Box2DBody*>(this));
    if (!strcmp(_clname, "org.qt-project.Qt.QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(const_cast< Box2DBody*>(this));
    return QObject::qt_metacast(_clname);
}

int Box2DBody::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 32)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 32;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 32)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 32;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 14;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Box2DBody::worldChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void Box2DBody::targetChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void Box2DBody::linearDampingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void Box2DBody::angularDampingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void Box2DBody::bodyTypeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void Box2DBody::bulletChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}

// SIGNAL 6
void Box2DBody::sleepingAllowedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, Q_NULLPTR);
}

// SIGNAL 7
void Box2DBody::fixedRotationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, Q_NULLPTR);
}

// SIGNAL 8
void Box2DBody::linearVelocityChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, Q_NULLPTR);
}

// SIGNAL 9
void Box2DBody::angularVelocityChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, Q_NULLPTR);
}

// SIGNAL 10
void Box2DBody::bodyCreated()
{
    QMetaObject::activate(this, &staticMetaObject, 10, Q_NULLPTR);
}

// SIGNAL 11
void Box2DBody::gravityScaleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, Q_NULLPTR);
}

// SIGNAL 12
void Box2DBody::positionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 12, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
