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
    QPushButton *Cancelar_button;
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
    QLabel *label_9;
    QLineEdit *lineEditDNIModi;
    QPushButton *buscarEmpleadoButton;
    QLineEdit *lineEdit_buscarEmpleado;
    QLineEdit *lineEditContraModi;
    QLabel *label_10;

    void setupUi(QDialog *Gui_Index_Empleado)
    {
        if (Gui_Index_Empleado->objectName().isEmpty())
            Gui_Index_Empleado->setObjectName(QString::fromUtf8("Gui_Index_Empleado"));
        Gui_Index_Empleado->resize(776, 374);
        Nuevo_Button = new QPushButton(Gui_Index_Empleado);
        Nuevo_Button->setObjectName(QString::fromUtf8("Nuevo_Button"));
        Nuevo_Button->setGeometry(QRect(80, 300, 101, 41));
        Nuevo_Button->setStyleSheet(QString::fromUtf8("font: 75 16pt \"Times New Roman\";"));
        label_2 = new QLabel(Gui_Index_Empleado);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(680, 70, 81, 21));
        label_2->setStyleSheet(QString::fromUtf8("font: 75 14pt \"Times New Roman\";"));
        edit_empleado_button = new QPushButton(Gui_Index_Empleado);
        edit_empleado_button->setObjectName(QString::fromUtf8("edit_empleado_button"));
        edit_empleado_button->setGeometry(QRect(700, 130, 51, 51));
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
        label_3->setGeometry(QRect(350, 20, 141, 31));
        label_3->setStyleSheet(QString::fromUtf8("font: 75 20pt \"Times New Roman\";"));
        Cancelar_button = new QPushButton(Gui_Index_Empleado);
        Cancelar_button->setObjectName(QString::fromUtf8("Cancelar_button"));
        Cancelar_button->setGeometry(QRect(280, 300, 101, 41));
        Cancelar_button->setStyleSheet(QString::fromUtf8("font: 75 16pt \"Times New Roman\";"));
        tableWidget = new QTableWidget(Gui_Index_Empleado);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(10, 90, 401, 192));
        delete_empleado_button = new QPushButton(Gui_Index_Empleado);
        delete_empleado_button->setObjectName(QString::fromUtf8("delete_empleado_button"));
        delete_empleado_button->setGeometry(QRect(700, 260, 51, 51));
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
        lineEditNombreModi->setGeometry(QRect(530, 170, 151, 20));
        QFont font;
        font.setFamily(QString::fromUtf8("Times New Roman"));
        font.setPointSize(10);
        lineEditNombreModi->setFont(font);
        lineEditApellidoModi = new QLineEdit(Gui_Index_Empleado);
        lineEditApellidoModi->setObjectName(QString::fromUtf8("lineEditApellidoModi"));
        lineEditApellidoModi->setGeometry(QRect(530, 200, 151, 20));
        lineEditApellidoModi->setFont(font);
        lineEditDireccionModi = new QLineEdit(Gui_Index_Empleado);
        lineEditDireccionModi->setObjectName(QString::fromUtf8("lineEditDireccionModi"));
        lineEditDireccionModi->setGeometry(QRect(530, 230, 151, 20));
        lineEditDireccionModi->setFont(font);
        lineEditEmailModi = new QLineEdit(Gui_Index_Empleado);
        lineEditEmailModi->setObjectName(QString::fromUtf8("lineEditEmailModi"));
        lineEditEmailModi->setGeometry(QRect(530, 260, 151, 20));
        lineEditEmailModi->setFont(font);
        lineEditOcupacionModi = new QLineEdit(Gui_Index_Empleado);
        lineEditOcupacionModi->setObjectName(QString::fromUtf8("lineEditOcupacionModi"));
        lineEditOcupacionModi->setGeometry(QRect(530, 320, 151, 20));
        lineEditOcupacionModi->setFont(font);
        lineEditSueldoModi = new QLineEdit(Gui_Index_Empleado);
        lineEditSueldoModi->setObjectName(QString::fromUtf8("lineEditSueldoModi"));
        lineEditSueldoModi->setGeometry(QRect(530, 290, 151, 20));
        lineEditSueldoModi->setFont(font);
        label = new QLabel(Gui_Index_Empleado);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(430, 170, 81, 16));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Times New Roman"));
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("font: 12pt \"Times New Roman\";"));
        label_4 = new QLabel(Gui_Index_Empleado);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(430, 200, 81, 16));
        label_4->setFont(font1);
        label_4->setStyleSheet(QString::fromUtf8("font: 12pt \"Times New Roman\";"));
        label_5 = new QLabel(Gui_Index_Empleado);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(430, 260, 81, 20));
        label_5->setFont(font1);
        label_5->setStyleSheet(QString::fromUtf8("font: 12pt \"Times New Roman\";"));
        label_6 = new QLabel(Gui_Index_Empleado);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(430, 320, 81, 16));
        label_6->setFont(font1);
        label_6->setStyleSheet(QString::fromUtf8("font: 12pt \"Times New Roman\";"));
        label_7 = new QLabel(Gui_Index_Empleado);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(430, 290, 81, 16));
        label_7->setFont(font1);
        label_7->setStyleSheet(QString::fromUtf8("font: 12pt \"Times New Roman\";"));
        label_8 = new QLabel(Gui_Index_Empleado);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(430, 230, 81, 16));
        label_8->setFont(font1);
        label_8->setStyleSheet(QString::fromUtf8("font: 12pt \"Times New Roman\";"));
        label_9 = new QLabel(Gui_Index_Empleado);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(430, 110, 81, 16));
        label_9->setFont(font1);
        label_9->setStyleSheet(QString::fromUtf8("font: 12pt \"Times New Roman\";"));
        lineEditDNIModi = new QLineEdit(Gui_Index_Empleado);
        lineEditDNIModi->setObjectName(QString::fromUtf8("lineEditDNIModi"));
        lineEditDNIModi->setGeometry(QRect(530, 110, 151, 20));
        lineEditDNIModi->setFont(font);
        buscarEmpleadoButton = new QPushButton(Gui_Index_Empleado);
        buscarEmpleadoButton->setObjectName(QString::fromUtf8("buscarEmpleadoButton"));
        buscarEmpleadoButton->setGeometry(QRect(20, 50, 41, 31));
        buscarEmpleadoButton->setStyleSheet(QString::fromUtf8("#buscarEmpleadoButton{\n"
"	background-color: transparent;\n"
"	border-image: url(:/imagenes/imagenes/buscar_pressed.png);\n"
"}\n"
""));
        lineEdit_buscarEmpleado = new QLineEdit(Gui_Index_Empleado);
        lineEdit_buscarEmpleado->setObjectName(QString::fromUtf8("lineEdit_buscarEmpleado"));
        lineEdit_buscarEmpleado->setGeometry(QRect(70, 60, 191, 21));
        lineEditContraModi = new QLineEdit(Gui_Index_Empleado);
        lineEditContraModi->setObjectName(QString::fromUtf8("lineEditContraModi"));
        lineEditContraModi->setGeometry(QRect(530, 140, 151, 20));
        lineEditContraModi->setFont(font);
        lineEditContraModi->setEchoMode(QLineEdit::Password);
        label_10 = new QLabel(Gui_Index_Empleado);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(430, 140, 81, 16));
        label_10->setFont(font1);
        label_10->setStyleSheet(QString::fromUtf8("font: 12pt \"Times New Roman\";"));

        retranslateUi(Gui_Index_Empleado);

        QMetaObject::connectSlotsByName(Gui_Index_Empleado);
    } // setupUi

    void retranslateUi(QDialog *Gui_Index_Empleado)
    {
        Gui_Index_Empleado->setWindowTitle(QCoreApplication::translate("Gui_Index_Empleado", "Lista Empleados", nullptr));
        Nuevo_Button->setText(QCoreApplication::translate("Gui_Index_Empleado", "Nuevo", nullptr));
        label_2->setText(QCoreApplication::translate("Gui_Index_Empleado", "Accciones", nullptr));
        edit_empleado_button->setText(QString());
        label_3->setText(QCoreApplication::translate("Gui_Index_Empleado", "Empleados", nullptr));
        Cancelar_button->setText(QCoreApplication::translate("Gui_Index_Empleado", "Cancelar", nullptr));
        delete_empleado_button->setText(QString());
        lineEditNombreModi->setPlaceholderText(QCoreApplication::translate("Gui_Index_Empleado", "Inicie con Mayuscula", nullptr));
        lineEditApellidoModi->setPlaceholderText(QCoreApplication::translate("Gui_Index_Empleado", "Inicie con Mayuscula", nullptr));
        lineEditOcupacionModi->setPlaceholderText(QCoreApplication::translate("Gui_Index_Empleado", "Inicie con Mayuscula", nullptr));
        lineEditSueldoModi->setPlaceholderText(QCoreApplication::translate("Gui_Index_Empleado", "##.##", nullptr));
        label->setText(QCoreApplication::translate("Gui_Index_Empleado", "Nombres:", nullptr));
        label_4->setText(QCoreApplication::translate("Gui_Index_Empleado", "Apellidos:", nullptr));
        label_5->setText(QCoreApplication::translate("Gui_Index_Empleado", "Email:", nullptr));
        label_6->setText(QCoreApplication::translate("Gui_Index_Empleado", "Ocupacion:", nullptr));
        label_7->setText(QCoreApplication::translate("Gui_Index_Empleado", "Sueldo:", nullptr));
        label_8->setText(QCoreApplication::translate("Gui_Index_Empleado", "Direccion:", nullptr));
        label_9->setText(QCoreApplication::translate("Gui_Index_Empleado", "DNI:", nullptr));
        buscarEmpleadoButton->setText(QString());
        label_10->setText(QCoreApplication::translate("Gui_Index_Empleado", "Contrase\303\261a:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Gui_Index_Empleado: public Ui_Gui_Index_Empleado {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUI_INDEX_EMPLEADO_H
