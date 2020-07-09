/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *Usuarios_button;
    QPushButton *Habitacions_button;
    QPushButton *Empleados_button;
    QPushButton *Registros_button;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(650, 400);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Usuarios_button = new QPushButton(centralwidget);
        Usuarios_button->setObjectName(QString::fromUtf8("Usuarios_button"));
        Usuarios_button->setGeometry(QRect(110, 30, 121, 121));
        Usuarios_button->setCursor(QCursor(Qt::PointingHandCursor));
        Usuarios_button->setStyleSheet(QString::fromUtf8("#Usuarios_button{\n"
"	background-color: transparent;\n"
"	border-image: url(:/imagenes/imagenes/cliente_unpressed.png);\n"
"}\n"
"\n"
"#Usuarios_button:pressed{\n"
"	border-image: url(:/imagenes/imagenes/cliente_pressed.png);\n"
"}"));
        Habitacions_button = new QPushButton(centralwidget);
        Habitacions_button->setObjectName(QString::fromUtf8("Habitacions_button"));
        Habitacions_button->setGeometry(QRect(110, 230, 131, 91));
        Habitacions_button->setCursor(QCursor(Qt::PointingHandCursor));
        Habitacions_button->setStyleSheet(QString::fromUtf8("#Habitacions_button{\n"
"	background-color: transparent;\n"
"	border-image: url(:/imagenes/imagenes/habitacion_unpressed.png);\n"
"}\n"
"\n"
"#Habitacions_button:pressed{\n"
"	border-image: url(:/imagenes/imagenes/habitacion_pressed.png);\n"
"}"));
        Empleados_button = new QPushButton(centralwidget);
        Empleados_button->setObjectName(QString::fromUtf8("Empleados_button"));
        Empleados_button->setGeometry(QRect(430, 220, 101, 101));
        Empleados_button->setCursor(QCursor(Qt::PointingHandCursor));
        Empleados_button->setStyleSheet(QString::fromUtf8("#Empleados_button{\n"
"	background-color: transparent;\n"
"	border-image: url(:/imagenes/imagenes/empleado_unpressed.png);\n"
"}\n"
"\n"
"#Empleados_button:pressed{\n"
"	border-image: url(:/imagenes/imagenes/empleado_pressed.png);\n"
"}"));
        Registros_button = new QPushButton(centralwidget);
        Registros_button->setObjectName(QString::fromUtf8("Registros_button"));
        Registros_button->setGeometry(QRect(430, 50, 111, 101));
        Registros_button->setCursor(QCursor(Qt::PointingHandCursor));
        Registros_button->setStyleSheet(QString::fromUtf8("#Registros_button{\n"
"	background-color: transparent;\n"
"	border-image: url(:/imagenes/imagenes/registro_unpressed.png);\n"
"}\n"
"\n"
"#Registros_button:pressed{\n"
"	border-image: url(:/imagenes/imagenes/registro_pressed.png);\n"
"}"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(420, 320, 141, 41));
        label->setStyleSheet(QString::fromUtf8("font: 75 24pt \"Times New Roman\";"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(420, 140, 121, 41));
        label_2->setStyleSheet(QString::fromUtf8("font: 75 24pt \"Times New Roman\";"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(120, 140, 111, 41));
        label_3->setStyleSheet(QString::fromUtf8("font: 75 24pt \"Times New Roman\";"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(90, 320, 171, 41));
        label_4->setStyleSheet(QString::fromUtf8("font: 75 24pt \"Times New Roman\";"));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Bienvenido", nullptr));
        Usuarios_button->setText(QString());
        Habitacions_button->setText(QString());
        Empleados_button->setText(QString());
        Registros_button->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "Empleados", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Registros", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Clientes", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Habitaciones", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
