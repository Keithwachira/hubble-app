/****************************************************************************
** Meta object code from reading C++ file 'box2dpulleyjoint.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../GCompris-qt/external/qml-box2d/box2dpulleyjoint.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'box2dpulleyjoint.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Box2DPulleyJoint_t {
    QByteArrayData data[22];
    char stringdata0[305];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Box2DPulleyJoint_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Box2DPulleyJoint_t qt_meta_stringdata_Box2DPulleyJoint = {
    {
QT_MOC_LITERAL(0, 0, 16), // "Box2DPulleyJoint"
QT_MOC_LITERAL(1, 17, 20), // "groundAnchorAChanged"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 20), // "groundAnchorBChanged"
QT_MOC_LITERAL(4, 60, 19), // "localAnchorAChanged"
QT_MOC_LITERAL(5, 80, 19), // "localAnchorBChanged"
QT_MOC_LITERAL(6, 100, 14), // "lengthAChanged"
QT_MOC_LITERAL(7, 115, 14), // "lengthBChanged"
QT_MOC_LITERAL(8, 130, 12), // "ratioChanged"
QT_MOC_LITERAL(9, 143, 17), // "getCurrentLengthA"
QT_MOC_LITERAL(10, 161, 17), // "getCurrentLengthB"
QT_MOC_LITERAL(11, 179, 16), // "getReactionForce"
QT_MOC_LITERAL(12, 196, 7), // "float32"
QT_MOC_LITERAL(13, 204, 6), // "inv_dt"
QT_MOC_LITERAL(14, 211, 17), // "getReactionTorque"
QT_MOC_LITERAL(15, 229, 13), // "groundAnchorA"
QT_MOC_LITERAL(16, 243, 13), // "groundAnchorB"
QT_MOC_LITERAL(17, 257, 12), // "localAnchorA"
QT_MOC_LITERAL(18, 270, 12), // "localAnchorB"
QT_MOC_LITERAL(19, 283, 7), // "lengthA"
QT_MOC_LITERAL(20, 291, 7), // "lengthB"
QT_MOC_LITERAL(21, 299, 5) // "ratio"

    },
    "Box2DPulleyJoint\0groundAnchorAChanged\0"
    "\0groundAnchorBChanged\0localAnchorAChanged\0"
    "localAnchorBChanged\0lengthAChanged\0"
    "lengthBChanged\0ratioChanged\0"
    "getCurrentLengthA\0getCurrentLengthB\0"
    "getReactionForce\0float32\0inv_dt\0"
    "getReactionTorque\0groundAnchorA\0"
    "groundAnchorB\0localAnchorA\0localAnchorB\0"
    "lengthA\0lengthB\0ratio"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Box2DPulleyJoint[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       7,   84, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06 /* Public */,
       3,    0,   70,    2, 0x06 /* Public */,
       4,    0,   71,    2, 0x06 /* Public */,
       5,    0,   72,    2, 0x06 /* Public */,
       6,    0,   73,    2, 0x06 /* Public */,
       7,    0,   74,    2, 0x06 /* Public */,
       8,    0,   75,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       9,    0,   76,    2, 0x02 /* Public */,
      10,    0,   77,    2, 0x02 /* Public */,
      11,    1,   78,    2, 0x02 /* Public */,
      14,    1,   81,    2, 0x02 /* Public */,

 // signals: parameters
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
    QMetaType::QPointF, 0x80000000 | 12,   13,
    QMetaType::Float, 0x80000000 | 12,   13,

 // properties: name, type, flags
      15, QMetaType::QPointF, 0x00495103,
      16, QMetaType::QPointF, 0x00495103,
      17, QMetaType::QPointF, 0x00495103,
      18, QMetaType::QPointF, 0x00495103,
      19, QMetaType::Float, 0x00495103,
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

       0        // eod
};

void Box2DPulleyJoint::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Box2DPulleyJoint *_t = static_cast<Box2DPulleyJoint *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->groundAnchorAChanged(); break;
        case 1: _t->groundAnchorBChanged(); break;
        case 2: _t->localAnchorAChanged(); break;
        case 3: _t->localAnchorBChanged(); break;
        case 4: _t->lengthAChanged(); break;
        case 5: _t->lengthBChanged(); break;
        case 6: _t->ratioChanged(); break;
        case 7: { float _r = _t->getCurrentLengthA();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        case 8: { float _r = _t->getCurrentLengthB();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        case 9: { QPointF _r = _t->getReactionForce((*reinterpret_cast< float32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPointF*>(_a[0]) = _r; }  break;
        case 10: { float _r = _t->getReactionTorque((*reinterpret_cast< float32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Box2DPulleyJoint::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Box2DPulleyJoint::groundAnchorAChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Box2DPulleyJoint::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Box2DPulleyJoint::groundAnchorBChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Box2DPulleyJoint::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Box2DPulleyJoint::localAnchorAChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (Box2DPulleyJoint::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Box2DPulleyJoint::localAnchorBChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (Box2DPulleyJoint::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Box2DPulleyJoint::lengthAChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (Box2DPulleyJoint::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Box2DPulleyJoint::lengthBChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (Box2DPulleyJoint::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Box2DPulleyJoint::ratioChanged)) {
                *result = 6;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        Box2DPulleyJoint *_t = static_cast<Box2DPulleyJoint *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QPointF*>(_v) = _t->groundAnchorA(); break;
        case 1: *reinterpret_cast< QPointF*>(_v) = _t->groundAnchorB(); break;
        case 2: *reinterpret_cast< QPointF*>(_v) = _t->localAnchorA(); break;
        case 3: *reinterpret_cast< QPointF*>(_v) = _t->localAnchorB(); break;
        case 4: *reinterpret_cast< float*>(_v) = _t->lengthA(); break;
        case 5: *reinterpret_cast< float*>(_v) = _t->lengthB(); break;
        case 6: *reinterpret_cast< float*>(_v) = _t->ratio(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        Box2DPulleyJoint *_t = static_cast<Box2DPulleyJoint *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setGroundAnchorA(*reinterpret_cast< QPointF*>(_v)); break;
        case 1: _t->setGroundAnchorB(*reinterpret_cast< QPointF*>(_v)); break;
        case 2: _t->setLocalAnchorA(*reinterpret_cast< QPointF*>(_v)); break;
        case 3: _t->setLocalAnchorB(*reinterpret_cast< QPointF*>(_v)); break;
        case 4: _t->setLengthA(*reinterpret_cast< float*>(_v)); break;
        case 5: _t->setLengthB(*reinterpret_cast< float*>(_v)); break;
        case 6: _t->setRatio(*reinterpret_cast< float*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject Box2DPulleyJoint::staticMetaObject = {
    { &Box2DJoint::staticMetaObject, qt_meta_stringdata_Box2DPulleyJoint.data,
      qt_meta_data_Box2DPulleyJoint,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Box2DPulleyJoint::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Box2DPulleyJoint::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Box2DPulleyJoint.stringdata0))
        return static_cast<void*>(const_cast< Box2DPulleyJoint*>(this));
    return Box2DJoint::qt_metacast(_clname);
}

int Box2DPulleyJoint::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Box2DPulleyJoint::groundAnchorAChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void Box2DPulleyJoint::groundAnchorBChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void Box2DPulleyJoint::localAnchorAChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void Box2DPulleyJoint::localAnchorBChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void Box2DPulleyJoint::lengthAChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void Box2DPulleyJoint::lengthBChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}

// SIGNAL 6
void Box2DPulleyJoint::ratioChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
