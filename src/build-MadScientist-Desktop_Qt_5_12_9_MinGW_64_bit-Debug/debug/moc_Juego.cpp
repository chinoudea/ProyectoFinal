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
    QByteArrayData data[16];
    char stringdata0[261];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Juego_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Juego_t qt_meta_stringdata_Juego = {
    {
QT_MOC_LITERAL(0, 0, 5), // "Juego"
QT_MOC_LITERAL(1, 6, 16), // "updatePlayerName"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 6), // "nombre"
QT_MOC_LITERAL(4, 31, 16), // "centerCientifico"
QT_MOC_LITERAL(5, 48, 11), // "Cientifico*"
QT_MOC_LITERAL(6, 60, 3), // "ply"
QT_MOC_LITERAL(7, 64, 15), // "changeSceneRect"
QT_MOC_LITERAL(8, 80, 11), // "dimensiones"
QT_MOC_LITERAL(9, 92, 21), // "on_btnNewGame_pressed"
QT_MOC_LITERAL(10, 114, 19), // "on_btnLogin_pressed"
QT_MOC_LITERAL(11, 134, 27), // "on_btnToNamePlayers_pressed"
QT_MOC_LITERAL(12, 162, 23), // "on_btnLoginAuth_pressed"
QT_MOC_LITERAL(13, 186, 23), // "on_btnNewGame_2_pressed"
QT_MOC_LITERAL(14, 210, 24), // "on_btnNextPlayer_pressed"
QT_MOC_LITERAL(15, 235, 25) // "on_btnLoadSession_pressed"

    },
    "Juego\0updatePlayerName\0\0nombre\0"
    "centerCientifico\0Cientifico*\0ply\0"
    "changeSceneRect\0dimensiones\0"
    "on_btnNewGame_pressed\0on_btnLogin_pressed\0"
    "on_btnToNamePlayers_pressed\0"
    "on_btnLoginAuth_pressed\0on_btnNewGame_2_pressed\0"
    "on_btnNextPlayer_pressed\0"
    "on_btnLoadSession_pressed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Juego[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x0a /* Public */,
       4,    1,   67,    2, 0x0a /* Public */,
       7,    1,   70,    2, 0x0a /* Public */,
       9,    0,   73,    2, 0x08 /* Private */,
      10,    0,   74,    2, 0x08 /* Private */,
      11,    0,   75,    2, 0x08 /* Private */,
      12,    0,   76,    2, 0x08 /* Private */,
      13,    0,   77,    2, 0x08 /* Private */,
      14,    0,   78,    2, 0x08 /* Private */,
      15,    0,   79,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::QRect,    8,
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
        case 0: _t->updatePlayerName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->centerCientifico((*reinterpret_cast< Cientifico*(*)>(_a[1]))); break;
        case 2: _t->changeSceneRect((*reinterpret_cast< QRect(*)>(_a[1]))); break;
        case 3: _t->on_btnNewGame_pressed(); break;
        case 4: _t->on_btnLogin_pressed(); break;
        case 5: _t->on_btnToNamePlayers_pressed(); break;
        case 6: _t->on_btnLoginAuth_pressed(); break;
        case 7: _t->on_btnNewGame_2_pressed(); break;
        case 8: _t->on_btnNextPlayer_pressed(); break;
        case 9: _t->on_btnLoadSession_pressed(); break;
        default: ;
        }
    }
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
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
