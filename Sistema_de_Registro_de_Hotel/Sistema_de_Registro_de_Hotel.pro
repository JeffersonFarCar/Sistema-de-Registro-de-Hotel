QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    administrador.cpp \
    cliente.cpp \
    cliente_crud.cpp \
    conexion.cpp \
    empleado.cpp \
    empleado_crud.cpp \
    estadohab.cpp \
    factura.cpp \
    gui_cliente.cpp \
    gui_edit_registro.cpp \
    gui_empleado.cpp \
    gui_estado_habitacion.cpp \
    gui_factura.cpp \
    gui_habitacion.cpp \
    gui_index_empleado.cpp \
    gui_index_registro.cpp \
    gui_indexhabitacion.cpp \
    gui_menu_cliente.cpp \
    gui_registro.cpp \
    gui_registro_habitacion.cpp \
    gui_tipo_habitacion.cpp \
    habitacion.cpp \
    login.cpp \
    main.cpp \
    mainwindow.cpp \
    persona.cpp \
    persona_crud.cpp \
    registraradmin.cpp \
    registro.cpp \
    registro_crud.cpp \
    registro_habitacion_crud.cpp \
    singleton.cpp \
    tipohabitacion.cpp \
    utils.cpp

HEADERS += \
    administrador.h \
    cliente.h \
    cliente_crud.h \
    conexion.h \
    empleado.h \
    empleado_crud.h \
    estadohab.h \
    factura.h \
    gui_cliente.h \
    gui_edit_registro.h \
    gui_empleado.h \
    gui_estado_habitacion.h \
    gui_factura.h \
    gui_habitacion.h \
    gui_index_empleado.h \
    gui_index_registro.h \
    gui_indexhabitacion.h \
    gui_menu_cliente.h \
    gui_registro.h \
    gui_registro_habitacion.h \
    gui_tipo_habitacion.h \
    habitacion.h \
    login.h \
    mainwindow.h \
    persona.h \
    persona_crud.h \
    registraradmin.h \
    registro.h \
    registro_crud.h \
    registro_habitacion_crud.h \
    singleton.h \
    tipohabitacion.h \
    utils.h

FORMS += \
    gui_cliente.ui \
    gui_edit_registro.ui \
    gui_empleado.ui \
    gui_estado_habitacion.ui \
    gui_factura.ui \
    gui_habitacion.ui \
    gui_index_empleado.ui \
    gui_index_registro.ui \
    gui_indexhabitacion.ui \
    gui_menu_cliente.ui \
    gui_registro.ui \
    gui_registro_habitacion.ui \
    gui_tipo_habitacion.ui \
    login.ui \
    mainwindow.ui \
    registraradmin.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resources.qrc

DISTFILES +=

