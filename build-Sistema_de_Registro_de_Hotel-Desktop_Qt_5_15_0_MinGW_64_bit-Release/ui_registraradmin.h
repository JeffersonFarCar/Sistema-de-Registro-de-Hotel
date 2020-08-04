/********************************************************************************
** Form generated from reading UI file 'registraradmin.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTRARADMIN_H
#define UI_REGISTRARADMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_RegistrarAdmin
{
public:
    QLabel *label_2;
    QLabel *label_3;
    QDialogButtonBox *buttonBox;
    QLineEdit *contraLineEdit;
    QLineEdit *repiteContraLineEdit;
    QLineEdit *lineEdit_DNI;
    QLabel *label_9;
    QLineEdit *lineEdit_apellidoA;
    QLineEdit *lineEdit_emailA;
    QLabel *label_4;
    QLineEdit *lineEdit_nombreA;
    QLabel *label_5;
    QLineEdit *lineEdit_direccionA;
    QLabel *label_6;
    QLabel *label_7;
    QFrame *line;

    void setupUi(QDialog *RegistrarAdmin)
    {
        if (RegistrarAdmin->objectName().isEmpty())
            RegistrarAdmin->setObjectName(QString::fromUtf8("RegistrarAdmin"));
        RegistrarAdmin->resize(336, 287);
        label_2 = new QLabel(RegistrarAdmin);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 180, 71, 16));
        QFont font;
        font.setFamily(QString::fromUtf8("Times New Roman"));
        font.setPointSize(12);
        label_2->setFont(font);
        label_3 = new QLabel(RegistrarAdmin);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 210, 121, 16));
        label_3->setFont(font);
        buttonBox = new QDialogButtonBox(RegistrarAdmin);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(130, 250, 171, 23));
        buttonBox->setFont(font);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        contraLineEdit = new QLineEdit(RegistrarAdmin);
        contraLineEdit->setObjectName(QString::fromUtf8("contraLineEdit"));
        contraLineEdit->setGeometry(QRect(160, 180, 161, 20));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Times New Roman"));
        font1.setPointSize(11);
        contraLineEdit->setFont(font1);
        repiteContraLineEdit = new QLineEdit(RegistrarAdmin);
        repiteContraLineEdit->setObjectName(QString::fromUtf8("repiteContraLineEdit"));
        repiteContraLineEdit->setGeometry(QRect(160, 210, 161, 20));
        repiteContraLineEdit->setFont(font1);
        lineEdit_DNI = new QLineEdit(RegistrarAdmin);
        lineEdit_DNI->setObjectName(QString::fromUtf8("lineEdit_DNI"));
        lineEdit_DNI->setGeometry(QRect(140, 20, 181, 21));
        lineEdit_DNI->setFont(font1);
        label_9 = new QLabel(RegistrarAdmin);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(20, 20, 71, 21));
        label_9->setFont(font);
        lineEdit_apellidoA = new QLineEdit(RegistrarAdmin);
        lineEdit_apellidoA->setObjectName(QString::fromUtf8("lineEdit_apellidoA"));
        lineEdit_apellidoA->setGeometry(QRect(140, 80, 181, 21));
        lineEdit_apellidoA->setFont(font1);
        lineEdit_emailA = new QLineEdit(RegistrarAdmin);
        lineEdit_emailA->setObjectName(QString::fromUtf8("lineEdit_emailA"));
        lineEdit_emailA->setGeometry(QRect(140, 140, 181, 21));
        lineEdit_emailA->setFont(font1);
        label_4 = new QLabel(RegistrarAdmin);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 50, 71, 21));
        label_4->setFont(font);
        lineEdit_nombreA = new QLineEdit(RegistrarAdmin);
        lineEdit_nombreA->setObjectName(QString::fromUtf8("lineEdit_nombreA"));
        lineEdit_nombreA->setGeometry(QRect(140, 50, 181, 21));
        lineEdit_nombreA->setFont(font1);
        label_5 = new QLabel(RegistrarAdmin);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 110, 71, 21));
        label_5->setFont(font);
        lineEdit_direccionA = new QLineEdit(RegistrarAdmin);
        lineEdit_direccionA->setObjectName(QString::fromUtf8("lineEdit_direccionA"));
        lineEdit_direccionA->setGeometry(QRect(140, 110, 181, 21));
        lineEdit_direccionA->setFont(font1);
        label_6 = new QLabel(RegistrarAdmin);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(20, 140, 71, 21));
        label_6->setFont(font);
        label_7 = new QLabel(RegistrarAdmin);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(20, 80, 71, 21));
        label_7->setFont(font);
        line = new QFrame(RegistrarAdmin);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(10, 160, 311, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        retranslateUi(RegistrarAdmin);

        QMetaObject::connectSlotsByName(RegistrarAdmin);
    } // setupUi

    void retranslateUi(QDialog *RegistrarAdmin)
    {
        RegistrarAdmin->setWindowTitle(QCoreApplication::translate("RegistrarAdmin", "Registro Administrador", nullptr));
        label_2->setText(QCoreApplication::translate("RegistrarAdmin", "Contrase\303\261a:", nullptr));
        label_3->setText(QCoreApplication::translate("RegistrarAdmin", "Repita contrase\303\261a:", nullptr));
        label_9->setText(QCoreApplication::translate("RegistrarAdmin", "DNI:", nullptr));
        lineEdit_apellidoA->setPlaceholderText(QCoreApplication::translate("RegistrarAdmin", "Inicie con Mayuscula", nullptr));
        label_4->setText(QCoreApplication::translate("RegistrarAdmin", "Nombre:", nullptr));
        lineEdit_nombreA->setPlaceholderText(QCoreApplication::translate("RegistrarAdmin", "Inicie con Mayuscula", nullptr));
        label_5->setText(QCoreApplication::translate("RegistrarAdmin", "Direcci\303\263n:", nullptr));
        label_6->setText(QCoreApplication::translate("RegistrarAdmin", "Email:", nullptr));
        label_7->setText(QCoreApplication::translate("RegistrarAdmin", "Apellido:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegistrarAdmin: public Ui_RegistrarAdmin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRARADMIN_H
