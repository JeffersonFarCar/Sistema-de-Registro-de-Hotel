/********************************************************************************
** Form generated from reading UI file 'gui_edit_registro.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUI_EDIT_REGISTRO_H
#define UI_GUI_EDIT_REGISTRO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_GUI_Edit_Registro
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
    QDateEdit *Edit_fechaE;
    QDateEdit *Edit_fechaS;
    QPushButton *Editar_Button;
    QPushButton *Cancelar_button;
    QLineEdit *idR_Edit_LineEdit;
    QLineEdit *idC_Edit_LineEdit;
    QLineEdit *nomE_Edit_LineEdit;
    QPushButton *habit_Edit_Button;
    QPushButton *Registrar_button_2;
    QLineEdit *nomC_Edit_LineEdit;

    void setupUi(QDialog *GUI_Edit_Registro)
    {
        if (GUI_Edit_Registro->objectName().isEmpty())
            GUI_Edit_Registro->setObjectName(QString::fromUtf8("GUI_Edit_Registro"));
        GUI_Edit_Registro->resize(433, 446);
        groupBox = new QGroupBox(GUI_Edit_Registro);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 20, 397, 381));
        groupBox->setStyleSheet(QString::fromUtf8("font: 75 10pt \"Times New Roman\";"));
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
        label_6->setGeometry(QRect(30, 240, 81, 21));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(30, 270, 71, 21));
        Edit_fechaE = new QDateEdit(groupBox);
        Edit_fechaE->setObjectName(QString::fromUtf8("Edit_fechaE"));
        Edit_fechaE->setEnabled(true);
        Edit_fechaE->setGeometry(QRect(160, 240, 161, 21));
        QFont font;
        font.setFamily(QString::fromUtf8("Times New Roman"));
        font.setPointSize(10);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(9);
        Edit_fechaE->setFont(font);
        Edit_fechaE->setReadOnly(true);
        Edit_fechaE->setCalendarPopup(true);
        Edit_fechaS = new QDateEdit(groupBox);
        Edit_fechaS->setObjectName(QString::fromUtf8("Edit_fechaS"));
        Edit_fechaS->setGeometry(QRect(160, 270, 161, 21));
        Edit_fechaS->setFont(font);
        Edit_fechaS->setCalendarPopup(true);
        Editar_Button = new QPushButton(groupBox);
        Editar_Button->setObjectName(QString::fromUtf8("Editar_Button"));
        Editar_Button->setGeometry(QRect(10, 310, 101, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Times New Roman"));
        font1.setPointSize(14);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(9);
        Editar_Button->setFont(font1);
        Editar_Button->setAutoFillBackground(false);
        Editar_Button->setStyleSheet(QString::fromUtf8("font: 75 14pt \"Times New Roman\";"));
        Cancelar_button = new QPushButton(groupBox);
        Cancelar_button->setObjectName(QString::fromUtf8("Cancelar_button"));
        Cancelar_button->setGeometry(QRect(250, 310, 101, 41));
        Cancelar_button->setFont(font1);
        Cancelar_button->setStyleSheet(QString::fromUtf8("font: 75 14pt \"Times New Roman\";"));
        idR_Edit_LineEdit = new QLineEdit(groupBox);
        idR_Edit_LineEdit->setObjectName(QString::fromUtf8("idR_Edit_LineEdit"));
        idR_Edit_LineEdit->setEnabled(true);
        idR_Edit_LineEdit->setGeometry(QRect(160, 30, 161, 21));
        idR_Edit_LineEdit->setFont(font);
        idR_Edit_LineEdit->setReadOnly(true);
        idC_Edit_LineEdit = new QLineEdit(groupBox);
        idC_Edit_LineEdit->setObjectName(QString::fromUtf8("idC_Edit_LineEdit"));
        idC_Edit_LineEdit->setEnabled(true);
        idC_Edit_LineEdit->setGeometry(QRect(160, 130, 161, 20));
        idC_Edit_LineEdit->setFont(font);
        idC_Edit_LineEdit->setReadOnly(true);
        nomE_Edit_LineEdit = new QLineEdit(groupBox);
        nomE_Edit_LineEdit->setObjectName(QString::fromUtf8("nomE_Edit_LineEdit"));
        nomE_Edit_LineEdit->setEnabled(true);
        nomE_Edit_LineEdit->setGeometry(QRect(160, 190, 161, 20));
        nomE_Edit_LineEdit->setFont(font);
        nomE_Edit_LineEdit->setReadOnly(true);
        habit_Edit_Button = new QPushButton(groupBox);
        habit_Edit_Button->setObjectName(QString::fromUtf8("habit_Edit_Button"));
        habit_Edit_Button->setGeometry(QRect(160, 100, 161, 23));
        Registrar_button_2 = new QPushButton(groupBox);
        Registrar_button_2->setObjectName(QString::fromUtf8("Registrar_button_2"));
        Registrar_button_2->setGeometry(QRect(130, 310, 101, 41));
        Registrar_button_2->setFont(font1);
        Registrar_button_2->setAutoFillBackground(false);
        Registrar_button_2->setStyleSheet(QString::fromUtf8("font: 75 14pt \"Times New Roman\";"));
        nomC_Edit_LineEdit = new QLineEdit(groupBox);
        nomC_Edit_LineEdit->setObjectName(QString::fromUtf8("nomC_Edit_LineEdit"));
        nomC_Edit_LineEdit->setEnabled(true);
        nomC_Edit_LineEdit->setGeometry(QRect(160, 160, 161, 20));
        nomC_Edit_LineEdit->setFont(font);
        nomC_Edit_LineEdit->setReadOnly(true);

        retranslateUi(GUI_Edit_Registro);

        QMetaObject::connectSlotsByName(GUI_Edit_Registro);
    } // setupUi

    void retranslateUi(QDialog *GUI_Edit_Registro)
    {
        GUI_Edit_Registro->setWindowTitle(QCoreApplication::translate("GUI_Edit_Registro", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("GUI_Edit_Registro", "Edit Registro", nullptr));
        label->setText(QCoreApplication::translate("GUI_Edit_Registro", "ID-Registro", nullptr));
        label_2->setText(QCoreApplication::translate("GUI_Edit_Registro", "Habitaci\303\263n", nullptr));
        label_3->setText(QCoreApplication::translate("GUI_Edit_Registro", "ID-Cliente", nullptr));
        label_4->setText(QCoreApplication::translate("GUI_Edit_Registro", "Cliente", nullptr));
        label_5->setText(QCoreApplication::translate("GUI_Edit_Registro", "Empleado", nullptr));
        label_6->setText(QCoreApplication::translate("GUI_Edit_Registro", "Fecha Ingreso", nullptr));
        label_7->setText(QCoreApplication::translate("GUI_Edit_Registro", "Fecha Salida", nullptr));
        Editar_Button->setText(QCoreApplication::translate("GUI_Edit_Registro", "Guardar", nullptr));
        Cancelar_button->setText(QCoreApplication::translate("GUI_Edit_Registro", "Cancelar", nullptr));
        habit_Edit_Button->setText(QCoreApplication::translate("GUI_Edit_Registro", "Agregar Habitaciones", nullptr));
        Registrar_button_2->setText(QCoreApplication::translate("GUI_Edit_Registro", "Factura", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GUI_Edit_Registro: public Ui_GUI_Edit_Registro {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUI_EDIT_REGISTRO_H
