/****************************************************************************
** Meta object code from reading C++ file 'box2dgearjoint.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../GCompris-qt/external/qml-box2d/box2dgearjoint.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'box2dgearjoint.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Box2DGearJoint_t {
    QByteArrayData data[11];
    char stringdata0[117];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Box2DGearJoint_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Box2DGearJoint_t qt_meta_stringdata_Box2DGearJoint = {
    {
QT_MOC_LITERAL(0, 0, 14), // "Box2DGearJoint"
QT_MOC_LITERAL(1, 15, 13), // "joint1Changed"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 13), // "joint2Changed"
QT_MOC_LITERAL(4, 44, 12), // "ratioChanged"
QT_MOC_LITERAL(5, 57, 13), // "joint1Created"
QT_MOC_LITERAL(6, 71, 13), // "joint2Created"
QT_MOC_LITERAL(7, 85, 6), // "joint1"
QT_MOC_LITERAL(8, 92, 11), // "Box2DJoint*"
QT_MOC_LITERAL(9, 104, 6), // "joint2"
QT_MOC_LITERAL(10, 111, 5) // "ratio"

    },
    "Box2DGearJoint\0joint1Changed\0\0"
    "joint2Changed\0ratioChanged\0joint1Created\0"
    "joint2Created\0joint1\0Box2DJoint*\0"
    "joint2\0ratio"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Box2DGearJoint[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       3,   44, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,
       4,    0,   41,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   42,    2, 0x08 /* Private */,
       6,    0,   43,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       7, 0x80000000 | 8, 0x0049510b,
       9, 0x80000000 | 8, 0x0049510b,
      10, QMetaType::Float, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,

       0        // eod
};

void Box2DGearJoint::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Box2DGearJoint *_t = static_cast<Box2DGearJoint *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->joint1Changed(); break;
        case 1: _t->joint2Changed(); break;
        case 2: _t->ratioChanged(); break;
        case 3: _t->joint1Created(); break;
        case 4: _t->joint2Created(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Box2DGearJoint::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Box2DGearJoint::joint1Changed)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Box2DGearJoint::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Box2DGearJoint::joint2Changed)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Box2DGearJoint::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Box2DGearJoint::ratioChanged)) {
                *result = 2;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Box2DJoint* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        Box2DGearJoint *_t = static_cast<Box2DGearJoint *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Box2DJoint**>(_v) = _t->joint1(); break;
        case 1: *reinterpret_cast< Box2DJoint**>(_v) = _t->joint2(); break;
        case 2: *reinterpret_cast< float*>(_v) = _t->ratio(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        Box2DGearJoint *_t = static_cast<Box2DGearJoint *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setJoint1(*reinterpret_cast< Box2DJoint**>(_v)); break;
        case 1: _t->setJoint2(*reinterpret_cast< Box2DJoint**>(_v)); break;
        case 2: _t->setRatio(*reinterpret_cast< float*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject Box2DGearJoint::staticMetaObject = {
    { &Box2DJoint::staticMetaObject, qt_meta_stringdata_Box2DGearJoint.data,
      qt_meta_data_Box2DGearJoint,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Box2DGearJoint::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Box2DGearJoint::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Box2DGearJoint.stringdata0))
        return static_cast<void*>(const_cast< Box2DGearJoint*>(this));
    return Box2DJoint::qt_metacast(_clname);
}

int Box2DGearJoint::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void Box2DGearJoint::joint1Changed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void Box2DGearJoint::joint2Changed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void Box2DGearJoint::ratioChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
