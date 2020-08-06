/********************************************************************************
** Form generated from reading UI file 'gui_factura.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUI_FACTURA_H
#define UI_GUI_FACTURA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_gui_factura
{
public:
    QLabel *label;
    QGroupBox *groupBox;
    QLabel *label_2;
    QLabel *label_6;
    QLabel *label_5;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *factura_cliente_nombre;
    QLabel *factura_cliente_apellido;
    QLabel *factura_cliente_direccion;
    QLabel *factura_cliente_ciudadania;
    QLabel *factura_cliente_email;
    QGroupBox *groupBox_2;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_10;
    QLabel *factura_cliente_nro_registro;
    QLabel *factura_cliente_ingreso;
    QLabel *factura_cliente_salida;
    QGroupBox *groupBox_3;
    QLabel *label_11;
    QLabel *factura_habitaciones;
    QLabel *label_12;
    QLabel *factura_preciototal;
    QLabel *factura_totalDias;
    QLabel *label_13;
    QLabel *factura_habitaciones_2;
    QLabel *factura_habitaciones_3;
    QPushButton *pushButton;

    void setupUi(QDialog *gui_factura)
    {
        if (gui_factura->objectName().isEmpty())
            gui_factura->setObjectName(QString::fromUtf8("gui_factura"));
        gui_factura->resize(569, 521);
        label = new QLabel(gui_factura);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 10, 301, 16));
        label->setContextMenuPolicy(Qt::DefaultContextMenu);
        label->setStyleSheet(QString::fromUtf8("font: 14pt \"Palatino Linotype\";"));
        groupBox = new QGroupBox(gui_factura);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 50, 241, 181));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 30, 47, 13));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(20, 150, 51, 16));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 120, 51, 16));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 90, 47, 13));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 60, 47, 13));
        factura_cliente_nombre = new QLabel(groupBox);
        factura_cliente_nombre->setObjectName(QString::fromUtf8("factura_cliente_nombre"));
        factura_cliente_nombre->setGeometry(QRect(90, 30, 101, 16));
        factura_cliente_apellido = new QLabel(groupBox);
        factura_cliente_apellido->setObjectName(QString::fromUtf8("factura_cliente_apellido"));
        factura_cliente_apellido->setGeometry(QRect(90, 60, 101, 16));
        factura_cliente_direccion = new QLabel(groupBox);
        factura_cliente_direccion->setObjectName(QString::fromUtf8("factura_cliente_direccion"));
        factura_cliente_direccion->setGeometry(QRect(90, 90, 101, 16));
        factura_cliente_ciudadania = new QLabel(groupBox);
        factura_cliente_ciudadania->setObjectName(QString::fromUtf8("factura_cliente_ciudadania"));
        factura_cliente_ciudadania->setGeometry(QRect(90, 120, 101, 16));
        factura_cliente_email = new QLabel(groupBox);
        factura_cliente_email->setObjectName(QString::fromUtf8("factura_cliente_email"));
        factura_cliente_email->setGeometry(QRect(90, 150, 101, 16));
        groupBox_2 = new QGroupBox(gui_factura);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(280, 50, 221, 181));
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(10, 60, 91, 16));
        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(10, 90, 91, 16));
        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(10, 30, 71, 16));
        factura_cliente_nro_registro = new QLabel(groupBox_2);
        factura_cliente_nro_registro->setObjectName(QString::fromUtf8("factura_cliente_nro_registro"));
        factura_cliente_nro_registro->setGeometry(QRect(110, 30, 91, 16));
        factura_cliente_ingreso = new QLabel(groupBox_2);
        factura_cliente_ingreso->setObjectName(QString::fromUtf8("factura_cliente_ingreso"));
        factura_cliente_ingreso->setGeometry(QRect(110, 60, 91, 16));
        factura_cliente_salida = new QLabel(groupBox_2);
        factura_cliente_salida->setObjectName(QString::fromUtf8("factura_cliente_salida"));
        factura_cliente_salida->setGeometry(QRect(110, 90, 91, 16));
        groupBox_3 = new QGroupBox(gui_factura);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 240, 491, 241));
        label_11 = new QLabel(groupBox_3);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(20, 20, 121, 16));
        factura_habitaciones = new QLabel(groupBox_3);
        factura_habitaciones->setObjectName(QString::fromUtf8("factura_habitaciones"));
        factura_habitaciones->setGeometry(QRect(20, 60, 341, 101));
        label_12 = new QLabel(groupBox_3);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(20, 200, 71, 16));
        factura_preciototal = new QLabel(groupBox_3);
        factura_preciototal->setObjectName(QString::fromUtf8("factura_preciototal"));
        factura_preciototal->setGeometry(QRect(140, 200, 81, 16));
        factura_totalDias = new QLabel(groupBox_3);
        factura_totalDias->setObjectName(QString::fromUtf8("factura_totalDias"));
        factura_totalDias->setGeometry(QRect(140, 180, 91, 16));
        label_13 = new QLabel(groupBox_3);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(20, 180, 91, 16));
        factura_habitaciones_2 = new QLabel(groupBox_3);
        factura_habitaciones_2->setObjectName(QString::fromUtf8("factura_habitaciones_2"));
        factura_habitaciones_2->setGeometry(QRect(20, 40, 91, 16));
        factura_habitaciones_3 = new QLabel(groupBox_3);
        factura_habitaciones_3->setObjectName(QString::fromUtf8("factura_habitaciones_3"));
        factura_habitaciones_3->setGeometry(QRect(160, 40, 91, 16));
        pushButton = new QPushButton(gui_factura);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(450, 490, 75, 23));

        retranslateUi(gui_factura);

        QMetaObject::connectSlotsByName(gui_factura);
    } // setupUi

    void retranslateUi(QDialog *gui_factura)
    {
        gui_factura->setWindowTitle(QCoreApplication::translate("gui_factura", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("gui_factura", "Visualizaci\303\263n de datos de la Factura", nullptr));
        groupBox->setTitle(QCoreApplication::translate("gui_factura", "Datos de Cliente", nullptr));
        label_2->setText(QCoreApplication::translate("gui_factura", "Nombre:", nullptr));
        label_6->setText(QCoreApplication::translate("gui_factura", "Email", nullptr));
        label_5->setText(QCoreApplication::translate("gui_factura", "Ciudadania", nullptr));
        label_4->setText(QCoreApplication::translate("gui_factura", "Direcci\303\263n", nullptr));
        label_3->setText(QCoreApplication::translate("gui_factura", "Apellido", nullptr));
        factura_cliente_nombre->setText(QString());
        factura_cliente_apellido->setText(QString());
        factura_cliente_direccion->setText(QString());
        factura_cliente_ciudadania->setText(QString());
        factura_cliente_email->setText(QString());
        groupBox_2->setTitle(QCoreApplication::translate("gui_factura", "Datos del registro", nullptr));
        label_7->setText(QCoreApplication::translate("gui_factura", "Fecha de Ingreso", nullptr));
        label_8->setText(QCoreApplication::translate("gui_factura", "Fecha de Salida", nullptr));
        label_10->setText(QCoreApplication::translate("gui_factura", "N\302\260 de Registro", nullptr));
        factura_cliente_nro_registro->setText(QString());
        factura_cliente_ingreso->setText(QString());
        factura_cliente_salida->setText(QString());
        groupBox_3->setTitle(QCoreApplication::translate("gui_factura", "Datos de pago", nullptr));
        label_11->setText(QCoreApplication::translate("gui_factura", "habitaciones ocupadas: ", nullptr));
        factura_habitaciones->setText(QString());
        label_12->setText(QCoreApplication::translate("gui_factura", "Precio total", nullptr));
        factura_preciototal->setText(QString());
        factura_totalDias->setText(QString());
        label_13->setText(QCoreApplication::translate("gui_factura", "Cantidad de d\303\255as", nullptr));
        factura_habitaciones_2->setText(QCoreApplication::translate("gui_factura", "Tipo de Hatitacion", nullptr));
        factura_habitaciones_3->setText(QCoreApplication::translate("gui_factura", "Precio por dia", nullptr));
        pushButton->setText(QCoreApplication::translate("gui_factura", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class gui_factura: public Ui_gui_factura {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUI_FACTURA_H
