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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_gui_cliente
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

    void setupUi(QWidget *gui_cliente)
    {
        if (gui_cliente->objectName().isEmpty())
            gui_cliente->setObjectName(QString::fromUtf8("gui_cliente"));
        gui_cliente->resize(386, 361);
        groupBox = new QGroupBox(gui_cliente);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 0, 361, 331));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 30, 71, 21));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(160, 30, 181, 21));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 70, 71, 21));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 100, 71, 21));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 130, 71, 21));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(30, 160, 71, 21));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(30, 190, 71, 21));
        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(160, 70, 181, 21));
        lineEdit_3 = new QLineEdit(groupBox);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(160, 100, 181, 21));
        lineEdit_4 = new QLineEdit(groupBox);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(160, 130, 181, 21));
        lineEdit_5 = new QLineEdit(groupBox);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(160, 160, 181, 21));
        lineEdit_6 = new QLineEdit(groupBox);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(160, 190, 181, 21));
        Aceptar_button = new QPushButton(groupBox);
        Aceptar_button->setObjectName(QString::fromUtf8("Aceptar_button"));
        Aceptar_button->setGeometry(QRect(50, 240, 91, 51));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        Aceptar_button->setFont(font);
        Cancel_button = new QPushButton(groupBox);
        Cancel_button->setObjectName(QString::fromUtf8("Cancel_button"));
        Cancel_button->setGeometry(QRect(190, 240, 91, 51));
        Cancel_button->setFont(font);

        retranslateUi(gui_cliente);

        QMetaObject::connectSlotsByName(gui_cliente);
    } // setupUi

    void retranslateUi(QWidget *gui_cliente)
    {
        gui_cliente->setWindowTitle(QCoreApplication::translate("gui_cliente", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("gui_cliente", "Registro Cliente", nullptr));
        label->setText(QCoreApplication::translate("gui_cliente", "ID Cliente", nullptr));
        label_2->setText(QCoreApplication::translate("gui_cliente", "Nombre", nullptr));
        label_3->setText(QCoreApplication::translate("gui_cliente", "Apellido", nullptr));
        label_4->setText(QCoreApplication::translate("gui_cliente", "Direccion", nullptr));
        label_5->setText(QCoreApplication::translate("gui_cliente", "Ciudadania", nullptr));
        label_6->setText(QCoreApplication::translate("gui_cliente", "Email", nullptr));
        lineEdit_6->setText(QString());
        Aceptar_button->setText(QCoreApplication::translate("gui_cliente", "Aceptar", nullptr));
        Cancel_button->setText(QCoreApplication::translate("gui_cliente", "Cancelar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class gui_cliente: public Ui_gui_cliente {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUI_CLIENTE_H
