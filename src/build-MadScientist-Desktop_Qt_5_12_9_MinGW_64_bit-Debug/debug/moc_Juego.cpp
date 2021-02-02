/****************************************************************************
** Meta object code from reading C++ file 'Juego.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../MadScientist/Juego.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Juego.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Juego_t {
    QByteArrayData data[9];
    char stringdata0[155];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Juego_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Juego_t qt_meta_stringdata_Juego = {
    {
QT_MOC_LITERAL(0, 0, 5), // "Juego"
QT_MOC_LITERAL(1, 6, 21), // "on_btnNewGame_pressed"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 19), // "on_btnLogin_pressed"
QT_MOC_LITERAL(4, 49, 27), // "on_btnToNamePlayers_pressed"
QT_MOC_LITERAL(5, 77, 23), // "on_btnLoginAuth_pressed"
QT_MOC_LITERAL(6, 101, 4), // "play"
QT_MOC_LITERAL(7, 106, 23), // "on_btnNewGame_2_pressed"
QT_MOC_LITERAL(8, 130, 24) // "on_btnNextPlayer_pressed"

    },
    "Juego\0on_btnNewGame_pressed\0\0"
    "on_btnLogin_pressed\0on_btnToNamePlayers_pressed\0"
    "on_btnLoginAuth_pressed\0play\0"
    "on_btnNewGame_2_pressed\0"
    "on_btnNextPlayer_pressed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Juego[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    0,   54,    2, 0x08 /* Private */,
       8,    0,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Juego::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Juego *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_btnNewGame_pressed(); break;
        case 1: _t->on_btnLogin_pressed(); break;
        case 2: _t->on_btnToNamePlayers_pressed(); break;
        case 3: _t->on_btnLoginAuth_pressed(); break;
        case 4: _t->play(); break;
        case 5: _t->on_btnNewGame_2_pressed(); break;
        case 6: _t->on_btnNextPlayer_pressed(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Juego::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_Juego.data,
    qt_meta_data_Juego,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Juego::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Juego::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Juego.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Juego::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
