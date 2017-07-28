/****************************************************************************
** Meta object code from reading C++ file 'box2dmousejoint.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../GCompris-qt/external/qml-box2d/box2dmousejoint.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'box2dmousejoint.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Box2DMouseJoint_t {
    QByteArrayData data[14];
    char stringdata0[177];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Box2DMouseJoint_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Box2DMouseJoint_t qt_meta_stringdata_Box2DMouseJoint = {
    {
QT_MOC_LITERAL(0, 0, 15), // "Box2DMouseJoint"
QT_MOC_LITERAL(1, 16, 13), // "targetChanged"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 15), // "maxForceChanged"
QT_MOC_LITERAL(4, 47, 18), // "frequencyHzChanged"
QT_MOC_LITERAL(5, 66, 19), // "dampingRatioChanged"
QT_MOC_LITERAL(6, 86, 16), // "getReactionForce"
QT_MOC_LITERAL(7, 103, 7), // "float32"
QT_MOC_LITERAL(8, 111, 6), // "inv_dt"
QT_MOC_LITERAL(9, 118, 17), // "getReactionTorque"
QT_MOC_LITERAL(10, 136, 6), // "target"
QT_MOC_LITERAL(11, 143, 8), // "maxForce"
QT_MOC_LITERAL(12, 152, 11), // "frequencyHz"
QT_MOC_LITERAL(13, 164, 12) // "dampingRatio"

    },
    "Box2DMouseJoint\0targetChanged\0\0"
    "maxForceChanged\0frequencyHzChanged\0"
    "dampingRatioChanged\0getReactionForce\0"
    "float32\0inv_dt\0getReactionTorque\0"
    "target\0maxForce\0frequencyHz\0dampingRatio"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Box2DMouseJoint[] = {

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
      11, QMetaType::Float, 0x00495103,
      12, QMetaType::Float, 0x00495103,
      13, QMetaType::Float, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,

       0        // eod
};

void Box2DMouseJoint::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Box2DMouseJoint *_t = static_cast<Box2DMouseJoint *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->targetChanged(); break;
        case 1: _t->maxForceChanged(); break;
        case 2: _t->frequencyHzChanged(); break;
        case 3: _t->dampingRatioChanged(); break;
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
            typedef void (Box2DMouseJoint::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Box2DMouseJoint::targetChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Box2DMouseJoint::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Box2DMouseJoint::maxForceChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Box2DMouseJoint::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Box2DMouseJoint::frequencyHzChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (Box2DMouseJoint::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Box2DMouseJoint::dampingRatioChanged)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        Box2DMouseJoint *_t = static_cast<Box2DMouseJoint *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QPointF*>(_v) = _t->target(); break;
        case 1: *reinterpret_cast< float*>(_v) = _t->maxForce(); break;
        case 2: *reinterpret_cast< float*>(_v) = _t->frequencyHz(); break;
        case 3: *reinterpret_cast< float*>(_v) = _t->dampingRatio(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        Box2DMouseJoint *_t = static_cast<Box2DMouseJoint *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setTarget(*reinterpret_cast< QPointF*>(_v)); break;
        case 1: _t->setMaxForce(*reinterpret_cast< float*>(_v)); break;
        case 2: _t->setFrequencyHz(*reinterpret_cast< float*>(_v)); break;
        case 3: _t->setDampingRatio(*reinterpret_cast< float*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject Box2DMouseJoint::staticMetaObject = {
    { &Box2DJoint::staticMetaObject, qt_meta_stringdata_Box2DMouseJoint.data,
      qt_meta_data_Box2DMouseJoint,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Box2DMouseJoint::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Box2DMouseJoint::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Box2DMouseJoint.stringdata0))
        return static_cast<void*>(const_cast< Box2DMouseJoint*>(this));
    return Box2DJoint::qt_metacast(_clname);
}

int Box2DMouseJoint::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void Box2DMouseJoint::targetChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void Box2DMouseJoint::maxForceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void Box2DMouseJoint::frequencyHzChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void Box2DMouseJoint::dampingRatioChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
