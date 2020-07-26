/********************************************************************************
** Form generated from reading UI file 'registro_habitacion.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTRO_HABITACION_H
#define UI_REGISTRO_HABITACION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_Registro_habitacion
{
public:
    QGroupBox *groupBox;
    QTableWidget *THtableWidget;
    QTableWidget *RHTableWidget;
    QLabel *label;
    QLabel *label_2;
    QPushButton *CancelarRHButton;
    QPushButton *AceptarRHButton;
    QListWidget *SHlistWidget;
    QLabel *label_3;

    void setupUi(QDialog *Registro_habitacion)
    {
        if (Registro_habitacion->objectName().isEmpty())
            Registro_habitacion->setObjectName(QString::fromUtf8("Registro_habitacion"));
        Registro_habitacion->resize(546, 385);
        groupBox = new QGroupBox(Registro_habitacion);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 521, 361));
        groupBox->setStyleSheet(QString::fromUtf8("#groupBox{\n"
"	font: 75 16pt \"Times New Roman\";\n"
"}"));
        THtableWidget = new QTableWidget(groupBox);
        THtableWidget->setObjectName(QString::fromUtf8("THtableWidget"));
        THtableWidget->setGeometry(QRect(10, 200, 191, 151));
        THtableWidget->viewport()->setProperty("cursor", QVariant(QCursor(Qt::PointingHandCursor)));
        RHTableWidget = new QTableWidget(groupBox);
        RHTableWidget->setObjectName(QString::fromUtf8("RHTableWidget"));
        RHTableWidget->setGeometry(QRect(10, 60, 501, 101));
        RHTableWidget->viewport()->setProperty("cursor", QVariant(QCursor(Qt::PointingHandCursor)));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 30, 181, 21));
        label->setStyleSheet(QString::fromUtf8("font: 75 16pt \"Times New Roman\";"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 170, 151, 21));
        label_2->setStyleSheet(QString::fromUtf8("font: 75 12pt \"Times New Roman\";"));
        CancelarRHButton = new QPushButton(groupBox);
        CancelarRHButton->setObjectName(QString::fromUtf8("CancelarRHButton"));
        CancelarRHButton->setGeometry(QRect(220, 310, 101, 31));
        CancelarRHButton->setStyleSheet(QString::fromUtf8(""));
        AceptarRHButton = new QPushButton(groupBox);
        AceptarRHButton->setObjectName(QString::fromUtf8("AceptarRHButton"));
        AceptarRHButton->setGeometry(QRect(220, 220, 101, 31));
        AceptarRHButton->setStyleSheet(QString::fromUtf8(""));
        SHlistWidget = new QListWidget(groupBox);
        SHlistWidget->setObjectName(QString::fromUtf8("SHlistWidget"));
        SHlistWidget->setGeometry(QRect(340, 200, 171, 151));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(340, 170, 171, 21));
        label_3->setStyleSheet(QString::fromUtf8("font: 75 12pt \"Times New Roman\";"));

        retranslateUi(Registro_habitacion);

        QMetaObject::connectSlotsByName(Registro_habitacion);
    } // setupUi

    void retranslateUi(QDialog *Registro_habitacion)
    {
        Registro_habitacion->setWindowTitle(QCoreApplication::translate("Registro_habitacion", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Registro_habitacion", "                                    Elija las habitaciones                           ", nullptr));
        label->setText(QCoreApplication::translate("Registro_habitacion", "Tipo de Habitaciones", nullptr));
        label_2->setText(QCoreApplication::translate("Registro_habitacion", "Habitaciones Disponibles", nullptr));
        CancelarRHButton->setText(QCoreApplication::translate("Registro_habitacion", "Cancelar", nullptr));
        AceptarRHButton->setText(QCoreApplication::translate("Registro_habitacion", "Aceptar", nullptr));
        label_3->setText(QCoreApplication::translate("Registro_habitacion", "Habitaciones Seleccionadas", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Registro_habitacion: public Ui_Registro_habitacion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRO_HABITACION_H
