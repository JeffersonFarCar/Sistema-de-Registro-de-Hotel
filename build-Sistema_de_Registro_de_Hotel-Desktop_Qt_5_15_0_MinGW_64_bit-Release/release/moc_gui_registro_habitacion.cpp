/****************************************************************************
** Meta object code from reading C++ file 'gui_registro_habitacion.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Sistema_de_Registro_de_Hotel/gui_registro_habitacion.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gui_registro_habitacion.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Registro_habitacion_t {
    QByteArrayData data[10];
    char stringdata0[234];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Registro_habitacion_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Registro_habitacion_t qt_meta_stringdata_Registro_habitacion = {
    {
QT_MOC_LITERAL(0, 0, 19), // "Registro_habitacion"
QT_MOC_LITERAL(1, 20, 26), // "on_AceptarRHButton_clicked"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 27), // "on_CancelarRHButton_clicked"
QT_MOC_LITERAL(4, 76, 32), // "on_TiposHTableWidget_itemClicked"
QT_MOC_LITERAL(5, 109, 17), // "QTableWidgetItem*"
QT_MOC_LITERAL(6, 127, 4), // "item"
QT_MOC_LITERAL(7, 132, 45), // "on_SeleaccionadaslistWidget_i..."
QT_MOC_LITERAL(8, 178, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(9, 195, 38) // "on_HabitacionesTableWidget_it..."

    },
    "Registro_habitacion\0on_AceptarRHButton_clicked\0"
    "\0on_CancelarRHButton_clicked\0"
    "on_TiposHTableWidget_itemClicked\0"
    "QTableWidgetItem*\0item\0"
    "on_SeleaccionadaslistWidget_itemDoubleClicked\0"
    "QListWidgetItem*\0"
    "on_HabitacionesTableWidget_itemClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Registro_habitacion[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08 /* Private */,
       3,    0,   40,    2, 0x08 /* Private */,
       4,    1,   41,    2, 0x08 /* Private */,
       7,    1,   44,    2, 0x08 /* Private */,
       9,    1,   47,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 8,    6,
    QMetaType::Void, 0x80000000 | 5,    6,

       0        // eod
};

void Registro_habitacion::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Registro_habitacion *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_AceptarRHButton_clicked(); break;
        case 1: _t->on_CancelarRHButton_clicked(); break;
        case 2: _t->on_TiposHTableWidget_itemClicked((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        case 3: _t->on_SeleaccionadaslistWidget_itemDoubleClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 4: _t->on_HabitacionesTableWidget_itemClicked((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Registro_habitacion::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_Registro_habitacion.data,
    qt_meta_data_Registro_habitacion,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Registro_habitacion::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Registro_habitacion::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Registro_habitacion.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Registro_habitacion::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
