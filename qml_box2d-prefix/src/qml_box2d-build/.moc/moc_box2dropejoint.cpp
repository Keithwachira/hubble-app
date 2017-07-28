/****************************************************************************
** Meta object code from reading C++ file 'box2dropejoint.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../GCompris-qt/external/qml-box2d/box2dropejoint.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'box2dropejoint.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Box2DRopeJoint_t {
    QByteArrayData data[12];
    char stringdata0[159];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Box2DRopeJoint_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Box2DRopeJoint_t qt_meta_stringdata_Box2DRopeJoint = {
    {
QT_MOC_LITERAL(0, 0, 14), // "Box2DRopeJoint"
QT_MOC_LITERAL(1, 15, 19), // "localAnchorAChanged"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 19), // "localAnchorBChanged"
QT_MOC_LITERAL(4, 56, 16), // "maxLengthChanged"
QT_MOC_LITERAL(5, 73, 16), // "getReactionForce"
QT_MOC_LITERAL(6, 90, 7), // "float32"
QT_MOC_LITERAL(7, 98, 6), // "inv_dt"
QT_MOC_LITERAL(8, 105, 17), // "getReactionTorque"
QT_MOC_LITERAL(9, 123, 12), // "localAnchorA"
QT_MOC_LITERAL(10, 136, 12), // "localAnchorB"
QT_MOC_LITERAL(11, 149, 9) // "maxLength"

    },
    "Box2DRopeJoint\0localAnchorAChanged\0\0"
    "localAnchorBChanged\0maxLengthChanged\0"
    "getReactionForce\0float32\0inv_dt\0"
    "getReactionTorque\0localAnchorA\0"
    "localAnchorB\0maxLength"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Box2DRopeJoint[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       3,   48, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,
       4,    0,   41,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       5,    1,   42,    2, 0x02 /* Public */,
       8,    1,   45,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::QPointF, 0x80000000 | 6,    7,
    QMetaType::Float, 0x80000000 | 6,    7,

 // properties: name, type, flags
       9, QMetaType::QPointF, 0x00495103,
      10, QMetaType::QPointF, 0x00495103,
      11, QMetaType::Float, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,

       0        // eod
};

void Box2DRopeJoint::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Box2DRopeJoint *_t = static_cast<Box2DRopeJoint *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->localAnchorAChanged(); break;
        case 1: _t->localAnchorBChanged(); break;
        case 2: _t->maxLengthChanged(); break;
        case 3: { QPointF _r = _t->getReactionForce((*reinterpret_cast< float32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPointF*>(_a[0]) = _r; }  break;
        case 4: { float _r = _t->getReactionTorque((*reinterpret_cast< float32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Box2DRopeJoint::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Box2DRopeJoint::localAnchorAChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Box2DRopeJoint::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Box2DRopeJoint::localAnchorBChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Box2DRopeJoint::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Box2DRopeJoint::maxLengthChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        Box2DRopeJoint *_t = static_cast<Box2DRopeJoint *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QPointF*>(_v) = _t->localAnchorA(); break;
        case 1: *reinterpret_cast< QPointF*>(_v) = _t->localAnchorB(); break;
        case 2: *reinterpret_cast< float*>(_v) = _t->maxLength(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        Box2DRopeJoint *_t = static_cast<Box2DRopeJoint *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setLocalAnchorA(*reinterpret_cast< QPointF*>(_v)); break;
        case 1: _t->setLocalAnchorB(*reinterpret_cast< QPointF*>(_v)); break;
        case 2: _t->setMaxLength(*reinterpret_cast< float*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject Box2DRopeJoint::staticMetaObject = {
    { &Box2DJoint::staticMetaObject, qt_meta_stringdata_Box2DRopeJoint.data,
      qt_meta_data_Box2DRopeJoint,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Box2DRopeJoint::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Box2DRopeJoint::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Box2DRopeJoint.stringdata0))
        return static_cast<void*>(const_cast< Box2DRopeJoint*>(this));
    return Box2DJoint::qt_metacast(_clname);
}

int Box2DRopeJoint::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Box2DRopeJoint::localAnchorAChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void Box2DRopeJoint::localAnchorBChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void Box2DRopeJoint::maxLengthChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
