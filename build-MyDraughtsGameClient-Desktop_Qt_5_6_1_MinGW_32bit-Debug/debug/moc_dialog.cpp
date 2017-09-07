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
    QByteArrayData data[41];
    char stringdata0[662];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Dialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Dialog_t qt_meta_stringdata_Dialog = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Dialog"
QT_MOC_LITERAL(1, 7, 15), // "Request_Connect"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 2), // "IP"
QT_MOC_LITERAL(4, 27, 3), // "com"
QT_MOC_LITERAL(5, 31, 13), // "Request_Ready"
QT_MOC_LITERAL(6, 45, 13), // "Request_Peace"
QT_MOC_LITERAL(7, 59, 17), // "Request_Surrender"
QT_MOC_LITERAL(8, 77, 11), // "Reply_Peace"
QT_MOC_LITERAL(9, 89, 5), // "agree"
QT_MOC_LITERAL(10, 95, 15), // "Reply_Surrender"
QT_MOC_LITERAL(11, 111, 12), // "Request_Chat"
QT_MOC_LITERAL(12, 124, 21), // "Broadcast_Update_Move"
QT_MOC_LITERAL(13, 146, 15), // "QVector<QPoint>"
QT_MOC_LITERAL(14, 162, 5), // "Steps"
QT_MOC_LITERAL(15, 168, 14), // "Broadcast_Fail"
QT_MOC_LITERAL(16, 183, 13), // "Broadcast_End"
QT_MOC_LITERAL(17, 197, 18), // "Broadcast_GameInit"
QT_MOC_LITERAL(18, 216, 23), // "on_Button_LogIn_clicked"
QT_MOC_LITERAL(19, 240, 31), // "on_ThreadT_Update_Connect_State"
QT_MOC_LITERAL(20, 272, 7), // "success"
QT_MOC_LITERAL(21, 280, 23), // "on_Button_Ready_clicked"
QT_MOC_LITERAL(22, 304, 16), // "on_ThreadT_Begin"
QT_MOC_LITERAL(23, 321, 5), // "first"
QT_MOC_LITERAL(24, 327, 12), // "on_MoveSteps"
QT_MOC_LITERAL(25, 340, 23), // "on_Button_Peace_clicked"
QT_MOC_LITERAL(26, 364, 27), // "on_Button_Surrender_clicked"
QT_MOC_LITERAL(27, 392, 18), // "on_Peace_Requested"
QT_MOC_LITERAL(28, 411, 22), // "on_Surrender_Requested"
QT_MOC_LITERAL(29, 434, 14), // "on_Peace_Reply"
QT_MOC_LITERAL(30, 449, 18), // "on_Surrender_Reply"
QT_MOC_LITERAL(31, 468, 26), // "on_Button_ChatSend_clicked"
QT_MOC_LITERAL(32, 495, 22), // "on_ThreadT_ReceiveChat"
QT_MOC_LITERAL(33, 518, 7), // "message"
QT_MOC_LITERAL(34, 526, 21), // "on_ThreadT_Enemy_Fail"
QT_MOC_LITERAL(35, 548, 21), // "on_ThreadT_Enemy_Lost"
QT_MOC_LITERAL(36, 570, 18), // "on_pushButton_Grid"
QT_MOC_LITERAL(37, 589, 1), // "n"
QT_MOC_LITERAL(38, 591, 31), // "on_ThreadC_UpdateAvailableSteps"
QT_MOC_LITERAL(39, 623, 23), // "QList<QVector<QPoint> >"
QT_MOC_LITERAL(40, 647, 14) // "AvailableSteps"

    },
    "Dialog\0Request_Connect\0\0IP\0com\0"
    "Request_Ready\0Request_Peace\0"
    "Request_Surrender\0Reply_Peace\0agree\0"
    "Reply_Surrender\0Request_Chat\0"
    "Broadcast_Update_Move\0QVector<QPoint>\0"
    "Steps\0Broadcast_Fail\0Broadcast_End\0"
    "Broadcast_GameInit\0on_Button_LogIn_clicked\0"
    "on_ThreadT_Update_Connect_State\0success\0"
    "on_Button_Ready_clicked\0on_ThreadT_Begin\0"
    "first\0on_MoveSteps\0on_Button_Peace_clicked\0"
    "on_Button_Surrender_clicked\0"
    "on_Peace_Requested\0on_Surrender_Requested\0"
    "on_Peace_Reply\0on_Surrender_Reply\0"
    "on_Button_ChatSend_clicked\0"
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
      28,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      11,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,  154,    2, 0x06 /* Public */,
       5,    0,  159,    2, 0x06 /* Public */,
       6,    0,  160,    2, 0x06 /* Public */,
       7,    0,  161,    2, 0x06 /* Public */,
       8,    1,  162,    2, 0x06 /* Public */,
      10,    1,  165,    2, 0x06 /* Public */,
      11,    1,  168,    2, 0x06 /* Public */,
      12,    1,  171,    2, 0x06 /* Public */,
      15,    0,  174,    2, 0x06 /* Public */,
      16,    0,  175,    2, 0x06 /* Public */,
      17,    0,  176,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      18,    0,  177,    2, 0x0a /* Public */,
      19,    1,  178,    2, 0x0a /* Public */,
      21,    0,  181,    2, 0x0a /* Public */,
      22,    1,  182,    2, 0x0a /* Public */,
      24,    1,  185,    2, 0x0a /* Public */,
      25,    0,  188,    2, 0x0a /* Public */,
      26,    0,  189,    2, 0x0a /* Public */,
      27,    0,  190,    2, 0x0a /* Public */,
      28,    0,  191,    2, 0x0a /* Public */,
      29,    1,  192,    2, 0x0a /* Public */,
      30,    1,  195,    2, 0x0a /* Public */,
      31,    0,  198,    2, 0x0a /* Public */,
      32,    1,  199,    2, 0x0a /* Public */,
      34,    0,  202,    2, 0x0a /* Public */,
      35,    0,  203,    2, 0x0a /* Public */,
      36,    1,  204,    2, 0x0a /* Public */,
      38,    1,  207,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   20,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   23,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   33,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   37,
    QMetaType::Void, 0x80000000 | 39,   40,

       0        // eod
};

void Dialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Dialog *_t = static_cast<Dialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Request_Connect((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->Request_Ready(); break;
        case 2: _t->Request_Peace(); break;
        case 3: _t->Request_Surrender(); break;
        case 4: _t->Reply_Peace((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->Reply_Surrender((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->Request_Chat((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->Broadcast_Update_Move((*reinterpret_cast< QVector<QPoint>(*)>(_a[1]))); break;
        case 8: _t->Broadcast_Fail(); break;
        case 9: _t->Broadcast_End(); break;
        case 10: _t->Broadcast_GameInit(); break;
        case 11: _t->on_Button_LogIn_clicked(); break;
        case 12: _t->on_ThreadT_Update_Connect_State((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->on_Button_Ready_clicked(); break;
        case 14: _t->on_ThreadT_Begin((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->on_MoveSteps((*reinterpret_cast< QVector<QPoint>(*)>(_a[1]))); break;
        case 16: _t->on_Button_Peace_clicked(); break;
        case 17: _t->on_Button_Surrender_clicked(); break;
        case 18: _t->on_Peace_Requested(); break;
        case 19: _t->on_Surrender_Requested(); break;
        case 20: _t->on_Peace_Reply((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 21: _t->on_Surrender_Reply((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 22: _t->on_Button_ChatSend_clicked(); break;
        case 23: _t->on_ThreadT_ReceiveChat((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 24: _t->on_ThreadT_Enemy_Fail(); break;
        case 25: _t->on_ThreadT_Enemy_Lost(); break;
        case 26: _t->on_pushButton_Grid((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 27: _t->on_ThreadC_UpdateAvailableSteps((*reinterpret_cast< QList<QVector<QPoint> >(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QPoint> >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QPoint> >(); break;
            }
            break;
        case 27:
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
            typedef void (Dialog::*_t)(QString , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Dialog::Request_Connect)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Dialog::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Dialog::Request_Ready)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Dialog::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Dialog::Request_Peace)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (Dialog::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Dialog::Request_Surrender)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (Dialog::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Dialog::Reply_Peace)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (Dialog::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Dialog::Reply_Surrender)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (Dialog::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Dialog::Request_Chat)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (Dialog::*_t)(QVector<QPoint> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Dialog::Broadcast_Update_Move)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (Dialog::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Dialog::Broadcast_Fail)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (Dialog::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Dialog::Broadcast_End)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (Dialog::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Dialog::Broadcast_GameInit)) {
                *result = 10;
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
        if (_id < 28)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 28;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 28)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 28;
    }
    return _id;
}

// SIGNAL 0
void Dialog::Request_Connect(QString _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Dialog::Request_Ready()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void Dialog::Request_Peace()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void Dialog::Request_Surrender()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void Dialog::Reply_Peace(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Dialog::Reply_Surrender(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Dialog::Request_Chat(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Dialog::Broadcast_Update_Move(QVector<QPoint> _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void Dialog::Broadcast_Fail()
{
    QMetaObject::activate(this, &staticMetaObject, 8, Q_NULLPTR);
}

// SIGNAL 9
void Dialog::Broadcast_End()
{
    QMetaObject::activate(this, &staticMetaObject, 9, Q_NULLPTR);
}

// SIGNAL 10
void Dialog::Broadcast_GameInit()
{
    QMetaObject::activate(this, &staticMetaObject, 10, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
