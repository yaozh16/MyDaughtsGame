/****************************************************************************
** Meta object code from reading C++ file 'MyThreadTransferMessage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../MyDraughtsGameClient/MyThreadTransferMessage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MyThreadTransferMessage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MyThreadTransferMessage_t {
    QByteArrayData data[38];
    char stringdata0[566];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MyThreadTransferMessage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MyThreadTransferMessage_t qt_meta_stringdata_MyThreadTransferMessage = {
    {
QT_MOC_LITERAL(0, 0, 23), // "MyThreadTransferMessage"
QT_MOC_LITERAL(1, 24, 25), // "Broadcast_Connect_Success"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 7), // "success"
QT_MOC_LITERAL(4, 59, 24), // "Broadcast_Received_Steps"
QT_MOC_LITERAL(5, 84, 15), // "QVector<QPoint>"
QT_MOC_LITERAL(6, 100, 5), // "Steps"
QT_MOC_LITERAL(7, 106, 15), // "Broadcast_Begin"
QT_MOC_LITERAL(8, 122, 5), // "first"
QT_MOC_LITERAL(9, 128, 20), // "Broadcast_Enemy_Lost"
QT_MOC_LITERAL(10, 149, 25), // "Broadcast_Reply_Surrender"
QT_MOC_LITERAL(11, 175, 5), // "reply"
QT_MOC_LITERAL(12, 181, 27), // "Broadcast_Request_Surrender"
QT_MOC_LITERAL(13, 209, 21), // "Broadcast_Reply_Peace"
QT_MOC_LITERAL(14, 231, 23), // "Broadcast_Request_Peace"
QT_MOC_LITERAL(15, 255, 19), // "Broadcast_AutoPeace"
QT_MOC_LITERAL(16, 275, 23), // "Broadcast_Received_Chat"
QT_MOC_LITERAL(17, 299, 7), // "message"
QT_MOC_LITERAL(18, 307, 20), // "Broadcast_Enemy_Fail"
QT_MOC_LITERAL(19, 328, 21), // "on_socket_stateChange"
QT_MOC_LITERAL(20, 350, 28), // "QAbstractSocket::SocketState"
QT_MOC_LITERAL(21, 379, 6), // "state_"
QT_MOC_LITERAL(22, 386, 14), // "on_socket_Recv"
QT_MOC_LITERAL(23, 401, 10), // "on_Connect"
QT_MOC_LITERAL(24, 412, 2), // "IP"
QT_MOC_LITERAL(25, 415, 3), // "com"
QT_MOC_LITERAL(26, 419, 8), // "on_Ready"
QT_MOC_LITERAL(27, 428, 13), // "on_Send_Steps"
QT_MOC_LITERAL(28, 442, 16), // "on_Request_Peace"
QT_MOC_LITERAL(29, 459, 20), // "on_Request_Surrender"
QT_MOC_LITERAL(30, 480, 14), // "on_Reply_Peace"
QT_MOC_LITERAL(31, 495, 5), // "agree"
QT_MOC_LITERAL(32, 501, 18), // "on_Reply_Surrender"
QT_MOC_LITERAL(33, 520, 12), // "on_AutoPeace"
QT_MOC_LITERAL(34, 533, 7), // "on_Chat"
QT_MOC_LITERAL(35, 541, 7), // "on_Fail"
QT_MOC_LITERAL(36, 549, 6), // "on_End"
QT_MOC_LITERAL(37, 556, 9) // "on_LogOut"

    },
    "MyThreadTransferMessage\0"
    "Broadcast_Connect_Success\0\0success\0"
    "Broadcast_Received_Steps\0QVector<QPoint>\0"
    "Steps\0Broadcast_Begin\0first\0"
    "Broadcast_Enemy_Lost\0Broadcast_Reply_Surrender\0"
    "reply\0Broadcast_Request_Surrender\0"
    "Broadcast_Reply_Peace\0Broadcast_Request_Peace\0"
    "Broadcast_AutoPeace\0Broadcast_Received_Chat\0"
    "message\0Broadcast_Enemy_Fail\0"
    "on_socket_stateChange\0"
    "QAbstractSocket::SocketState\0state_\0"
    "on_socket_Recv\0on_Connect\0IP\0com\0"
    "on_Ready\0on_Send_Steps\0on_Request_Peace\0"
    "on_Request_Surrender\0on_Reply_Peace\0"
    "agree\0on_Reply_Surrender\0on_AutoPeace\0"
    "on_Chat\0on_Fail\0on_End\0on_LogOut"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MyThreadTransferMessage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      25,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      11,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  139,    2, 0x06 /* Public */,
       4,    1,  142,    2, 0x06 /* Public */,
       7,    1,  145,    2, 0x06 /* Public */,
       9,    0,  148,    2, 0x06 /* Public */,
      10,    1,  149,    2, 0x06 /* Public */,
      12,    0,  152,    2, 0x06 /* Public */,
      13,    1,  153,    2, 0x06 /* Public */,
      14,    0,  156,    2, 0x06 /* Public */,
      15,    0,  157,    2, 0x06 /* Public */,
      16,    1,  158,    2, 0x06 /* Public */,
      18,    0,  161,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      19,    1,  162,    2, 0x0a /* Public */,
      22,    0,  165,    2, 0x0a /* Public */,
      23,    2,  166,    2, 0x0a /* Public */,
      26,    0,  171,    2, 0x0a /* Public */,
      27,    1,  172,    2, 0x0a /* Public */,
      28,    0,  175,    2, 0x0a /* Public */,
      29,    0,  176,    2, 0x0a /* Public */,
      30,    1,  177,    2, 0x0a /* Public */,
      32,    1,  180,    2, 0x0a /* Public */,
      33,    0,  183,    2, 0x0a /* Public */,
      34,    1,  184,    2, 0x0a /* Public */,
      35,    0,  187,    2, 0x0a /* Public */,
      36,    0,  188,    2, 0x0a /* Public */,
      37,    0,  189,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   17,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 20,   21,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   24,   25,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   31,
    QMetaType::Void, QMetaType::Bool,   31,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   17,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MyThreadTransferMessage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MyThreadTransferMessage *_t = static_cast<MyThreadTransferMessage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Broadcast_Connect_Success((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->Broadcast_Received_Steps((*reinterpret_cast< QVector<QPoint>(*)>(_a[1]))); break;
        case 2: _t->Broadcast_Begin((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->Broadcast_Enemy_Lost(); break;
        case 4: _t->Broadcast_Reply_Surrender((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->Broadcast_Request_Surrender(); break;
        case 6: _t->Broadcast_Reply_Peace((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->Broadcast_Request_Peace(); break;
        case 8: _t->Broadcast_AutoPeace(); break;
        case 9: _t->Broadcast_Received_Chat((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->Broadcast_Enemy_Fail(); break;
        case 11: _t->on_socket_stateChange((*reinterpret_cast< QAbstractSocket::SocketState(*)>(_a[1]))); break;
        case 12: _t->on_socket_Recv(); break;
        case 13: _t->on_Connect((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 14: _t->on_Ready(); break;
        case 15: _t->on_Send_Steps((*reinterpret_cast< QVector<QPoint>(*)>(_a[1]))); break;
        case 16: _t->on_Request_Peace(); break;
        case 17: _t->on_Request_Surrender(); break;
        case 18: _t->on_Reply_Peace((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 19: _t->on_Reply_Surrender((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 20: _t->on_AutoPeace(); break;
        case 21: _t->on_Chat((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 22: _t->on_Fail(); break;
        case 23: _t->on_End(); break;
        case 24: _t->on_LogOut(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QPoint> >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketState >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QPoint> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MyThreadTransferMessage::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyThreadTransferMessage::Broadcast_Connect_Success)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (MyThreadTransferMessage::*_t)(QVector<QPoint> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyThreadTransferMessage::Broadcast_Received_Steps)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (MyThreadTransferMessage::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyThreadTransferMessage::Broadcast_Begin)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (MyThreadTransferMessage::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyThreadTransferMessage::Broadcast_Enemy_Lost)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (MyThreadTransferMessage::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyThreadTransferMessage::Broadcast_Reply_Surrender)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (MyThreadTransferMessage::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyThreadTransferMessage::Broadcast_Request_Surrender)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (MyThreadTransferMessage::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyThreadTransferMessage::Broadcast_Reply_Peace)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (MyThreadTransferMessage::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyThreadTransferMessage::Broadcast_Request_Peace)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (MyThreadTransferMessage::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyThreadTransferMessage::Broadcast_AutoPeace)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (MyThreadTransferMessage::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyThreadTransferMessage::Broadcast_Received_Chat)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (MyThreadTransferMessage::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyThreadTransferMessage::Broadcast_Enemy_Fail)) {
                *result = 10;
                return;
            }
        }
    }
}

const QMetaObject MyThreadTransferMessage::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_MyThreadTransferMessage.data,
      qt_meta_data_MyThreadTransferMessage,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MyThreadTransferMessage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MyThreadTransferMessage::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MyThreadTransferMessage.stringdata0))
        return static_cast<void*>(const_cast< MyThreadTransferMessage*>(this));
    return QThread::qt_metacast(_clname);
}

int MyThreadTransferMessage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    }
    return _id;
}

// SIGNAL 0
void MyThreadTransferMessage::Broadcast_Connect_Success(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MyThreadTransferMessage::Broadcast_Received_Steps(QVector<QPoint> _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MyThreadTransferMessage::Broadcast_Begin(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MyThreadTransferMessage::Broadcast_Enemy_Lost()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void MyThreadTransferMessage::Broadcast_Reply_Surrender(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void MyThreadTransferMessage::Broadcast_Request_Surrender()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}

// SIGNAL 6
void MyThreadTransferMessage::Broadcast_Reply_Peace(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void MyThreadTransferMessage::Broadcast_Request_Peace()
{
    QMetaObject::activate(this, &staticMetaObject, 7, Q_NULLPTR);
}

// SIGNAL 8
void MyThreadTransferMessage::Broadcast_AutoPeace()
{
    QMetaObject::activate(this, &staticMetaObject, 8, Q_NULLPTR);
}

// SIGNAL 9
void MyThreadTransferMessage::Broadcast_Received_Chat(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void MyThreadTransferMessage::Broadcast_Enemy_Fail()
{
    QMetaObject::activate(this, &staticMetaObject, 10, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
