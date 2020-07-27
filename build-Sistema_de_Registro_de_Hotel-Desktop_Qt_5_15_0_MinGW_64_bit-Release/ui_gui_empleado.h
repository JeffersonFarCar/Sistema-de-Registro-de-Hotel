/********************************************************************************
** Form generated from reading UI file 'gui_empleado.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUI_EMPLEADO_H
#define UI_GUI_EMPLEADO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Gui_Empleado
{
public:
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLineEdit *lineEdit_nombreE;
    QLineEdit *lineEdit_apellidoE;
    QLineEdit *lineEdit_direccionE;
    QLineEdit *lineEdit_emailE;
    QLineEdit *lineEdit_sueldoE;
    QLineEdit *lineEdit_ocupacionE;
    QDateEdit *dateEdit;
    QPushButton *Aceptar_button;
    QPushButton *Cancel_button;
    QLineEdit *lineEdit_DNI;
    QLabel *label_9;
    QLineEdit *lineEdit_idEmpleado;

    void setupUi(QDialog *Gui_Empleado)
    {
        if (Gui_Empleado->objectName().isEmpty())
            Gui_Empleado->setObjectName(QString::fromUtf8("Gui_Empleado"));
        Gui_Empleado->resize(397, 432);
        groupBox = new QGroupBox(Gui_Empleado);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 10, 361, 401));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 30, 71, 21));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 100, 71, 21));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 130, 71, 21));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 160, 71, 21));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(30, 200, 71, 21));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(30, 230, 131, 21));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(30, 270, 71, 21));
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(30, 300, 81, 21));
        lineEdit_nombreE = new QLineEdit(groupBox);
        lineEdit_nombreE->setObjectName(QString::fromUtf8("lineEdit_nombreE"));
        lineEdit_nombreE->setGeometry(QRect(160, 100, 181, 21));
        lineEdit_apellidoE = new QLineEdit(groupBox);
        lineEdit_apellidoE->setObjectName(QString::fromUtf8("lineEdit_apellidoE"));
        lineEdit_apellidoE->setGeometry(QRect(160, 130, 181, 21));
        lineEdit_direccionE = new QLineEdit(groupBox);
        lineEdit_direccionE->setObjectName(QString::fromUtf8("lineEdit_direccionE"));
        lineEdit_direccionE->setGeometry(QRect(160, 160, 181, 21));
        lineEdit_emailE = new QLineEdit(groupBox);
        lineEdit_emailE->setObjectName(QString::fromUtf8("lineEdit_emailE"));
        lineEdit_emailE->setGeometry(QRect(160, 200, 181, 21));
        lineEdit_sueldoE = new QLineEdit(groupBox);
        lineEdit_sueldoE->setObjectName(QString::fromUtf8("lineEdit_sueldoE"));
        lineEdit_sueldoE->setGeometry(QRect(160, 230, 181, 21));
        lineEdit_ocupacionE = new QLineEdit(groupBox);
        lineEdit_ocupacionE->setObjectName(QString::fromUtf8("lineEdit_ocupacionE"));
        lineEdit_ocupacionE->setGeometry(QRect(160, 270, 181, 21));
        dateEdit = new QDateEdit(groupBox);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setGeometry(QRect(160, 310, 181, 21));
        Aceptar_button = new QPushButton(groupBox);
        Aceptar_button->setObjectName(QString::fromUtf8("Aceptar_button"));
        Aceptar_button->setGeometry(QRect(40, 340, 91, 51));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        Aceptar_button->setFont(font);
        Cancel_button = new QPushButton(groupBox);
        Cancel_button->setObjectName(QString::fromUtf8("Cancel_button"));
        Cancel_button->setGeometry(QRect(220, 340, 91, 51));
        Cancel_button->setFont(font);
        lineEdit_DNI = new QLineEdit(groupBox);
        lineEdit_DNI->setObjectName(QString::fromUtf8("lineEdit_DNI"));
        lineEdit_DNI->setGeometry(QRect(160, 60, 181, 21));
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(30, 60, 71, 21));
        lineEdit_idEmpleado = new QLineEdit(groupBox);
        lineEdit_idEmpleado->setObjectName(QString::fromUtf8("lineEdit_idEmpleado"));
        lineEdit_idEmpleado->setEnabled(false);
        lineEdit_idEmpleado->setGeometry(QRect(160, 30, 181, 21));

        retranslateUi(Gui_Empleado);

        QMetaObject::connectSlotsByName(Gui_Empleado);
    } // setupUi

    void retranslateUi(QDialog *Gui_Empleado)
    {
        Gui_Empleado->setWindowTitle(QCoreApplication::translate("Gui_Empleado", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Gui_Empleado", "Registro Empleado", nullptr));
        label->setText(QCoreApplication::translate("Gui_Empleado", "ID Empleado", nullptr));
        label_2->setText(QCoreApplication::translate("Gui_Empleado", "Nombre", nullptr));
        label_3->setText(QCoreApplication::translate("Gui_Empleado", "Apellido", nullptr));
        label_4->setText(QCoreApplication::translate("Gui_Empleado", "Direccion", nullptr));
        label_5->setText(QCoreApplication::translate("Gui_Empleado", "Email", nullptr));
        label_6->setText(QCoreApplication::translate("Gui_Empleado", "Sueldo                            S/.", nullptr));
        label_7->setText(QCoreApplication::translate("Gui_Empleado", "Ocupacion", nullptr));
        label_8->setText(QCoreApplication::translate("Gui_Empleado", "Fecha Contrato", nullptr));
        lineEdit_sueldoE->setText(QString());
        Aceptar_button->setText(QCoreApplication::translate("Gui_Empleado", "Aceptar", nullptr));
        Cancel_button->setText(QCoreApplication::translate("Gui_Empleado", "Cancelar", nullptr));
        label_9->setText(QCoreApplication::translate("Gui_Empleado", "DNI", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Gui_Empleado: public Ui_Gui_Empleado {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUI_EMPLEADO_H
