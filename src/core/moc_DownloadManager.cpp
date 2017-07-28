/****************************************************************************
** Meta object code from reading C++ file 'DownloadManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../GCompris-qt/src/core/DownloadManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DownloadManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DownloadManager_t {
    QByteArrayData data[30];
    char stringdata0[409];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DownloadManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DownloadManager_t qt_meta_stringdata_DownloadManager = {
    {
QT_MOC_LITERAL(0, 0, 15), // "DownloadManager"
QT_MOC_LITERAL(1, 16, 5), // "error"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 4), // "code"
QT_MOC_LITERAL(4, 28, 3), // "msg"
QT_MOC_LITERAL(5, 32, 15), // "downloadStarted"
QT_MOC_LITERAL(6, 48, 8), // "resource"
QT_MOC_LITERAL(7, 57, 16), // "downloadProgress"
QT_MOC_LITERAL(8, 74, 13), // "bytesReceived"
QT_MOC_LITERAL(9, 88, 10), // "bytesTotal"
QT_MOC_LITERAL(10, 99, 16), // "downloadFinished"
QT_MOC_LITERAL(11, 116, 18), // "resourceRegistered"
QT_MOC_LITERAL(12, 135, 16), // "voicesRegistered"
QT_MOC_LITERAL(13, 152, 17), // "downloadReadyRead"
QT_MOC_LITERAL(14, 170, 11), // "handleError"
QT_MOC_LITERAL(15, 182, 27), // "QNetworkReply::NetworkError"
QT_MOC_LITERAL(16, 210, 14), // "updateResource"
QT_MOC_LITERAL(17, 225, 4), // "path"
QT_MOC_LITERAL(18, 230, 16), // "downloadResource"
QT_MOC_LITERAL(19, 247, 8), // "shutdown"
QT_MOC_LITERAL(20, 256, 14), // "abortDownloads"
QT_MOC_LITERAL(21, 271, 26), // "getVoicesResourceForLocale"
QT_MOC_LITERAL(22, 298, 6), // "locale"
QT_MOC_LITERAL(23, 305, 17), // "haveLocalResource"
QT_MOC_LITERAL(24, 323, 17), // "downloadIsRunning"
QT_MOC_LITERAL(25, 341, 16), // "isDataRegistered"
QT_MOC_LITERAL(26, 358, 4), // "data"
QT_MOC_LITERAL(27, 363, 19), // "areVoicesRegistered"
QT_MOC_LITERAL(28, 383, 16), // "registerResource"
QT_MOC_LITERAL(29, 400, 8) // "filename"

    },
    "DownloadManager\0error\0\0code\0msg\0"
    "downloadStarted\0resource\0downloadProgress\0"
    "bytesReceived\0bytesTotal\0downloadFinished\0"
    "resourceRegistered\0voicesRegistered\0"
    "downloadReadyRead\0handleError\0"
    "QNetworkReply::NetworkError\0updateResource\0"
    "path\0downloadResource\0shutdown\0"
    "abortDownloads\0getVoicesResourceForLocale\0"
    "locale\0haveLocalResource\0downloadIsRunning\0"
    "isDataRegistered\0data\0areVoicesRegistered\0"
    "registerResource\0filename"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DownloadManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,  109,    2, 0x06 /* Public */,
       5,    1,  114,    2, 0x06 /* Public */,
       7,    2,  117,    2, 0x06 /* Public */,
      10,    1,  122,    2, 0x06 /* Public */,
      11,    1,  125,    2, 0x06 /* Public */,
      12,    0,  128,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    0,  129,    2, 0x08 /* Private */,
      13,    0,  130,    2, 0x08 /* Private */,
      14,    1,  131,    2, 0x08 /* Private */,
      16,    1,  134,    2, 0x0a /* Public */,
      18,    1,  137,    2, 0x0a /* Public */,
      19,    0,  140,    2, 0x0a /* Public */,
      20,    0,  141,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      21,    1,  142,    2, 0x02 /* Public */,
      23,    1,  145,    2, 0x02 /* Public */,
      24,    0,  148,    2, 0x02 /* Public */,
      25,    1,  149,    2, 0x02 /* Public */,
      27,    0,  152,    2, 0x02 /* Public */,
      28,    1,  153,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    8,    9,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 15,    3,
    QMetaType::Bool, QMetaType::QString,   17,
    QMetaType::Bool, QMetaType::QString,   17,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::QString, QMetaType::QString,   22,
    QMetaType::Bool, QMetaType::QString,   17,
    QMetaType::Bool,
    QMetaType::Bool, QMetaType::QString,   26,
    QMetaType::Bool,
    QMetaType::Bool, QMetaType::QString,   29,

       0        // eod
};

void DownloadManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DownloadManager *_t = static_cast<DownloadManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->error((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->downloadStarted((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->downloadProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 3: _t->downloadFinished((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->resourceRegistered((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->voicesRegistered(); break;
        case 6: _t->downloadFinished(); break;
        case 7: _t->downloadReadyRead(); break;
        case 8: _t->handleError((*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[1]))); break;
        case 9: { bool _r = _t->updateResource((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { bool _r = _t->downloadResource((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: _t->shutdown(); break;
        case 12: _t->abortDownloads(); break;
        case 13: { QString _r = _t->getVoicesResourceForLocale((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 14: { bool _r = _t->haveLocalResource((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 15: { bool _r = _t->downloadIsRunning();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 16: { bool _r = _t->isDataRegistered((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 17: { bool _r = _t->areVoicesRegistered();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 18: { bool _r = _t->registerResource((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (DownloadManager::*_t)(int , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DownloadManager::error)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (DownloadManager::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DownloadManager::downloadStarted)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (DownloadManager::*_t)(qint64 , qint64 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DownloadManager::downloadProgress)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (DownloadManager::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DownloadManager::downloadFinished)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (DownloadManager::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DownloadManager::resourceRegistered)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (DownloadManager::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DownloadManager::voicesRegistered)) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject DownloadManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_DownloadManager.data,
      qt_meta_data_DownloadManager,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DownloadManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DownloadManager::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DownloadManager.stringdata0))
        return static_cast<void*>(const_cast< DownloadManager*>(this));
    return QObject::qt_metacast(_clname);
}

int DownloadManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 19;
    }
    return _id;
}

// SIGNAL 0
void DownloadManager::error(int _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DownloadManager::downloadStarted(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DownloadManager::downloadProgress(qint64 _t1, qint64 _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void DownloadManager::downloadFinished(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void DownloadManager::resourceRegistered(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void DownloadManager::voicesRegistered()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
