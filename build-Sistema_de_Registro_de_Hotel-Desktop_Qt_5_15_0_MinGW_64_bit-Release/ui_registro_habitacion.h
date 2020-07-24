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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_Registro_habitacion
{
public:
    QTableWidget *RHTableWidget;
    QPushButton *AceptarRHButton;
    QPushButton *CancelarRHButton;

    void setupUi(QDialog *Registro_habitacion)
    {
        if (Registro_habitacion->objectName().isEmpty())
            Registro_habitacion->setObjectName(QString::fromUtf8("Registro_habitacion"));
        Registro_habitacion->resize(400, 300);
        RHTableWidget = new QTableWidget(Registro_habitacion);
        RHTableWidget->setObjectName(QString::fromUtf8("RHTableWidget"));
        RHTableWidget->setGeometry(QRect(20, 30, 261, 241));
        AceptarRHButton = new QPushButton(Registro_habitacion);
        AceptarRHButton->setObjectName(QString::fromUtf8("AceptarRHButton"));
        AceptarRHButton->setGeometry(QRect(300, 80, 75, 23));
        CancelarRHButton = new QPushButton(Registro_habitacion);
        CancelarRHButton->setObjectName(QString::fromUtf8("CancelarRHButton"));
        CancelarRHButton->setGeometry(QRect(300, 150, 75, 23));

        retranslateUi(Registro_habitacion);

        QMetaObject::connectSlotsByName(Registro_habitacion);
    } // setupUi

    void retranslateUi(QDialog *Registro_habitacion)
    {
        Registro_habitacion->setWindowTitle(QCoreApplication::translate("Registro_habitacion", "Dialog", nullptr));
        AceptarRHButton->setText(QCoreApplication::translate("Registro_habitacion", "Aceptar", nullptr));
        CancelarRHButton->setText(QCoreApplication::translate("Registro_habitacion", "Cancelar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Registro_habitacion: public Ui_Registro_habitacion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRO_HABITACION_H
