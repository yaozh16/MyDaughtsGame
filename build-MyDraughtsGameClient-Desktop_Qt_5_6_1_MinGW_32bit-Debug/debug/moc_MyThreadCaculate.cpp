/****************************************************************************
** Meta object code from reading C++ file 'MyThreadCaculate.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../MyDraughtsGameClient/MyThreadCaculate.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MyThreadCaculate.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MyThreadCaculate_t {
    QByteArrayData data[19];
    char stringdata0[253];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MyThreadCaculate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MyThreadCaculate_t qt_meta_stringdata_MyThreadCaculate = {
    {
QT_MOC_LITERAL(0, 0, 16), // "MyThreadCaculate"
QT_MOC_LITERAL(1, 17, 38), // "Broadcast_ThreadC_UpdateAvail..."
QT_MOC_LITERAL(2, 56, 0), // ""
QT_MOC_LITERAL(3, 57, 23), // "QList<QVector<QPoint> >"
QT_MOC_LITERAL(4, 81, 14), // "AvailableSteps"
QT_MOC_LITERAL(5, 96, 17), // "Broadcast_AI_Move"
QT_MOC_LITERAL(6, 114, 15), // "QVector<QPoint>"
QT_MOC_LITERAL(7, 130, 5), // "Steps"
QT_MOC_LITERAL(8, 136, 7), // "AI_Fail"
QT_MOC_LITERAL(9, 144, 14), // "on_Update_Move"
QT_MOC_LITERAL(10, 159, 12), // "on_Game_Init"
QT_MOC_LITERAL(11, 172, 11), // "on_AI_State"
QT_MOC_LITERAL(12, 184, 2), // "on"
QT_MOC_LITERAL(13, 187, 10), // "on_AI_Load"
QT_MOC_LITERAL(14, 198, 12), // "QVector<int>"
QT_MOC_LITERAL(15, 211, 5), // "Grid_"
QT_MOC_LITERAL(16, 217, 11), // "on_AI_Begin"
QT_MOC_LITERAL(17, 229, 11), // "playerFirst"
QT_MOC_LITERAL(18, 241, 11) // "Player_Fail"

    },
    "MyThreadCaculate\0"
    "Broadcast_ThreadC_UpdateAvailabelSteps\0"
    "\0QList<QVector<QPoint> >\0AvailableSteps\0"
    "Broadcast_AI_Move\0QVector<QPoint>\0"
    "Steps\0AI_Fail\0on_Update_Move\0on_Game_Init\0"
    "on_AI_State\0on\0on_AI_Load\0QVector<int>\0"
    "Grid_\0on_AI_Begin\0playerFirst\0Player_Fail"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MyThreadCaculate[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       5,    1,   62,    2, 0x06 /* Public */,
       8,    0,   65,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,   66,    2, 0x0a /* Public */,
      10,    0,   69,    2, 0x0a /* Public */,
      11,    1,   70,    2, 0x0a /* Public */,
      13,    1,   73,    2, 0x0a /* Public */,
      16,    1,   76,    2, 0x0a /* Public */,
      18,    0,   79,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void,

       0        // eod
};

void MyThreadCaculate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MyThreadCaculate *_t = static_cast<MyThreadCaculate *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Broadcast_ThreadC_UpdateAvailabelSteps((*reinterpret_cast< QList<QVector<QPoint> >(*)>(_a[1]))); break;
        case 1: _t->Broadcast_AI_Move((*reinterpret_cast< QVector<QPoint>(*)>(_a[1]))); break;
        case 2: _t->AI_Fail(); break;
        case 3: _t->on_Update_Move((*reinterpret_cast< QVector<QPoint>(*)>(_a[1]))); break;
        case 4: _t->on_Game_Init(); break;
        case 5: _t->on_AI_State((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->on_AI_Load((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 7: _t->on_AI_Begin((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->Player_Fail(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QVector<QPoint> > >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QPoint> >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QPoint> >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MyThreadCaculate::*_t)(QList<QVector<QPoint>> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyThreadCaculate::Broadcast_ThreadC_UpdateAvailabelSteps)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (MyThreadCaculate::*_t)(QVector<QPoint> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyThreadCaculate::Broadcast_AI_Move)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (MyThreadCaculate::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyThreadCaculate::AI_Fail)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject MyThreadCaculate::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_MyThreadCaculate.data,
      qt_meta_data_MyThreadCaculate,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MyThreadCaculate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MyThreadCaculate::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MyThreadCaculate.stringdata0))
        return static_cast<void*>(const_cast< MyThreadCaculate*>(this));
    return QThread::qt_metacast(_clname);
}

int MyThreadCaculate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void MyThreadCaculate::Broadcast_ThreadC_UpdateAvailabelSteps(QList<QVector<QPoint>> _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MyThreadCaculate::Broadcast_AI_Move(QVector<QPoint> _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MyThreadCaculate::AI_Fail()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
