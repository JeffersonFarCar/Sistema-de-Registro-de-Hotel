/****************************************************************************
** Meta object code from reading C++ file 'gui_index_registro.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Sistema_de_Registro_de_Hotel/gui_index_registro.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gui_index_registro.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Gui_Index_Registro_t {
    QByteArrayData data[9];
    char stringdata0[197];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Gui_Index_Registro_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Gui_Index_Registro_t qt_meta_stringdata_Gui_Index_Registro = {
    {
QT_MOC_LITERAL(0, 0, 18), // "Gui_Index_Registro"
QT_MOC_LITERAL(1, 19, 30), // "on_New_Registro_Button_clicked"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 32), // "on_edit_registros_button_clicked"
QT_MOC_LITERAL(4, 84, 34), // "on_delete_registros_button_cl..."
QT_MOC_LITERAL(5, 119, 20), // "on_Regresar__clicked"
QT_MOC_LITERAL(6, 140, 33), // "on_tableListRegistros_itemCli..."
QT_MOC_LITERAL(7, 174, 17), // "QTableWidgetItem*"
QT_MOC_LITERAL(8, 192, 4) // "item"

    },
    "Gui_Index_Registro\0on_New_Registro_Button_clicked\0"
    "\0on_edit_registros_button_clicked\0"
    "on_delete_registros_button_clicked\0"
    "on_Regresar__clicked\0"
    "on_tableListRegistros_itemClicked\0"
    "QTableWidgetItem*\0item"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Gui_Index_Registro[] = {

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
       4,    0,   41,    2, 0x08 /* Private */,
       5,    0,   42,    2, 0x08 /* Private */,
       6,    1,   43,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,

       0        // eod
};

void Gui_Index_Registro::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Gui_Index_Registro *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_New_Registro_Button_clicked(); break;
        case 1: _t->on_edit_registros_button_clicked(); break;
        case 2: _t->on_delete_registros_button_clicked(); break;
        case 3: _t->on_Regresar__clicked(); break;
        case 4: _t->on_tableListRegistros_itemClicked((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Gui_Index_Registro::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_Gui_Index_Registro.data,
    qt_meta_data_Gui_Index_Registro,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Gui_Index_Registro::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui_Index_Registro::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Gui_Index_Registro.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Gui_Index_Registro::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
