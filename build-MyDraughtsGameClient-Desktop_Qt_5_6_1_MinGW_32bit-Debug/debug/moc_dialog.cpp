/****************************************************************************
** Meta object code from reading C++ file 'dialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../MyDraughtsGameClient/dialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Dialog_t {
    QByteArrayData data[46];
    char stringdata0[764];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Dialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Dialog_t qt_meta_stringdata_Dialog = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Dialog"
QT_MOC_LITERAL(1, 7, 16), // "Broadcast_LogOut"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 15), // "Request_Connect"
QT_MOC_LITERAL(4, 41, 2), // "IP"
QT_MOC_LITERAL(5, 44, 3), // "com"
QT_MOC_LITERAL(6, 48, 13), // "Request_Ready"
QT_MOC_LITERAL(7, 62, 13), // "Request_Peace"
QT_MOC_LITERAL(8, 76, 17), // "Request_Surrender"
QT_MOC_LITERAL(9, 94, 11), // "Reply_Peace"
QT_MOC_LITERAL(10, 106, 5), // "agree"
QT_MOC_LITERAL(11, 112, 15), // "Reply_Surrender"
QT_MOC_LITERAL(12, 128, 20), // "Broadcast_Auto_Peace"
QT_MOC_LITERAL(13, 149, 12), // "Request_Chat"
QT_MOC_LITERAL(14, 162, 21), // "Broadcast_Update_Move"
QT_MOC_LITERAL(15, 184, 15), // "QVector<QPoint>"
QT_MOC_LITERAL(16, 200, 5), // "Steps"
QT_MOC_LITERAL(17, 206, 14), // "Broadcast_Fail"
QT_MOC_LITERAL(18, 221, 13), // "Broadcast_End"
QT_MOC_LITERAL(19, 235, 18), // "Broadcast_GameInit"
QT_MOC_LITERAL(20, 254, 20), // "on_Button_AI_clicked"
QT_MOC_LITERAL(21, 275, 29), // "on_Button_BackToLogIn_clicked"
QT_MOC_LITERAL(22, 305, 23), // "on_Button_LogIn_clicked"
QT_MOC_LITERAL(23, 329, 31), // "on_ThreadT_Update_Connect_State"
QT_MOC_LITERAL(24, 361, 7), // "success"
QT_MOC_LITERAL(25, 369, 23), // "on_Button_Ready_clicked"
QT_MOC_LITERAL(26, 393, 16), // "on_ThreadT_Begin"
QT_MOC_LITERAL(27, 410, 5), // "first"
QT_MOC_LITERAL(28, 416, 12), // "on_MoveSteps"
QT_MOC_LITERAL(29, 429, 23), // "on_Button_Peace_clicked"
QT_MOC_LITERAL(30, 453, 27), // "on_Button_Surrender_clicked"
QT_MOC_LITERAL(31, 481, 18), // "on_Peace_Requested"
QT_MOC_LITERAL(32, 500, 22), // "on_Surrender_Requested"
QT_MOC_LITERAL(33, 523, 14), // "on_Peace_Reply"
QT_MOC_LITERAL(34, 538, 18), // "on_Surrender_Reply"
QT_MOC_LITERAL(35, 557, 12), // "on_AutoPeace"
QT_MOC_LITERAL(36, 570, 26), // "on_Button_ChatSend_clicked"
QT_MOC_LITERAL(37, 597, 22), // "on_ThreadT_ReceiveChat"
QT_MOC_LITERAL(38, 620, 7), // "message"
QT_MOC_LITERAL(39, 628, 21), // "on_ThreadT_Enemy_Fail"
QT_MOC_LITERAL(40, 650, 21), // "on_ThreadT_Enemy_Lost"
QT_MOC_LITERAL(41, 672, 18), // "on_pushButton_Grid"
QT_MOC_LITERAL(42, 691, 1), // "n"
QT_MOC_LITERAL(43, 693, 31), // "on_ThreadC_UpdateAvailableSteps"
QT_MOC_LITERAL(44, 725, 23), // "QList<QVector<QPoint> >"
QT_MOC_LITERAL(45, 749, 14) // "AvailableSteps"

    },
    "Dialog\0Broadcast_LogOut\0\0Request_Connect\0"
    "IP\0com\0Request_Ready\0Request_Peace\0"
    "Request_Surrender\0Reply_Peace\0agree\0"
    "Reply_Surrender\0Broadcast_Auto_Peace\0"
    "Request_Chat\0Broadcast_Update_Move\0"
    "QVector<QPoint>\0Steps\0Broadcast_Fail\0"
    "Broadcast_End\0Broadcast_GameInit\0"
    "on_Button_AI_clicked\0on_Button_BackToLogIn_clicked\0"
    "on_Button_LogIn_clicked\0"
    "on_ThreadT_Update_Connect_State\0success\0"
    "on_Button_Ready_clicked\0on_ThreadT_Begin\0"
    "first\0on_MoveSteps\0on_Button_Peace_clicked\0"
    "on_Button_Surrender_clicked\0"
    "on_Peace_Requested\0on_Surrender_Requested\0"
    "on_Peace_Reply\0on_Surrender_Reply\0"
    "on_AutoPeace\0on_Button_ChatSend_clicked\0"
    "on_ThreadT_ReceiveChat\0message\0"
    "on_ThreadT_Enemy_Fail\0on_ThreadT_Enemy_Lost\0"
    "on_pushButton_Grid\0n\0"
    "on_ThreadC_UpdateAvailableSteps\0"
    "QList<QVector<QPoint> >\0AvailableSteps"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Dialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      33,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      13,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  179,    2, 0x06 /* Public */,
       3,    2,  180,    2, 0x06 /* Public */,
       6,    0,  185,    2, 0x06 /* Public */,
       7,    0,  186,    2, 0x06 /* Public */,
       8,    0,  187,    2, 0x06 /* Public */,
       9,    1,  188,    2, 0x06 /* Public */,
      11,    1,  191,    2, 0x06 /* Public */,
      12,    0,  194,    2, 0x06 /* Public */,
      13,    1,  195,    2, 0x06 /* Public */,
      14,    1,  198,    2, 0x06 /* Public */,
      17,    0,  201,    2, 0x06 /* Public */,
      18,    0,  202,    2, 0x06 /* Public */,
      19,    0,  203,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      20,    0,  204,    2, 0x0a /* Public */,
      21,    0,  205,    2, 0x0a /* Public */,
      22,    0,  206,    2, 0x0a /* Public */,
      23,    1,  207,    2, 0x0a /* Public */,
      25,    0,  210,    2, 0x0a /* Public */,
      26,    1,  211,    2, 0x0a /* Public */,
      28,    1,  214,    2, 0x0a /* Public */,
      29,    0,  217,    2, 0x0a /* Public */,
      30,    0,  218,    2, 0x0a /* Public */,
      31,    0,  219,    2, 0x0a /* Public */,
      32,    0,  220,    2, 0x0a /* Public */,
      33,    1,  221,    2, 0x0a /* Public */,
      34,    1,  224,    2, 0x0a /* Public */,
      35,    0,  227,    2, 0x0a /* Public */,
      36,    0,  228,    2, 0x0a /* Public */,
      37,    1,  229,    2, 0x0a /* Public */,
      39,    0,  232,    2, 0x0a /* Public */,
      40,    0,  233,    2, 0x0a /* Public */,
      41,    1,  234,    2, 0x0a /* Public */,
      43,    1,  237,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   24,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   27,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   38,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   42,
    QMetaType::Void, 0x80000000 | 44,   45,

       0        // eod
};

void Dialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Dialog *_t = static_cast<Dialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Broadcast_LogOut(); break;
        case 1: _t->Request_Connect((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->Request_Ready(); break;
        case 3: _t->Request_Peace(); break;
        case 4: _t->Request_Surrender(); break;
        case 5: _t->Reply_Peace((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->Reply_Surrender((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->Broadcast_Auto_Peace(); break;
        case 8: _t->Request_Chat((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->Broadcast_Update_Move((*reinterpret_cast< QVector<QPoint>(*)>(_a[1]))); break;
        case 10: _t->Broadcast_Fail(); break;
        case 11: _t->Broadcast_End(); break;
        case 12: _t->Broadcast_GameInit(); break;
        case 13: _t->on_Button_AI_clicked(); break;
        case 14: _t->on_Button_BackToLogIn_clicked(); break;
        case 15: _t->on_Button_LogIn_clicked(); break;
        case 16: _t->on_ThreadT_Update_Connect_State((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->on_Button_Ready_clicked(); break;
        case 18: _t->on_ThreadT_Begin((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 19: _t->on_MoveSteps((*reinterpret_cast< QVector<QPoint>(*)>(_a[1]))); break;
        case 20: _t->on_Button_Peace_clicked(); break;
        case 21: _t->on_Button_Surrender_clicked(); break;
        case 22: _t->on_Peace_Requested(); break;
        case 23: _t->on_Surrender_Requested(); break;
        case 24: _t->on_Peace_Reply((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 25: _t->on_Surrender_Reply((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 26: _t->on_AutoPeace(); break;
        case 27: _t->on_Button_ChatSend_clicked(); break;
        case 28: _t->on_ThreadT_ReceiveChat((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 29: _t->on_ThreadT_Enemy_Fail(); break;
        case 30: _t->on_ThreadT_Enemy_Lost(); break;
        case 31: _t->on_pushButton_Grid((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 32: _t->on_ThreadC_UpdateAvailableSteps((*reinterpret_cast< QList<QVector<QPoint> >(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QPoint> >(); break;
            }
            break;
        case 19:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QPoint> >(); break;
            }
            break;
        case 32:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QVector<QPoint> > >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Dialog::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Dialog::Broadcast_LogOut)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Dialog::*_t)(QString , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Dialog::Request_Connect)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Dialog::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Dialog::Request_Ready)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (Dialog::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Dialog::Request_Peace)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (Dialog::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Dialog::Request_Surrender)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (Dialog::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Dialog::Reply_Peace)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (Dialog::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Dialog::Reply_Surrender)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (Dialog::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Dialog::Broadcast_Auto_Peace)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (Dialog::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Dialog::Request_Chat)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (Dialog::*_t)(QVector<QPoint> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Dialog::Broadcast_Update_Move)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (Dialog::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Dialog::Broadcast_Fail)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (Dialog::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Dialog::Broadcast_End)) {
                *result = 11;
                return;
            }
        }
        {
            typedef void (Dialog::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Dialog::Broadcast_GameInit)) {
                *result = 12;
                return;
            }
        }
    }
}

const QMetaObject Dialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Dialog.data,
      qt_meta_data_Dialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Dialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Dialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Dialog.stringdata0))
        return static_cast<void*>(const_cast< Dialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int Dialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 33)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 33;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 33)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 33;
    }
    return _id;
}

// SIGNAL 0
void Dialog::Broadcast_LogOut()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void Dialog::Request_Connect(QString _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Dialog::Request_Ready()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void Dialog::Request_Peace()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void Dialog::Request_Surrender()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void Dialog::Reply_Peace(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Dialog::Reply_Surrender(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Dialog::Broadcast_Auto_Peace()
{
    QMetaObject::activate(this, &staticMetaObject, 7, Q_NULLPTR);
}

// SIGNAL 8
void Dialog::Request_Chat(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void Dialog::Broadcast_Update_Move(QVector<QPoint> _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void Dialog::Broadcast_Fail()
{
    QMetaObject::activate(this, &staticMetaObject, 10, Q_NULLPTR);
}

// SIGNAL 11
void Dialog::Broadcast_End()
{
    QMetaObject::activate(this, &staticMetaObject, 11, Q_NULLPTR);
}

// SIGNAL 12
void Dialog::Broadcast_GameInit()
{
    QMetaObject::activate(this, &staticMetaObject, 12, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
