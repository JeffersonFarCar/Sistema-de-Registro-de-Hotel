/********************************************************************************
** Form generated from reading UI file 'gui_cliente.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUI_CLIENTE_H
#define UI_GUI_CLIENTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Gui_Cliente
{
public:
    QGroupBox *groupBox;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QPushButton *Aceptar_button;
    QPushButton *Cancel_button;
    QLineEdit *lineEdit_7;
    QLabel *label_7;

    void setupUi(QDialog *Gui_Cliente)
    {
        if (Gui_Cliente->objectName().isEmpty())
            Gui_Cliente->setObjectName(QString::fromUtf8("Gui_Cliente"));
        Gui_Cliente->resize(375, 352);
        groupBox = new QGroupBox(Gui_Cliente);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 0, 351, 341));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 30, 71, 21));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(160, 30, 181, 21));
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
        label_5->setGeometry(QRect(30, 190, 71, 21));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(30, 220, 71, 21));
        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(160, 100, 181, 21));
        lineEdit_3 = new QLineEdit(groupBox);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(160, 130, 181, 21));
        lineEdit_4 = new QLineEdit(groupBox);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(160, 160, 181, 21));
        lineEdit_5 = new QLineEdit(groupBox);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(160, 190, 181, 21));
        lineEdit_6 = new QLineEdit(groupBox);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(160, 220, 181, 21));
        Aceptar_button = new QPushButton(groupBox);
        Aceptar_button->setObjectName(QString::fromUtf8("Aceptar_button"));
        Aceptar_button->setGeometry(QRect(50, 270, 91, 51));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        Aceptar_button->setFont(font);
        Cancel_button = new QPushButton(groupBox);
        Cancel_button->setObjectName(QString::fromUtf8("Cancel_button"));
        Cancel_button->setGeometry(QRect(190, 270, 91, 51));
        Cancel_button->setFont(font);
        lineEdit_7 = new QLineEdit(groupBox);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));
        lineEdit_7->setGeometry(QRect(160, 70, 181, 20));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(30, 70, 47, 13));

        retranslateUi(Gui_Cliente);

        QMetaObject::connectSlotsByName(Gui_Cliente);
    } // setupUi

    void retranslateUi(QDialog *Gui_Cliente)
    {
        Gui_Cliente->setWindowTitle(QCoreApplication::translate("Gui_Cliente", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Gui_Cliente", "Registro Cliente", nullptr));
        label->setText(QCoreApplication::translate("Gui_Cliente", "ID Cliente", nullptr));
        label_2->setText(QCoreApplication::translate("Gui_Cliente", "Nombre", nullptr));
        label_3->setText(QCoreApplication::translate("Gui_Cliente", "Apellido", nullptr));
        label_4->setText(QCoreApplication::translate("Gui_Cliente", "Direccion", nullptr));
        label_5->setText(QCoreApplication::translate("Gui_Cliente", "Ciudadania", nullptr));
        label_6->setText(QCoreApplication::translate("Gui_Cliente", "Email", nullptr));
        lineEdit_6->setText(QString());
        Aceptar_button->setText(QCoreApplication::translate("Gui_Cliente", "Registrar", nullptr));
        Cancel_button->setText(QCoreApplication::translate("Gui_Cliente", "Cancelar", nullptr));
        label_7->setText(QCoreApplication::translate("Gui_Cliente", "DNI", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Gui_Cliente: public Ui_Gui_Cliente {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUI_CLIENTE_H
