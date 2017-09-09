/****************************************************************************
** Meta object code from reading C++ file 'MyDraughtServer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../MyDraughtGameServer/MyDraughtServer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MyDraughtServer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MyDraughtServer_t {
    QByteArrayData data[16];
    char stringdata0[228];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MyDraughtServer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MyDraughtServer_t qt_meta_stringdata_MyDraughtServer = {
    {
QT_MOC_LITERAL(0, 0, 15), // "MyDraughtServer"
QT_MOC_LITERAL(1, 16, 17), // "Broadcast_Message"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 7), // "message"
QT_MOC_LITERAL(4, 43, 15), // "Broadcast_State"
QT_MOC_LITERAL(5, 59, 8), // "notready"
QT_MOC_LITERAL(6, 68, 5), // "ready"
QT_MOC_LITERAL(7, 74, 4), // "room"
QT_MOC_LITERAL(8, 79, 17), // "on_new_connection"
QT_MOC_LITERAL(9, 97, 23), // "on_socket_disconnection"
QT_MOC_LITERAL(10, 121, 11), // "SocketIndex"
QT_MOC_LITERAL(11, 133, 18), // "on_Receive_Message"
QT_MOC_LITERAL(12, 152, 22), // "on_socket_state_change"
QT_MOC_LITERAL(13, 175, 28), // "QAbstractSocket::SocketState"
QT_MOC_LITERAL(14, 204, 5), // "state"
QT_MOC_LITERAL(15, 210, 17) // "on_BroadcastState"

    },
    "MyDraughtServer\0Broadcast_Message\0\0"
    "message\0Broadcast_State\0notready\0ready\0"
    "room\0on_new_connection\0on_socket_disconnection\0"
    "SocketIndex\0on_Receive_Message\0"
    "on_socket_state_change\0"
    "QAbstractSocket::SocketState\0state\0"
    "on_BroadcastState"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MyDraughtServer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       4,    3,   52,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   59,    2, 0x0a /* Public */,
       9,    1,   60,    2, 0x0a /* Public */,
      11,    0,   63,    2, 0x0a /* Public */,
      12,    1,   64,    2, 0x0a /* Public */,
      15,    0,   67,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    5,    6,    7,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void,

       0        // eod
};

void MyDraughtServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MyDraughtServer *_t = static_cast<MyDraughtServer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Broadcast_Message((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->Broadcast_State((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 2: _t->on_new_connection(); break;
        case 3: _t->on_socket_disconnection((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_Receive_Message(); break;
        case 5: _t->on_socket_state_change((*reinterpret_cast< QAbstractSocket::SocketState(*)>(_a[1]))); break;
        case 6: _t->on_BroadcastState(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketState >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MyDraughtServer::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyDraughtServer::Broadcast_Message)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (MyDraughtServer::*_t)(int , int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyDraughtServer::Broadcast_State)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject MyDraughtServer::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_MyDraughtServer.data,
      qt_meta_data_MyDraughtServer,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MyDraughtServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MyDraughtServer::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MyDraughtServer.stringdata0))
        return static_cast<void*>(const_cast< MyDraughtServer*>(this));
    return QThread::qt_metacast(_clname);
}

int MyDraughtServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void MyDraughtServer::Broadcast_Message(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MyDraughtServer::Broadcast_State(int _t1, int _t2, int _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
