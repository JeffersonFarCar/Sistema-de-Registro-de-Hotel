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
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_gui_tipo_habitacion
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QTextEdit *textEdit;
    QPushButton *pushButton;

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
        label_2->setGeometry(QRect(26, 90, 91, 20));
        label_3 = new QLabel(gui_tipo_habitacion);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(60, 120, 51, 20));
        label_4 = new QLabel(gui_tipo_habitacion);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(16, 170, 111, 20));
        lineEdit = new QLineEdit(gui_tipo_habitacion);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(140, 90, 113, 20));
        lineEdit_2 = new QLineEdit(gui_tipo_habitacion);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(140, 120, 113, 20));
        textEdit = new QTextEdit(gui_tipo_habitacion);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(140, 160, 161, 81));
        pushButton = new QPushButton(gui_tipo_habitacion);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(290, 250, 75, 23));

        retranslateUi(gui_tipo_habitacion);

        QMetaObject::connectSlotsByName(gui_tipo_habitacion);
    } // setupUi

    void retranslateUi(QDialog *gui_tipo_habitacion)
    {
        gui_tipo_habitacion->setWindowTitle(QCoreApplication::translate("gui_tipo_habitacion", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("gui_tipo_habitacion", "Tipo-Habitaci\303\263n", nullptr));
        label_2->setText(QCoreApplication::translate("gui_tipo_habitacion", "ID-TipoHabitacion:", nullptr));
        label_3->setText(QCoreApplication::translate("gui_tipo_habitacion", "Precio:", nullptr));
        label_4->setText(QCoreApplication::translate("gui_tipo_habitacion", "descripci\303\263n-Habitaci\303\263n:", nullptr));
        textEdit->setHtml(QCoreApplication::translate("gui_tipo_habitacion", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Habitacion individual- una habitacion para un huesped con una cama individual, un televisor y ba\303\261o privado.</p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("gui_tipo_habitacion", "Regresar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class gui_tipo_habitacion: public Ui_gui_tipo_habitacion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUI_TIPO_HABITACION_H
