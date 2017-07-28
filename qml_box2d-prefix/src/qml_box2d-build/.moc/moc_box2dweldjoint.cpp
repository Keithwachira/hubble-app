/****************************************************************************
** Meta object code from reading C++ file 'box2dweldjoint.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../GCompris-qt/external/qml-box2d/box2dweldjoint.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'box2dweldjoint.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Box2DWeldJoint_t {
    QByteArrayData data[12];
    char stringdata0[183];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Box2DWeldJoint_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Box2DWeldJoint_t qt_meta_stringdata_Box2DWeldJoint = {
    {
QT_MOC_LITERAL(0, 0, 14), // "Box2DWeldJoint"
QT_MOC_LITERAL(1, 15, 21), // "referenceAngleChanged"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 18), // "frequencyHzChanged"
QT_MOC_LITERAL(4, 57, 19), // "dampingRatioChanged"
QT_MOC_LITERAL(5, 77, 19), // "localAnchorAChanged"
QT_MOC_LITERAL(6, 97, 19), // "localAnchorBChanged"
QT_MOC_LITERAL(7, 117, 14), // "referenceAngle"
QT_MOC_LITERAL(8, 132, 11), // "frequencyHz"
QT_MOC_LITERAL(9, 144, 12), // "dampingRatio"
QT_MOC_LITERAL(10, 157, 12), // "localAnchorA"
QT_MOC_LITERAL(11, 170, 12) // "localAnchorB"

    },
    "Box2DWeldJoint\0referenceAngleChanged\0"
    "\0frequencyHzChanged\0dampingRatioChanged\0"
    "localAnchorAChanged\0localAnchorBChanged\0"
    "referenceAngle\0frequencyHz\0dampingRatio\0"
    "localAnchorA\0localAnchorB"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Box2DWeldJoint[] = {

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
       7, QMetaType::Float, 0x00495103,
       8, QMetaType::Float, 0x00495103,
       9, QMetaType::Float, 0x00495103,
      10, QMetaType::QPointF, 0x00495103,
      11, QMetaType::QPointF, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,

       0        // eod
};

void Box2DWeldJoint::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Box2DWeldJoint *_t = static_cast<Box2DWeldJoint *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->referenceAngleChanged(); break;
        case 1: _t->frequencyHzChanged(); break;
        case 2: _t->dampingRatioChanged(); break;
        case 3: _t->localAnchorAChanged(); break;
        case 4: _t->localAnchorBChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Box2DWeldJoint::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Box2DWeldJoint::referenceAngleChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Box2DWeldJoint::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Box2DWeldJoint::frequencyHzChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Box2DWeldJoint::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Box2DWeldJoint::dampingRatioChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (Box2DWeldJoint::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Box2DWeldJoint::localAnchorAChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (Box2DWeldJoint::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Box2DWeldJoint::localAnchorBChanged)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        Box2DWeldJoint *_t = static_cast<Box2DWeldJoint *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = _t->referenceAngle(); break;
        case 1: *reinterpret_cast< float*>(_v) = _t->frequencyHz(); break;
        case 2: *reinterpret_cast< float*>(_v) = _t->dampingRatio(); break;
        case 3: *reinterpret_cast< QPointF*>(_v) = _t->localAnchorA(); break;
        case 4: *reinterpret_cast< QPointF*>(_v) = _t->localAnchorB(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        Box2DWeldJoint *_t = static_cast<Box2DWeldJoint *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setReferenceAngle(*reinterpret_cast< float*>(_v)); break;
        case 1: _t->setFrequencyHz(*reinterpret_cast< float*>(_v)); break;
        case 2: _t->setDampingRatio(*reinterpret_cast< float*>(_v)); break;
        case 3: _t->setLocalAnchorA(*reinterpret_cast< QPointF*>(_v)); break;
        case 4: _t->setLocalAnchorB(*reinterpret_cast< QPointF*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject Box2DWeldJoint::staticMetaObject = {
    { &Box2DJoint::staticMetaObject, qt_meta_stringdata_Box2DWeldJoint.data,
      qt_meta_data_Box2DWeldJoint,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Box2DWeldJoint::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Box2DWeldJoint::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Box2DWeldJoint.stringdata0))
        return static_cast<void*>(const_cast< Box2DWeldJoint*>(this));
    return Box2DJoint::qt_metacast(_clname);
}

int Box2DWeldJoint::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void Box2DWeldJoint::referenceAngleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void Box2DWeldJoint::frequencyHzChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void Box2DWeldJoint::dampingRatioChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void Box2DWeldJoint::localAnchorAChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void Box2DWeldJoint::localAnchorBChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
