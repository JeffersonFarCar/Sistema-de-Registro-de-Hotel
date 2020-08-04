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
    QLineEdit *IDESTADOlineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_3;
    QLineEdit *desnuevolineEdit;

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
        label->setGeometry(QRect(16, 60, 91, 20));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 100, 101, 20));
        IDESTADOlineEdit = new QLineEdit(groupBox);
        IDESTADOlineEdit->setObjectName(QString::fromUtf8("IDESTADOlineEdit"));
        IDESTADOlineEdit->setGeometry(QRect(120, 60, 113, 20));
        IDESTADOlineEdit->setReadOnly(true);
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(230, 170, 75, 23));
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(140, 170, 75, 23));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(90, 10, 191, 20));
        QFont font;
        font.setPointSize(16);
        label_3->setFont(font);
        desnuevolineEdit = new QLineEdit(groupBox);
        desnuevolineEdit->setObjectName(QString::fromUtf8("desnuevolineEdit"));
        desnuevolineEdit->setGeometry(QRect(120, 100, 113, 20));

        retranslateUi(gui_estado_habitacion);

        QMetaObject::connectSlotsByName(gui_estado_habitacion);
    } // setupUi

    void retranslateUi(QDialog *gui_estado_habitacion)
    {
        gui_estado_habitacion->setWindowTitle(QCoreApplication::translate("gui_estado_habitacion", "Dialog", nullptr));
        groupBox->setTitle(QString());
        label->setText(QCoreApplication::translate("gui_estado_habitacion", "ID-Estado             :", nullptr));
        label_2->setText(QCoreApplication::translate("gui_estado_habitacion", "Descripci\303\263n         :", nullptr));
        pushButton->setText(QCoreApplication::translate("gui_estado_habitacion", "Cancelar", nullptr));
        pushButton_2->setText(QCoreApplication::translate("gui_estado_habitacion", "Aceptar", nullptr));
        label_3->setText(QCoreApplication::translate("gui_estado_habitacion", "Estado-Habitacion", nullptr));
    } // retranslateUi

};

namespace Ui {
    class gui_estado_habitacion: public Ui_gui_estado_habitacion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUI_ESTADO_HABITACION_H
