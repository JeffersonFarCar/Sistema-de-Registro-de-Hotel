/****************************************************************************
** Meta object code from reading C++ file 'gui_index_empleado.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Sistema_de_Registro_de_Hotel/gui_index_empleado.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gui_index_empleado.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Gui_Index_Empleado_t {
    QByteArrayData data[11];
    char stringdata0[231];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Gui_Index_Empleado_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Gui_Index_Empleado_t qt_meta_stringdata_Gui_Index_Empleado = {
    {
QT_MOC_LITERAL(0, 0, 18), // "Gui_Index_Empleado"
QT_MOC_LITERAL(1, 19, 26), // "on_Cancelar_button_clicked"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 23), // "on_Nuevo_Button_clicked"
QT_MOC_LITERAL(4, 71, 33), // "on_delete_empleado_button_cli..."
QT_MOC_LITERAL(5, 105, 26), // "on_tableWidget_itemClicked"
QT_MOC_LITERAL(6, 132, 17), // "QTableWidgetItem*"
QT_MOC_LITERAL(7, 150, 4), // "item"
QT_MOC_LITERAL(8, 155, 31), // "on_edit_empleado_button_clicked"
QT_MOC_LITERAL(9, 187, 38), // "on_lineEdit_buscarEmpleado_te..."
QT_MOC_LITERAL(10, 226, 4) // "arg1"

    },
    "Gui_Index_Empleado\0on_Cancelar_button_clicked\0"
    "\0on_Nuevo_Button_clicked\0"
    "on_delete_empleado_button_clicked\0"
    "on_tableWidget_itemClicked\0QTableWidgetItem*\0"
    "item\0on_edit_empleado_button_clicked\0"
    "on_lineEdit_buscarEmpleado_textChanged\0"
    "arg1"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Gui_Index_Empleado[] = {

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
       8,    0,   50,    2, 0x08 /* Private */,
       9,    1,   51,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   10,

       0        // eod
};

void Gui_Index_Empleado::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Gui_Index_Empleado *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_Cancelar_button_clicked(); break;
        case 1: _t->on_Nuevo_Button_clicked(); break;
        case 2: _t->on_delete_empleado_button_clicked(); break;
        case 3: _t->on_tableWidget_itemClicked((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        case 4: _t->on_edit_empleado_button_clicked(); break;
        case 5: _t->on_lineEdit_buscarEmpleado_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Gui_Index_Empleado::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_Gui_Index_Empleado.data,
    qt_meta_data_Gui_Index_Empleado,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Gui_Index_Empleado::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui_Index_Empleado::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Gui_Index_Empleado.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Gui_Index_Empleado::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
