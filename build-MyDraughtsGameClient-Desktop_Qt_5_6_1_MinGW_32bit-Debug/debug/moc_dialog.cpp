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
    QByteArrayData data[57];
    char stringdata0[908];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Dialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Dialog_t qt_meta_stringdata_Dialog = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Dialog"
QT_MOC_LITERAL(1, 7, 8), // "AI_State"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 2), // "on"
QT_MOC_LITERAL(4, 20, 7), // "AI_Load"
QT_MOC_LITERAL(5, 28, 12), // "QVector<int>"
QT_MOC_LITERAL(6, 41, 4), // "Grid"
QT_MOC_LITERAL(7, 46, 8), // "AI_begin"
QT_MOC_LITERAL(8, 55, 11), // "playerFirst"
QT_MOC_LITERAL(9, 67, 14), // "Broadcast_Grid"
QT_MOC_LITERAL(10, 82, 15), // "QVector<QPoint>"
QT_MOC_LITERAL(11, 98, 16), // "Broadcast_LogOut"
QT_MOC_LITERAL(12, 115, 15), // "Request_Connect"
QT_MOC_LITERAL(13, 131, 2), // "IP"
QT_MOC_LITERAL(14, 134, 3), // "com"
QT_MOC_LITERAL(15, 138, 13), // "Request_Ready"
QT_MOC_LITERAL(16, 152, 13), // "Request_Peace"
QT_MOC_LITERAL(17, 166, 17), // "Request_Surrender"
QT_MOC_LITERAL(18, 184, 11), // "Reply_Peace"
QT_MOC_LITERAL(19, 196, 5), // "agree"
QT_MOC_LITERAL(20, 202, 15), // "Reply_Surrender"
QT_MOC_LITERAL(21, 218, 20), // "Broadcast_Auto_Peace"
QT_MOC_LITERAL(22, 239, 12), // "Request_Chat"
QT_MOC_LITERAL(23, 252, 19), // "Broadcast_Send_Move"
QT_MOC_LITERAL(24, 272, 5), // "Steps"
QT_MOC_LITERAL(25, 278, 21), // "Broadcast_Update_Move"
QT_MOC_LITERAL(26, 300, 14), // "Broadcast_Fail"
QT_MOC_LITERAL(27, 315, 13), // "Broadcast_End"
QT_MOC_LITERAL(28, 329, 18), // "Broadcast_GameInit"
QT_MOC_LITERAL(29, 348, 20), // "on_Button_AI_clicked"
QT_MOC_LITERAL(30, 369, 22), // "on_Button_Load_clicked"
QT_MOC_LITERAL(31, 392, 26), // "on_Button_AI_Start_clicked"
QT_MOC_LITERAL(32, 419, 29), // "on_Button_BackToLogIn_clicked"
QT_MOC_LITERAL(33, 449, 23), // "on_Button_LogIn_clicked"
QT_MOC_LITERAL(34, 473, 31), // "on_ThreadT_Update_Connect_State"
QT_MOC_LITERAL(35, 505, 7), // "success"
QT_MOC_LITERAL(36, 513, 23), // "on_Button_Ready_clicked"
QT_MOC_LITERAL(37, 537, 16), // "on_ThreadT_Begin"
QT_MOC_LITERAL(38, 554, 5), // "first"
QT_MOC_LITERAL(39, 560, 12), // "on_MoveSteps"
QT_MOC_LITERAL(40, 573, 23), // "on_Button_Peace_clicked"
QT_MOC_LITERAL(41, 597, 27), // "on_Button_Surrender_clicked"
QT_MOC_LITERAL(42, 625, 18), // "on_Peace_Requested"
QT_MOC_LITERAL(43, 644, 22), // "on_Surrender_Requested"
QT_MOC_LITERAL(44, 667, 14), // "on_Peace_Reply"
QT_MOC_LITERAL(45, 682, 18), // "on_Surrender_Reply"
QT_MOC_LITERAL(46, 701, 12), // "on_AutoPeace"
QT_MOC_LITERAL(47, 714, 26), // "on_Button_ChatSend_clicked"
QT_MOC_LITERAL(48, 741, 22), // "on_ThreadT_ReceiveChat"
QT_MOC_LITERAL(49, 764, 7), // "message"
QT_MOC_LITERAL(50, 772, 21), // "on_ThreadT_Enemy_Fail"
QT_MOC_LITERAL(51, 794, 21), // "on_ThreadT_Enemy_Lost"
QT_MOC_LITERAL(52, 816, 18), // "on_pushButton_Grid"
QT_MOC_LITERAL(53, 835, 1), // "n"
QT_MOC_LITERAL(54, 837, 31), // "on_ThreadC_UpdateAvailableSteps"
QT_MOC_LITERAL(55, 869, 23), // "QList<QVector<QPoint> >"
QT_MOC_LITERAL(56, 893, 14) // "AvailableSteps"

    },
    "Dialog\0AI_State\0\0on\0AI_Load\0QVector<int>\0"
    "Grid\0AI_begin\0playerFirst\0Broadcast_Grid\0"
    "QVector<QPoint>\0Broadcast_LogOut\0"
    "Request_Connect\0IP\0com\0Request_Ready\0"
    "Request_Peace\0Request_Surrender\0"
    "Reply_Peace\0agree\0Reply_Surrender\0"
    "Broadcast_Auto_Peace\0Request_Chat\0"
    "Broadcast_Send_Move\0Steps\0"
    "Broadcast_Update_Move\0Broadcast_Fail\0"
    "Broadcast_End\0Broadcast_GameInit\0"
    "on_Button_AI_clicked\0on_Button_Load_clicked\0"
    "on_Button_AI_Start_clicked\0"
    "on_Button_BackToLogIn_clicked\0"
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
      40,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      18,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  214,    2, 0x06 /* Public */,
       4,    1,  217,    2, 0x06 /* Public */,
       7,    1,  220,    2, 0x06 /* Public */,
       9,    1,  223,    2, 0x06 /* Public */,
      11,    0,  226,    2, 0x06 /* Public */,
      12,    2,  227,    2, 0x06 /* Public */,
      15,    0,  232,    2, 0x06 /* Public */,
      16,    0,  233,    2, 0x06 /* Public */,
      17,    0,  234,    2, 0x06 /* Public */,
      18,    1,  235,    2, 0x06 /* Public */,
      20,    1,  238,    2, 0x06 /* Public */,
      21,    0,  241,    2, 0x06 /* Public */,
      22,    1,  242,    2, 0x06 /* Public */,
      23,    1,  245,    2, 0x06 /* Public */,
      25,    1,  248,    2, 0x06 /* Public */,
      26,    0,  251,    2, 0x06 /* Public */,
      27,    0,  252,    2, 0x06 /* Public */,
      28,    0,  253,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      29,    0,  254,    2, 0x0a /* Public */,
      30,    0,  255,    2, 0x0a /* Public */,
      31,    0,  256,    2, 0x0a /* Public */,
      32,    0,  257,    2, 0x0a /* Public */,
      33,    0,  258,    2, 0x0a /* Public */,
      34,    1,  259,    2, 0x0a /* Public */,
      36,    0,  262,    2, 0x0a /* Public */,
      37,    1,  263,    2, 0x0a /* Public */,
      39,    1,  266,    2, 0x0a /* Public */,
      40,    0,  269,    2, 0x0a /* Public */,
      41,    0,  270,    2, 0x0a /* Public */,
      42,    0,  271,    2, 0x0a /* Public */,
      43,    0,  272,    2, 0x0a /* Public */,
      44,    1,  273,    2, 0x0a /* Public */,
      45,    1,  276,    2, 0x0a /* Public */,
      46,    0,  279,    2, 0x0a /* Public */,
      47,    0,  280,    2, 0x0a /* Public */,
      48,    1,  281,    2, 0x0a /* Public */,
      50,    0,  284,    2, 0x0a /* Public */,
      51,    0,  285,    2, 0x0a /* Public */,
      52,    1,  286,    2, 0x0a /* Public */,
      54,    1,  289,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, 0x80000000 | 10,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   13,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   19,
    QMetaType::Void, QMetaType::Bool,   19,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, 0x80000000 | 10,   24,
    QMetaType::Void, 0x80000000 | 10,   24,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   35,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   38,
    QMetaType::Void, 0x80000000 | 10,   24,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   19,
    QMetaType::Void, QMetaType::Bool,   19,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   49,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   53,
    QMetaType::Void, 0x80000000 | 55,   56,

       0        // eod
};

void Dialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Dialog *_t = static_cast<Dialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->AI_State((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->AI_Load((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 2: _t->AI_begin((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->Broadcast_Grid((*reinterpret_cast< QVector<QPoint>(*)>(_a[1]))); break;
        case 4: _t->Broadcast_LogOut(); break;
        case 5: _t->Request_Connect((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->Request_Ready(); break;
        case 7: _t->Request_Peace(); break;
        case 8: _t->Request_Surrender(); break;
        case 9: _t->Reply_Peace((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->Reply_Surrender((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->Broadcast_Auto_Peace(); break;
        case 12: _t->Request_Chat((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 13: _t->Broadcast_Send_Move((*reinterpret_cast< QVector<QPoint>(*)>(_a[1]))); break;
        case 14: _t->Broadcast_Update_Move((*reinterpret_cast< QVector<QPoint>(*)>(_a[1]))); break;
        case 15: _t->Broadcast_Fail(); break;
        case 16: _t->Broadcast_End(); break;
        case 17: _t->Broadcast_GameInit(); break;
        case 18: _t->on_Button_AI_clicked(); break;
        case 19: _t->on_Button_Load_clicked(); break;
        case 20: _t->on_Button_AI_Start_clicked(); break;
        case 21: _t->on_Button_BackToLogIn_clicked(); break;
        case 22: _t->on_Button_LogIn_clicked(); break;
        case 23: _t->on_ThreadT_Update_Connect_State((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 24: _t->on_Button_Ready_clicked(); break;
        case 25: _t->on_ThreadT_Begin((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 26: _t->on_MoveSteps((*reinterpret_cast< QVector<QPoint>(*)>(_a[1]))); break;
        case 27: _t->on_Button_Peace_clicked(); break;
        case 28: _t->on_Button_Surrender_clicked(); break;
        case 29: _t->on_Peace_Requested(); break;
        case 30: _t->on_Surrender_Requested(); break;
        case 31: _t->on_Peace_Reply((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 32: _t->on_Surrender_Reply((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 33: _t->on_AutoPeace(); break;
        case 34: _t->on_Button_ChatSend_clicked(); break;
        case 35: _t->on_ThreadT_ReceiveChat((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 36: _t->on_ThreadT_Enemy_Fail(); break;
        case 37: _t->on_ThreadT_Enemy_Lost(); break;
        case 38: _t->on_pushButton_Grid((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 39: _t->on_ThreadC_UpdateAvailableSteps((*reinterpret_cast< QList<QVector<QPoint> >(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QPoint> >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QPoint> >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QPoint> >(); break;
            }
            break;
        case 26:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QPoint> >(); break;
            }
            break;
        case 39:
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
            typedef void (Dialog::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Dialog::AI_State)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Dialog::*_t)(QVector<int> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Dialog::AI_Load)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Dialog::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Dialog::AI_begin)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (Dialog::*_t)(QVector<QPoint> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Dialog::Broadcast_Grid)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (Dialog::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Dialog::Broadcast_LogOut)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (Dialog::*_t)(QString , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Dialog::Request_Connect)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (Dialog::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Dialog::Request_Ready)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (Dialog::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Dialog::Request_Peace)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (Dialog::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Dialog::Request_Surrender)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (Dialog::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Dialog::Reply_Peace)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (Dialog::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Dialog::Reply_Surrender)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (Dialog::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Dialog::Broadcast_Auto_Peace)) {
                *result = 11;
                return;
            }
        }
        {
            typedef void (Dialog::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Dialog::Request_Chat)) {
                *result = 12;
                return;
            }
        }
        {
            typedef void (Dialog::*_t)(QVector<QPoint> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Dialog::Broadcast_Send_Move)) {
                *result = 13;
                return;
            }
        }
        {
            typedef void (Dialog::*_t)(QVector<QPoint> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Dialog::Broadcast_Update_Move)) {
                *result = 14;
                return;
            }
        }
        {
            typedef void (Dialog::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Dialog::Broadcast_Fail)) {
                *result = 15;
                return;
            }
        }
        {
            typedef void (Dialog::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Dialog::Broadcast_End)) {
                *result = 16;
                return;
            }
        }
        {
            typedef void (Dialog::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Dialog::Broadcast_GameInit)) {
                *result = 17;
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
        if (_id < 40)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 40;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 40)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 40;
    }
    return _id;
}

// SIGNAL 0
void Dialog::AI_State(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Dialog::AI_Load(QVector<int> _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Dialog::AI_begin(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Dialog::Broadcast_Grid(QVector<QPoint> _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Dialog::Broadcast_LogOut()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void Dialog::Request_Connect(QString _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Dialog::Request_Ready()
{
    QMetaObject::activate(this, &staticMetaObject, 6, Q_NULLPTR);
}

// SIGNAL 7
void Dialog::Request_Peace()
{
    QMetaObject::activate(this, &staticMetaObject, 7, Q_NULLPTR);
}

// SIGNAL 8
void Dialog::Request_Surrender()
{
    QMetaObject::activate(this, &staticMetaObject, 8, Q_NULLPTR);
}

// SIGNAL 9
void Dialog::Reply_Peace(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void Dialog::Reply_Surrender(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void Dialog::Broadcast_Auto_Peace()
{
    QMetaObject::activate(this, &staticMetaObject, 11, Q_NULLPTR);
}

// SIGNAL 12
void Dialog::Request_Chat(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void Dialog::Broadcast_Send_Move(QVector<QPoint> _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void Dialog::Broadcast_Update_Move(QVector<QPoint> _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void Dialog::Broadcast_Fail()
{
    QMetaObject::activate(this, &staticMetaObject, 15, Q_NULLPTR);
}

// SIGNAL 16
void Dialog::Broadcast_End()
{
    QMetaObject::activate(this, &staticMetaObject, 16, Q_NULLPTR);
}

// SIGNAL 17
void Dialog::Broadcast_GameInit()
{
    QMetaObject::activate(this, &staticMetaObject, 17, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
