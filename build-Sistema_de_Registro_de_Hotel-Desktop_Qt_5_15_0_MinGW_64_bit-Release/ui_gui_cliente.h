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
    QLineEdit *lineEdit_1;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QPushButton *Aceptar_button;
    QPushButton *Cancel_button;
    QLineEdit *lineEdit_2;
    QLabel *label_1;

    void setupUi(QDialog *Gui_Cliente)
    {
        if (Gui_Cliente->objectName().isEmpty())
            Gui_Cliente->setObjectName(QString::fromUtf8("Gui_Cliente"));
        Gui_Cliente->setEnabled(true);
        Gui_Cliente->resize(375, 340);
        groupBox = new QGroupBox(Gui_Cliente);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 0, 351, 331));
        QFont font;
        font.setFamily(QString::fromUtf8("Times New Roman"));
        font.setPointSize(9);
        groupBox->setFont(font);
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 30, 71, 21));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Times New Roman"));
        font1.setPointSize(12);
        label->setFont(font1);
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setEnabled(false);
        lineEdit->setGeometry(QRect(160, 30, 181, 21));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 100, 71, 21));
        label_2->setFont(font1);
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 130, 71, 21));
        label_3->setFont(font1);
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 160, 71, 21));
        label_4->setFont(font1);
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(30, 220, 71, 21));
        label_5->setFont(font1);
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(30, 190, 71, 21));
        label_6->setFont(font1);
        lineEdit_1 = new QLineEdit(groupBox);
        lineEdit_1->setObjectName(QString::fromUtf8("lineEdit_1"));
        lineEdit_1->setGeometry(QRect(160, 70, 181, 21));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Times New Roman"));
        font2.setPointSize(9);
        font2.setKerning(true);
        lineEdit_1->setFont(font2);
        lineEdit_3 = new QLineEdit(groupBox);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(160, 130, 181, 21));
        lineEdit_4 = new QLineEdit(groupBox);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(160, 160, 181, 21));
        lineEdit_5 = new QLineEdit(groupBox);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(160, 220, 181, 21));
        lineEdit_6 = new QLineEdit(groupBox);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(160, 190, 181, 21));
        Aceptar_button = new QPushButton(groupBox);
        Aceptar_button->setObjectName(QString::fromUtf8("Aceptar_button"));
        Aceptar_button->setGeometry(QRect(60, 270, 91, 41));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Times New Roman"));
        font3.setPointSize(12);
        font3.setBold(true);
        font3.setWeight(75);
        Aceptar_button->setFont(font3);
        Cancel_button = new QPushButton(groupBox);
        Cancel_button->setObjectName(QString::fromUtf8("Cancel_button"));
        Cancel_button->setGeometry(QRect(190, 270, 91, 41));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Times New Roman"));
        font4.setPointSize(12);
        font4.setBold(true);
        font4.setItalic(false);
        font4.setUnderline(false);
        font4.setWeight(75);
        font4.setStrikeOut(false);
        font4.setKerning(true);
        Cancel_button->setFont(font4);
        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(160, 100, 181, 21));
        label_1 = new QLabel(groupBox);
        label_1->setObjectName(QString::fromUtf8("label_1"));
        label_1->setGeometry(QRect(30, 80, 47, 13));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Times New Roman"));
        font5.setPointSize(11);
        label_1->setFont(font5);

        retranslateUi(Gui_Cliente);

        QMetaObject::connectSlotsByName(Gui_Cliente);
    } // setupUi

    void retranslateUi(QDialog *Gui_Cliente)
    {
        Gui_Cliente->setWindowTitle(QCoreApplication::translate("Gui_Cliente", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Gui_Cliente", "Registro Cliente", nullptr));
        label->setText(QCoreApplication::translate("Gui_Cliente", "ID Cliente:", nullptr));
        label_2->setText(QCoreApplication::translate("Gui_Cliente", "Nombres:", nullptr));
        label_3->setText(QCoreApplication::translate("Gui_Cliente", "Apellidos:", nullptr));
        label_4->setText(QCoreApplication::translate("Gui_Cliente", "Direcci\303\263n:", nullptr));
        label_5->setText(QCoreApplication::translate("Gui_Cliente", "Ciudadania:", nullptr));
        label_6->setText(QCoreApplication::translate("Gui_Cliente", "E-mail:", nullptr));
        lineEdit_1->setPlaceholderText(QString());
        lineEdit_3->setPlaceholderText(QCoreApplication::translate("Gui_Cliente", "Inicie con may\303\272sculas", nullptr));
        lineEdit_5->setPlaceholderText(QCoreApplication::translate("Gui_Cliente", "Inicie con may\303\272sculas", nullptr));
        lineEdit_6->setText(QString());
        Aceptar_button->setText(QCoreApplication::translate("Gui_Cliente", "Registrar", nullptr));
        Cancel_button->setText(QCoreApplication::translate("Gui_Cliente", "Cancelar", nullptr));
        lineEdit_2->setPlaceholderText(QCoreApplication::translate("Gui_Cliente", "Inicie con may\303\272sculas", nullptr));
        label_1->setText(QCoreApplication::translate("Gui_Cliente", "DNI", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Gui_Cliente: public Ui_Gui_Cliente {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUI_CLIENTE_H
