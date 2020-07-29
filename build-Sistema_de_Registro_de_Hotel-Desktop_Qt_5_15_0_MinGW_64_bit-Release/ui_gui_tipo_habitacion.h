/********************************************************************************
** Form generated from reading UI file 'gui_tipo_habitacion.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUI_TIPO_HABITACION_H
#define UI_GUI_TIPO_HABITACION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_gui_tipo_habitacion
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *IDTIPOlineEdit;
    QLineEdit *NOMBRETIPOlineEdit_4;
    QPushButton *pushButton;
    QLineEdit *DESTIPOlineEdit_3;
    QLineEdit *PRECIOTIPOlineEdit_2;
    QLabel *label_5;
    QPushButton *pushButton_2;

    void setupUi(QDialog *gui_tipo_habitacion)
    {
        if (gui_tipo_habitacion->objectName().isEmpty())
            gui_tipo_habitacion->setObjectName(QString::fromUtf8("gui_tipo_habitacion"));
        gui_tipo_habitacion->resize(400, 300);
        label = new QLabel(gui_tipo_habitacion);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(120, 29, 201, 31));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label_2 = new QLabel(gui_tipo_habitacion);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(76, 80, 121, 20));
        label_3 = new QLabel(gui_tipo_habitacion);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(80, 110, 111, 20));
        label_4 = new QLabel(gui_tipo_habitacion);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(80, 190, 111, 20));
        IDTIPOlineEdit = new QLineEdit(gui_tipo_habitacion);
        IDTIPOlineEdit->setObjectName(QString::fromUtf8("IDTIPOlineEdit"));
        IDTIPOlineEdit->setGeometry(QRect(190, 80, 113, 20));
        IDTIPOlineEdit->setReadOnly(true);
        NOMBRETIPOlineEdit_4 = new QLineEdit(gui_tipo_habitacion);
        NOMBRETIPOlineEdit_4->setObjectName(QString::fromUtf8("NOMBRETIPOlineEdit_4"));
        NOMBRETIPOlineEdit_4->setGeometry(QRect(190, 110, 113, 20));
        pushButton = new QPushButton(gui_tipo_habitacion);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(280, 240, 75, 23));
        DESTIPOlineEdit_3 = new QLineEdit(gui_tipo_habitacion);
        DESTIPOlineEdit_3->setObjectName(QString::fromUtf8("DESTIPOlineEdit_3"));
        DESTIPOlineEdit_3->setGeometry(QRect(190, 150, 113, 20));
        PRECIOTIPOlineEdit_2 = new QLineEdit(gui_tipo_habitacion);
        PRECIOTIPOlineEdit_2->setObjectName(QString::fromUtf8("PRECIOTIPOlineEdit_2"));
        PRECIOTIPOlineEdit_2->setGeometry(QRect(190, 190, 113, 20));
        label_5 = new QLabel(gui_tipo_habitacion);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(80, 150, 111, 21));
        pushButton_2 = new QPushButton(gui_tipo_habitacion);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(180, 240, 75, 23));

        retranslateUi(gui_tipo_habitacion);

        QMetaObject::connectSlotsByName(gui_tipo_habitacion);
    } // setupUi

    void retranslateUi(QDialog *gui_tipo_habitacion)
    {
        gui_tipo_habitacion->setWindowTitle(QCoreApplication::translate("gui_tipo_habitacion", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("gui_tipo_habitacion", "Tipo-Habitaci\303\263n", nullptr));
        label_2->setText(QCoreApplication::translate("gui_tipo_habitacion", "ID-TipoHabitacion      :", nullptr));
        label_3->setText(QCoreApplication::translate("gui_tipo_habitacion", "Nombre tipo             :", nullptr));
        label_4->setText(QCoreApplication::translate("gui_tipo_habitacion", "Precio                      :", nullptr));
        pushButton->setText(QCoreApplication::translate("gui_tipo_habitacion", "Cancelar", nullptr));
        label_5->setText(QCoreApplication::translate("gui_tipo_habitacion", "Descripcion              :", nullptr));
        pushButton_2->setText(QCoreApplication::translate("gui_tipo_habitacion", "Aceptar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class gui_tipo_habitacion: public Ui_gui_tipo_habitacion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUI_TIPO_HABITACION_H
