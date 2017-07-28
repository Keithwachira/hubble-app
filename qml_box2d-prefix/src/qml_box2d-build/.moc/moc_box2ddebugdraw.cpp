/****************************************************************************
** Meta object code from reading C++ file 'box2ddebugdraw.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../GCompris-qt/external/qml-box2d/box2ddebugdraw.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'box2ddebugdraw.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Box2DDebugDraw_t {
    QByteArrayData data[17];
    char stringdata0[164];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Box2DDebugDraw_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Box2DDebugDraw_t qt_meta_stringdata_Box2DDebugDraw = {
    {
QT_MOC_LITERAL(0, 0, 14), // "Box2DDebugDraw"
QT_MOC_LITERAL(1, 15, 16), // "axisScaleChanged"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 12), // "flagsChanged"
QT_MOC_LITERAL(4, 46, 12), // "worldChanged"
QT_MOC_LITERAL(5, 59, 14), // "onWorldStepped"
QT_MOC_LITERAL(6, 74, 9), // "axisScale"
QT_MOC_LITERAL(7, 84, 5), // "flags"
QT_MOC_LITERAL(8, 90, 9), // "DebugFlag"
QT_MOC_LITERAL(9, 100, 5), // "world"
QT_MOC_LITERAL(10, 106, 11), // "Box2DWorld*"
QT_MOC_LITERAL(11, 118, 5), // "Shape"
QT_MOC_LITERAL(12, 124, 5), // "Joint"
QT_MOC_LITERAL(13, 130, 4), // "AABB"
QT_MOC_LITERAL(14, 135, 4), // "Pair"
QT_MOC_LITERAL(15, 140, 12), // "CenterOfMass"
QT_MOC_LITERAL(16, 153, 10) // "Everything"

    },
    "Box2DDebugDraw\0axisScaleChanged\0\0"
    "flagsChanged\0worldChanged\0onWorldStepped\0"
    "axisScale\0flags\0DebugFlag\0world\0"
    "Box2DWorld*\0Shape\0Joint\0AABB\0Pair\0"
    "CenterOfMass\0Everything"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Box2DDebugDraw[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       3,   38, // properties
       1,   50, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,
       4,    0,   36,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   37,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       6, QMetaType::QReal, 0x00495103,
       7, 0x80000000 | 8, 0x0049510b,
       9, 0x80000000 | 10, 0x0049510b,

 // properties: notify_signal_id
       0,
       1,
       2,

 // enums: name, flags, count, data
       8, 0x0,    6,   54,

 // enum data: key, value
      11, uint(Box2DDebugDraw::Shape),
      12, uint(Box2DDebugDraw::Joint),
      13, uint(Box2DDebugDraw::AABB),
      14, uint(Box2DDebugDraw::Pair),
      15, uint(Box2DDebugDraw::CenterOfMass),
      16, uint(Box2DDebugDraw::Everything),

       0        // eod
};

void Box2DDebugDraw::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Box2DDebugDraw *_t = static_cast<Box2DDebugDraw *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->axisScaleChanged(); break;
        case 1: _t->flagsChanged(); break;
        case 2: _t->worldChanged(); break;
        case 3: _t->onWorldStepped(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Box2DDebugDraw::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Box2DDebugDraw::axisScaleChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Box2DDebugDraw::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Box2DDebugDraw::flagsChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Box2DDebugDraw::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Box2DDebugDraw::worldChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        Box2DDebugDraw *_t = static_cast<Box2DDebugDraw *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->axisScale(); break;
        case 1: *reinterpret_cast< DebugFlag*>(_v) = _t->flags(); break;
        case 2: *reinterpret_cast< Box2DWorld**>(_v) = _t->world(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        Box2DDebugDraw *_t = static_cast<Box2DDebugDraw *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setAxisScale(*reinterpret_cast< qreal*>(_v)); break;
        case 1: _t->setFlags(*reinterpret_cast< DebugFlag*>(_v)); break;
        case 2: _t->setWorld(*reinterpret_cast< Box2DWorld**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject Box2DDebugDraw::staticMetaObject = {
    { &QQuickItem::staticMetaObject, qt_meta_stringdata_Box2DDebugDraw.data,
      qt_meta_data_Box2DDebugDraw,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Box2DDebugDraw::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Box2DDebugDraw::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Box2DDebugDraw.stringdata0))
        return static_cast<void*>(const_cast< Box2DDebugDraw*>(this));
    return QQuickItem::qt_metacast(_clname);
}

int Box2DDebugDraw::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
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
void Box2DDebugDraw::axisScaleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void Box2DDebugDraw::flagsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void Box2DDebugDraw::worldChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
