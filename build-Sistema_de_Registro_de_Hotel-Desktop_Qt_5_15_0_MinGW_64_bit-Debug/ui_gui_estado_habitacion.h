/********************************************************************************
** Form generated from reading UI file 'gui_estado_habitacion.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUI_ESTADO_HABITACION_H
#define UI_GUI_ESTADO_HABITACION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_gui_estado_habitacion
{
public:
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;

    void setupUi(QDialog *gui_estado_habitacion)
    {
        if (gui_estado_habitacion->objectName().isEmpty())
            gui_estado_habitacion->setObjectName(QString::fromUtf8("gui_estado_habitacion"));
        gui_estado_habitacion->resize(400, 257);
        groupBox = new QGroupBox(gui_estado_habitacion);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(30, 20, 341, 221));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(16, 60, 81, 20));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 100, 71, 20));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(120, 60, 113, 20));
        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(120, 100, 113, 20));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(230, 170, 75, 23));

        retranslateUi(gui_estado_habitacion);

        QMetaObject::connectSlotsByName(gui_estado_habitacion);
    } // setupUi

    void retranslateUi(QDialog *gui_estado_habitacion)
    {
        gui_estado_habitacion->setWindowTitle(QCoreApplication::translate("gui_estado_habitacion", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("gui_estado_habitacion", "Estado-Habitacion", nullptr));
        label->setText(QCoreApplication::translate("gui_estado_habitacion", "ID-Habitaci\303\263n", nullptr));
        label_2->setText(QCoreApplication::translate("gui_estado_habitacion", "Descripci\303\263n", nullptr));
        lineEdit_2->setText(QCoreApplication::translate("gui_estado_habitacion", "Reservado", nullptr));
        pushButton->setText(QCoreApplication::translate("gui_estado_habitacion", "Regresar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class gui_estado_habitacion: public Ui_gui_estado_habitacion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUI_ESTADO_HABITACION_H
