/********************************************************************************
** Form generated from reading UI file 'gui_index_empleado.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUI_INDEX_EMPLEADO_H
#define UI_GUI_INDEX_EMPLEADO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_Gui_Index_Empleado
{
public:
    QPushButton *Nuevo_Button;
    QLabel *label_2;
    QPushButton *edit_empleado_button;
    QLabel *label_3;
    QPushButton *view_registros_button;
    QPushButton *Cancelar_button;
    QPushButton *CargarDatos_button;
    QPushButton *PrepararTabla_button;
    QTableWidget *tableWidget;
    QPushButton *delete_empleado_button;
    QLineEdit *lineEditNombreModi;
    QLineEdit *lineEditApellidoModi;
    QLineEdit *lineEditDireccionModi;
    QLineEdit *lineEditEmailModi;
    QLineEdit *lineEditOcupacionModi;
    QLineEdit *lineEditSueldoModi;
    QLabel *label;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;

    void setupUi(QDialog *Gui_Index_Empleado)
    {
        if (Gui_Index_Empleado->objectName().isEmpty())
            Gui_Index_Empleado->setObjectName(QString::fromUtf8("Gui_Index_Empleado"));
        Gui_Index_Empleado->resize(776, 383);
        Nuevo_Button = new QPushButton(Gui_Index_Empleado);
        Nuevo_Button->setObjectName(QString::fromUtf8("Nuevo_Button"));
        Nuevo_Button->setGeometry(QRect(80, 320, 101, 41));
        Nuevo_Button->setStyleSheet(QString::fromUtf8("font: 75 16pt \"Times New Roman\";"));
        label_2 = new QLabel(Gui_Index_Empleado);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(680, 50, 81, 21));
        label_2->setStyleSheet(QString::fromUtf8("font: 75 14pt \"Times New Roman\";"));
        edit_empleado_button = new QPushButton(Gui_Index_Empleado);
        edit_empleado_button->setObjectName(QString::fromUtf8("edit_empleado_button"));
        edit_empleado_button->setGeometry(QRect(700, 160, 51, 51));
        edit_empleado_button->setStyleSheet(QString::fromUtf8("#edit_empleado_button{\n"
"	background-color: transparent;\n"
"	border-image: url(:/imagenes/imagenes/edit_unpressed.png);\n"
"}\n"
"\n"
"#edit_empleado_button:pressed{\n"
"	background-color: transparent;\n"
"	border-image: url(:/imagenes/imagenes/edit_pressed.png);\n"
"}"));
        label_3 = new QLabel(Gui_Index_Empleado);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(200, 10, 141, 31));
        label_3->setStyleSheet(QString::fromUtf8("font: 75 20pt \"Times New Roman\";"));
        view_registros_button = new QPushButton(Gui_Index_Empleado);
        view_registros_button->setObjectName(QString::fromUtf8("view_registros_button"));
        view_registros_button->setGeometry(QRect(700, 90, 51, 51));
        view_registros_button->setStyleSheet(QString::fromUtf8("#view_registros_button{\n"
"	background-color: transparent;\n"
"	border-image: url(:/imagenes/imagenes/view_unpressed.png);\n"
"}\n"
"\n"
"#view_registros_button:pressed{\n"
"	background-color: transparent;\n"
"	border-image: url(:/imagenes/imagenes/view_pressed.png);\n"
"}"));
        Cancelar_button = new QPushButton(Gui_Index_Empleado);
        Cancelar_button->setObjectName(QString::fromUtf8("Cancelar_button"));
        Cancelar_button->setGeometry(QRect(260, 320, 101, 41));
        Cancelar_button->setStyleSheet(QString::fromUtf8("font: 75 16pt \"Times New Roman\";"));
        CargarDatos_button = new QPushButton(Gui_Index_Empleado);
        CargarDatos_button->setObjectName(QString::fromUtf8("CargarDatos_button"));
        CargarDatos_button->setGeometry(QRect(150, 60, 111, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Times New Roman"));
        font.setPointSize(13);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(9);
        CargarDatos_button->setFont(font);
        CargarDatos_button->setStyleSheet(QString::fromUtf8("font: 75 13pt \"Times New Roman\";"));
        PrepararTabla_button = new QPushButton(Gui_Index_Empleado);
        PrepararTabla_button->setObjectName(QString::fromUtf8("PrepararTabla_button"));
        PrepararTabla_button->setGeometry(QRect(10, 60, 121, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Times New Roman"));
        font1.setPointSize(13);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(9);
        font1.setKerning(false);
        PrepararTabla_button->setFont(font1);
        PrepararTabla_button->setStyleSheet(QString::fromUtf8("font: 75 13pt \"Times New Roman\";"));
        tableWidget = new QTableWidget(Gui_Index_Empleado);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(10, 110, 401, 192));
        delete_empleado_button = new QPushButton(Gui_Index_Empleado);
        delete_empleado_button->setObjectName(QString::fromUtf8("delete_empleado_button"));
        delete_empleado_button->setGeometry(QRect(700, 240, 51, 51));
        delete_empleado_button->setStyleSheet(QString::fromUtf8("#delete_empleado_button{\n"
"	background-color: transparent;\n"
"	border-image: url(:/imagenes/imagenes/delete_unpressed.png);\n"
"}\n"
"\n"
"#delete_empleado_button:pressed{\n"
"	background-color: transparent;\n"
"	border-image: url(:/imagenes/imagenes/delete_pressed.png);\n"
"}"));
        lineEditNombreModi = new QLineEdit(Gui_Index_Empleado);
        lineEditNombreModi->setObjectName(QString::fromUtf8("lineEditNombreModi"));
        lineEditNombreModi->setGeometry(QRect(530, 100, 151, 20));
        lineEditApellidoModi = new QLineEdit(Gui_Index_Empleado);
        lineEditApellidoModi->setObjectName(QString::fromUtf8("lineEditApellidoModi"));
        lineEditApellidoModi->setGeometry(QRect(530, 130, 151, 20));
        lineEditDireccionModi = new QLineEdit(Gui_Index_Empleado);
        lineEditDireccionModi->setObjectName(QString::fromUtf8("lineEditDireccionModi"));
        lineEditDireccionModi->setGeometry(QRect(530, 160, 151, 20));
        lineEditEmailModi = new QLineEdit(Gui_Index_Empleado);
        lineEditEmailModi->setObjectName(QString::fromUtf8("lineEditEmailModi"));
        lineEditEmailModi->setGeometry(QRect(530, 190, 151, 20));
        lineEditOcupacionModi = new QLineEdit(Gui_Index_Empleado);
        lineEditOcupacionModi->setObjectName(QString::fromUtf8("lineEditOcupacionModi"));
        lineEditOcupacionModi->setGeometry(QRect(530, 220, 151, 20));
        lineEditSueldoModi = new QLineEdit(Gui_Index_Empleado);
        lineEditSueldoModi->setObjectName(QString::fromUtf8("lineEditSueldoModi"));
        lineEditSueldoModi->setGeometry(QRect(530, 250, 151, 20));
        label = new QLabel(Gui_Index_Empleado);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(430, 100, 81, 16));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Times New Roman"));
        font2.setPointSize(12);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(50);
        label->setFont(font2);
        label->setStyleSheet(QString::fromUtf8("font: 12pt \"Times New Roman\";"));
        label_4 = new QLabel(Gui_Index_Empleado);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(430, 130, 81, 16));
        label_4->setFont(font2);
        label_4->setStyleSheet(QString::fromUtf8("font: 12pt \"Times New Roman\";"));
        label_5 = new QLabel(Gui_Index_Empleado);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(430, 186, 81, 20));
        label_5->setFont(font2);
        label_5->setStyleSheet(QString::fromUtf8("font: 12pt \"Times New Roman\";"));
        label_6 = new QLabel(Gui_Index_Empleado);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(430, 220, 81, 16));
        label_6->setFont(font2);
        label_6->setStyleSheet(QString::fromUtf8("font: 12pt \"Times New Roman\";"));
        label_7 = new QLabel(Gui_Index_Empleado);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(430, 250, 81, 16));
        label_7->setFont(font2);
        label_7->setStyleSheet(QString::fromUtf8("font: 12pt \"Times New Roman\";"));
        label_8 = new QLabel(Gui_Index_Empleado);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(430, 160, 81, 16));
        label_8->setFont(font2);
        label_8->setStyleSheet(QString::fromUtf8("font: 12pt \"Times New Roman\";"));

        retranslateUi(Gui_Index_Empleado);

        QMetaObject::connectSlotsByName(Gui_Index_Empleado);
    } // setupUi

    void retranslateUi(QDialog *Gui_Index_Empleado)
    {
        Gui_Index_Empleado->setWindowTitle(QCoreApplication::translate("Gui_Index_Empleado", "Dialog", nullptr));
        Nuevo_Button->setText(QCoreApplication::translate("Gui_Index_Empleado", "Nuevo", nullptr));
        label_2->setText(QCoreApplication::translate("Gui_Index_Empleado", "Accciones", nullptr));
        edit_empleado_button->setText(QString());
        label_3->setText(QCoreApplication::translate("Gui_Index_Empleado", "Empleados", nullptr));
        view_registros_button->setText(QString());
        Cancelar_button->setText(QCoreApplication::translate("Gui_Index_Empleado", "Cancelar", nullptr));
        CargarDatos_button->setText(QCoreApplication::translate("Gui_Index_Empleado", "Cargar Datos", nullptr));
        PrepararTabla_button->setText(QCoreApplication::translate("Gui_Index_Empleado", "Preparar Tabla", nullptr));
        delete_empleado_button->setText(QString());
        label->setText(QCoreApplication::translate("Gui_Index_Empleado", "Nombres:", nullptr));
        label_4->setText(QCoreApplication::translate("Gui_Index_Empleado", "Apellidos:", nullptr));
        label_5->setText(QCoreApplication::translate("Gui_Index_Empleado", "Email:", nullptr));
        label_6->setText(QCoreApplication::translate("Gui_Index_Empleado", "Ocupacion:", nullptr));
        label_7->setText(QCoreApplication::translate("Gui_Index_Empleado", "Sueldo:", nullptr));
        label_8->setText(QCoreApplication::translate("Gui_Index_Empleado", "Direccion:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Gui_Index_Empleado: public Ui_Gui_Index_Empleado {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUI_INDEX_EMPLEADO_H
