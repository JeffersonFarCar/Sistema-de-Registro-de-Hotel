/********************************************************************************
** Form generated from reading UI file 'gui_registro.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUI_REGISTRO_H
#define UI_GUI_REGISTRO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Gui_Registro
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
    QDateEdit *dateEdit;
    QDateEdit *dateEdit_2;
    QPushButton *Registrar_button;
    QPushButton *Cancelar_button;
    QComboBox *Cliente_cmbox;
    QComboBox *Habitacion_cmbox;
    QLineEdit *LineEdit_idRegis;
    QLineEdit *LineEdite_idCliente;
    QLineEdit *LineEdit_Nper;

    void setupUi(QDialog *Gui_Registro)
    {
        if (Gui_Registro->objectName().isEmpty())
            Gui_Registro->setObjectName(QString::fromUtf8("Gui_Registro"));
        Gui_Registro->resize(397, 432);
        groupBox = new QGroupBox(Gui_Registro);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 10, 361, 391));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 30, 61, 21));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 100, 61, 21));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 130, 61, 21));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 160, 61, 21));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(30, 190, 61, 21));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(30, 240, 71, 21));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(30, 270, 71, 21));
        dateEdit = new QDateEdit(groupBox);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setGeometry(QRect(160, 240, 161, 21));
        dateEdit_2 = new QDateEdit(groupBox);
        dateEdit_2->setObjectName(QString::fromUtf8("dateEdit_2"));
        dateEdit_2->setGeometry(QRect(160, 270, 161, 21));
        Registrar_button = new QPushButton(groupBox);
        Registrar_button->setObjectName(QString::fromUtf8("Registrar_button"));
        Registrar_button->setGeometry(QRect(40, 320, 101, 41));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        Registrar_button->setFont(font);
        Registrar_button->setAutoFillBackground(false);
        Cancelar_button = new QPushButton(groupBox);
        Cancelar_button->setObjectName(QString::fromUtf8("Cancelar_button"));
        Cancelar_button->setGeometry(QRect(200, 320, 101, 41));
        Cancelar_button->setFont(font);
        Cliente_cmbox = new QComboBox(groupBox);
        Cliente_cmbox->setObjectName(QString::fromUtf8("Cliente_cmbox"));
        Cliente_cmbox->setGeometry(QRect(160, 160, 161, 21));
        Habitacion_cmbox = new QComboBox(groupBox);
        Habitacion_cmbox->setObjectName(QString::fromUtf8("Habitacion_cmbox"));
        Habitacion_cmbox->setGeometry(QRect(160, 100, 161, 21));
        LineEdit_idRegis = new QLineEdit(groupBox);
        LineEdit_idRegis->setObjectName(QString::fromUtf8("LineEdit_idRegis"));
        LineEdit_idRegis->setGeometry(QRect(160, 30, 161, 21));
        LineEdite_idCliente = new QLineEdit(groupBox);
        LineEdite_idCliente->setObjectName(QString::fromUtf8("LineEdite_idCliente"));
        LineEdite_idCliente->setGeometry(QRect(160, 130, 161, 20));
        LineEdit_Nper = new QLineEdit(groupBox);
        LineEdit_Nper->setObjectName(QString::fromUtf8("LineEdit_Nper"));
        LineEdit_Nper->setGeometry(QRect(160, 190, 161, 20));

        retranslateUi(Gui_Registro);

        QMetaObject::connectSlotsByName(Gui_Registro);
    } // setupUi

    void retranslateUi(QDialog *Gui_Registro)
    {
        Gui_Registro->setWindowTitle(QCoreApplication::translate("Gui_Registro", "Nuevo Registro", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Gui_Registro", "Registro Hospedaje Formulario", nullptr));
        label->setText(QCoreApplication::translate("Gui_Registro", "ID-Registro", nullptr));
        label_2->setText(QCoreApplication::translate("Gui_Registro", "Habitaci\303\263n", nullptr));
        label_3->setText(QCoreApplication::translate("Gui_Registro", "ID-Cliente", nullptr));
        label_4->setText(QCoreApplication::translate("Gui_Registro", "Cliente", nullptr));
        label_5->setText(QCoreApplication::translate("Gui_Registro", "N\302\260 Personas", nullptr));
        label_6->setText(QCoreApplication::translate("Gui_Registro", "Fecha Ingreso", nullptr));
        label_7->setText(QCoreApplication::translate("Gui_Registro", "Fecha Salida", nullptr));
        Registrar_button->setText(QCoreApplication::translate("Gui_Registro", "Registrar", nullptr));
        Cancelar_button->setText(QCoreApplication::translate("Gui_Registro", "Cancelar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Gui_Registro: public Ui_Gui_Registro {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUI_REGISTRO_H