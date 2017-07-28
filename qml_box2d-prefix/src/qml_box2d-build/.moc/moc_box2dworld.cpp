/****************************************************************************
** Meta object code from reading C++ file 'box2dworld.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../GCompris-qt/external/qml-box2d/box2dworld.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'box2dworld.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_StepDriver_t {
    QByteArrayData data[1];
    char stringdata0[11];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StepDriver_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StepDriver_t qt_meta_stringdata_StepDriver = {
    {
QT_MOC_LITERAL(0, 0, 10) // "StepDriver"

    },
    "StepDriver"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StepDriver[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void StepDriver::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject StepDriver::staticMetaObject = {
    { &QAbstractAnimation::staticMetaObject, qt_meta_stringdata_StepDriver.data,
      qt_meta_data_StepDriver,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *StepDriver::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StepDriver::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_StepDriver.stringdata0))
        return static_cast<void*>(const_cast< StepDriver*>(this));
    return QAbstractAnimation::qt_metacast(_clname);
}

int StepDriver::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractAnimation::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_Box2DProfile_t {
    QByteArrayData data[11];
    char stringdata0[114];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Box2DProfile_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Box2DProfile_t qt_meta_stringdata_Box2DProfile = {
    {
QT_MOC_LITERAL(0, 0, 12), // "Box2DProfile"
QT_MOC_LITERAL(1, 13, 4), // "step"
QT_MOC_LITERAL(2, 18, 7), // "collide"
QT_MOC_LITERAL(3, 26, 5), // "solve"
QT_MOC_LITERAL(4, 32, 9), // "solveInit"
QT_MOC_LITERAL(5, 42, 13), // "solveVelocity"
QT_MOC_LITERAL(6, 56, 13), // "solvePosition"
QT_MOC_LITERAL(7, 70, 10), // "broadphase"
QT_MOC_LITERAL(8, 81, 8), // "solveTOI"
QT_MOC_LITERAL(9, 90, 11), // "synchronize"
QT_MOC_LITERAL(10, 102, 11) // "emitSignals"

    },
    "Box2DProfile\0step\0collide\0solve\0"
    "solveInit\0solveVelocity\0solvePosition\0"
    "broadphase\0solveTOI\0synchronize\0"
    "emitSignals"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Box2DProfile[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
      10,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::Float, 0x00095401,
       2, QMetaType::Float, 0x00095401,
       3, QMetaType::Float, 0x00095401,
       4, QMetaType::Float, 0x00095401,
       5, QMetaType::Float, 0x00095401,
       6, QMetaType::Float, 0x00095401,
       7, QMetaType::Float, 0x00095401,
       8, QMetaType::Float, 0x00095401,
       9, QMetaType::Float, 0x00095401,
      10, QMetaType::Float, 0x00095401,

       0        // eod
};

void Box2DProfile::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        Box2DProfile *_t = static_cast<Box2DProfile *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = _t->step(); break;
        case 1: *reinterpret_cast< float*>(_v) = _t->collide(); break;
        case 2: *reinterpret_cast< float*>(_v) = _t->solve(); break;
        case 3: *reinterpret_cast< float*>(_v) = _t->solveInit(); break;
        case 4: *reinterpret_cast< float*>(_v) = _t->solveVelocity(); break;
        case 5: *reinterpret_cast< float*>(_v) = _t->solvePosition(); break;
        case 6: *reinterpret_cast< float*>(_v) = _t->broadphase(); break;
        case 7: *reinterpret_cast< float*>(_v) = _t->solveTOI(); break;
        case 8: *reinterpret_cast< float*>(_v) = _t->synchronize(); break;
        case 9: *reinterpret_cast< float*>(_v) = _t->emitSignals(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject Box2DProfile::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Box2DProfile.data,
      qt_meta_data_Box2DProfile,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Box2DProfile::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Box2DProfile::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Box2DProfile.stringdata0))
        return static_cast<void*>(const_cast< Box2DProfile*>(this));
    return QObject::qt_metacast(_clname);
}

int Box2DProfile::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 10;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_Box2DWorld_t {
    QByteArrayData data[31];
    char stringdata0[420];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Box2DWorld_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Box2DWorld_t qt_meta_stringdata_Box2DWorld = {
    {
QT_MOC_LITERAL(0, 0, 10), // "Box2DWorld"
QT_MOC_LITERAL(1, 11, 8), // "preSolve"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 13), // "Box2DContact*"
QT_MOC_LITERAL(4, 35, 7), // "contact"
QT_MOC_LITERAL(5, 43, 9), // "postSolve"
QT_MOC_LITERAL(6, 53, 15), // "timeStepChanged"
QT_MOC_LITERAL(7, 69, 25), // "velocityIterationsChanged"
QT_MOC_LITERAL(8, 95, 25), // "positionIterationsChanged"
QT_MOC_LITERAL(9, 121, 14), // "gravityChanged"
QT_MOC_LITERAL(10, 136, 22), // "autoClearForcesChanged"
QT_MOC_LITERAL(11, 159, 14), // "runningChanged"
QT_MOC_LITERAL(12, 174, 7), // "stepped"
QT_MOC_LITERAL(13, 182, 26), // "enableContactEventsChanged"
QT_MOC_LITERAL(14, 209, 21), // "pixelsPerMeterChanged"
QT_MOC_LITERAL(15, 231, 4), // "step"
QT_MOC_LITERAL(16, 236, 11), // "clearForces"
QT_MOC_LITERAL(17, 248, 7), // "rayCast"
QT_MOC_LITERAL(18, 256, 13), // "Box2DRayCast*"
QT_MOC_LITERAL(19, 270, 6), // "point1"
QT_MOC_LITERAL(20, 277, 6), // "point2"
QT_MOC_LITERAL(21, 284, 7), // "running"
QT_MOC_LITERAL(22, 292, 8), // "timeStep"
QT_MOC_LITERAL(23, 301, 18), // "velocityIterations"
QT_MOC_LITERAL(24, 320, 18), // "positionIterations"
QT_MOC_LITERAL(25, 339, 7), // "gravity"
QT_MOC_LITERAL(26, 347, 15), // "autoClearForces"
QT_MOC_LITERAL(27, 363, 7), // "profile"
QT_MOC_LITERAL(28, 371, 13), // "Box2DProfile*"
QT_MOC_LITERAL(29, 385, 14), // "pixelsPerMeter"
QT_MOC_LITERAL(30, 400, 19) // "enableContactEvents"

    },
    "Box2DWorld\0preSolve\0\0Box2DContact*\0"
    "contact\0postSolve\0timeStepChanged\0"
    "velocityIterationsChanged\0"
    "positionIterationsChanged\0gravityChanged\0"
    "autoClearForcesChanged\0runningChanged\0"
    "stepped\0enableContactEventsChanged\0"
    "pixelsPerMeterChanged\0step\0clearForces\0"
    "rayCast\0Box2DRayCast*\0point1\0point2\0"
    "running\0timeStep\0velocityIterations\0"
    "positionIterations\0gravity\0autoClearForces\0"
    "profile\0Box2DProfile*\0pixelsPerMeter\0"
    "enableContactEvents"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Box2DWorld[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       9,  108, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      11,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x06 /* Public */,
       5,    1,   87,    2, 0x06 /* Public */,
       6,    0,   90,    2, 0x06 /* Public */,
       7,    0,   91,    2, 0x06 /* Public */,
       8,    0,   92,    2, 0x06 /* Public */,
       9,    0,   93,    2, 0x06 /* Public */,
      10,    0,   94,    2, 0x06 /* Public */,
      11,    0,   95,    2, 0x06 /* Public */,
      12,    0,   96,    2, 0x06 /* Public */,
      13,    0,   97,    2, 0x06 /* Public */,
      14,    0,   98,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
      15,    0,   99,    2, 0x02 /* Public */,
      16,    0,  100,    2, 0x02 /* Public */,
      17,    3,  101,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 18, QMetaType::QPointF, QMetaType::QPointF,   17,   19,   20,

 // properties: name, type, flags
      21, QMetaType::Bool, 0x00495103,
      22, QMetaType::Float, 0x00495103,
      23, QMetaType::Int, 0x00495103,
      24, QMetaType::Int, 0x00495103,
      25, QMetaType::QPointF, 0x00495103,
      26, QMetaType::Bool, 0x00495103,
      27, 0x80000000 | 28, 0x00495009,
      29, QMetaType::Float, 0x00495103,
      30, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       7,
       2,
       3,
       4,
       5,
       6,
       8,
      10,
       9,

       0        // eod
};

void Box2DWorld::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Box2DWorld *_t = static_cast<Box2DWorld *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->preSolve((*reinterpret_cast< Box2DContact*(*)>(_a[1]))); break;
        case 1: _t->postSolve((*reinterpret_cast< Box2DContact*(*)>(_a[1]))); break;
        case 2: _t->timeStepChanged(); break;
        case 3: _t->velocityIterationsChanged(); break;
        case 4: _t->positionIterationsChanged(); break;
        case 5: _t->gravityChanged(); break;
        case 6: _t->autoClearForcesChanged(); break;
        case 7: _t->runningChanged(); break;
        case 8: _t->stepped(); break;
        case 9: _t->enableContactEventsChanged(); break;
        case 10: _t->pixelsPerMeterChanged(); break;
        case 11: _t->step(); break;
        case 12: _t->clearForces(); break;
        case 13: _t->rayCast((*reinterpret_cast< Box2DRayCast*(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2])),(*reinterpret_cast< const QPointF(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Box2DWorld::*_t)(Box2DContact * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Box2DWorld::preSolve)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Box2DWorld::*_t)(Box2DContact * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Box2DWorld::postSolve)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Box2DWorld::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Box2DWorld::timeStepChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (Box2DWorld::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Box2DWorld::velocityIterationsChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (Box2DWorld::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Box2DWorld::positionIterationsChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (Box2DWorld::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Box2DWorld::gravityChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (Box2DWorld::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Box2DWorld::autoClearForcesChanged)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (Box2DWorld::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Box2DWorld::runningChanged)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (Box2DWorld::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Box2DWorld::stepped)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (Box2DWorld::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Box2DWorld::enableContactEventsChanged)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (Box2DWorld::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Box2DWorld::pixelsPerMeterChanged)) {
                *result = 10;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Box2DProfile* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        Box2DWorld *_t = static_cast<Box2DWorld *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isRunning(); break;
        case 1: *reinterpret_cast< float*>(_v) = _t->timeStep(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->velocityIterations(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->positionIterations(); break;
        case 4: *reinterpret_cast< QPointF*>(_v) = _t->gravity(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->autoClearForces(); break;
        case 6: *reinterpret_cast< Box2DProfile**>(_v) = _t->profile(); break;
        case 7: *reinterpret_cast< float*>(_v) = _t->pixelsPerMeter(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->enableContactEvents(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        Box2DWorld *_t = static_cast<Box2DWorld *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRunning(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setTimeStep(*reinterpret_cast< float*>(_v)); break;
        case 2: _t->setVelocityIterations(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setPositionIterations(*reinterpret_cast< int*>(_v)); break;
        case 4: _t->setGravity(*reinterpret_cast< QPointF*>(_v)); break;
        case 5: _t->setAutoClearForces(*reinterpret_cast< bool*>(_v)); break;
        case 7: _t->setPixelsPerMeter(*reinterpret_cast< float*>(_v)); break;
        case 8: _t->setEnableContactEvents(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject Box2DWorld::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Box2DWorld.data,
      qt_meta_data_Box2DWorld,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Box2DWorld::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Box2DWorld::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Box2DWorld.stringdata0))
        return static_cast<void*>(const_cast< Box2DWorld*>(this));
    if (!strcmp(_clname, "QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(const_cast< Box2DWorld*>(this));
    if (!strcmp(_clname, "b2DestructionListener"))
        return static_cast< b2DestructionListener*>(const_cast< Box2DWorld*>(this));
    if (!strcmp(_clname, "org.qt-project.Qt.QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(const_cast< Box2DWorld*>(this));
    return QObject::qt_metacast(_clname);
}

int Box2DWorld::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
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
void Box2DWorld::preSolve(Box2DContact * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Box2DWorld::postSolve(Box2DContact * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Box2DWorld::timeStepChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void Box2DWorld::velocityIterationsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void Box2DWorld::positionIterationsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void Box2DWorld::gravityChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}

// SIGNAL 6
void Box2DWorld::autoClearForcesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, Q_NULLPTR);
}

// SIGNAL 7
void Box2DWorld::runningChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, Q_NULLPTR);
}

// SIGNAL 8
void Box2DWorld::stepped()
{
    QMetaObject::activate(this, &staticMetaObject, 8, Q_NULLPTR);
}

// SIGNAL 9
void Box2DWorld::enableContactEventsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, Q_NULLPTR);
}

// SIGNAL 10
void Box2DWorld::pixelsPerMeterChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
