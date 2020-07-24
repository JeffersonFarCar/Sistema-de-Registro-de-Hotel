/****************************************************************************
** Meta object code from reading C++ file 'gui_menu_cliente.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Sistema_de_Registro_de_Hotel/gui_menu_cliente.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gui_menu_cliente.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Gui_Menu_Cliente_t {
    QByteArrayData data[11];
    char stringdata0[213];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Gui_Menu_Cliente_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Gui_Menu_Cliente_t qt_meta_stringdata_Gui_Menu_Cliente = {
    {
QT_MOC_LITERAL(0, 0, 16), // "Gui_Menu_Cliente"
QT_MOC_LITERAL(1, 17, 29), // "on_pushButtonELIMINAR_clicked"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 29), // "on_pushButtoMODIFICAR_clicked"
QT_MOC_LITERAL(4, 78, 25), // "on_Agregar_button_clicked"
QT_MOC_LITERAL(5, 104, 30), // "on_lineEdit_buscar_textChanged"
QT_MOC_LITERAL(6, 135, 4), // "arg1"
QT_MOC_LITERAL(7, 140, 24), // "on_Buscar_button_clicked"
QT_MOC_LITERAL(8, 165, 24), // "on_newTableC_itemClicked"
QT_MOC_LITERAL(9, 190, 17), // "QTableWidgetItem*"
QT_MOC_LITERAL(10, 208, 4) // "item"

    },
    "Gui_Menu_Cliente\0on_pushButtonELIMINAR_clicked\0"
    "\0on_pushButtoMODIFICAR_clicked\0"
    "on_Agregar_button_clicked\0"
    "on_lineEdit_buscar_textChanged\0arg1\0"
    "on_Buscar_button_clicked\0"
    "on_newTableC_itemClicked\0QTableWidgetItem*\0"
    "item"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Gui_Menu_Cliente[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    1,   47,    2, 0x08 /* Private */,
       7,    0,   50,    2, 0x08 /* Private */,
       8,    1,   51,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,

       0        // eod
};

void Gui_Menu_Cliente::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Gui_Menu_Cliente *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButtonELIMINAR_clicked(); break;
        case 1: _t->on_pushButtoMODIFICAR_clicked(); break;
        case 2: _t->on_Agregar_button_clicked(); break;
        case 3: _t->on_lineEdit_buscar_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->on_Buscar_button_clicked(); break;
        case 5: _t->on_newTableC_itemClicked((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Gui_Menu_Cliente::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_Gui_Menu_Cliente.data,
    qt_meta_data_Gui_Menu_Cliente,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Gui_Menu_Cliente::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui_Menu_Cliente::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Gui_Menu_Cliente.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Gui_Menu_Cliente::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
