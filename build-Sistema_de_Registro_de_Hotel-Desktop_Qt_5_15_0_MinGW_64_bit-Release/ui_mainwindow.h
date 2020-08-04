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
    QPushButton *LogOutPushButton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(649, 400);
        MainWindow->setStyleSheet(QString::fromUtf8("#centralwidget{\n"
"	border-image: url(:/imagenes/imagenes/background_hotel.png);\n"
"}\n"
"QLabel{\n"
"	background-color:transparent;\n"
"	color: rgb(255, 255, 255);\n"
"	font: 75 28pt \"Times New Roman\";\n"
"}"));
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
        Habitacions_button->setGeometry(QRect(110, 220, 131, 91));
        Habitacions_button->setCursor(QCursor(Qt::PointingHandCursor));
        Habitacions_button->setStyleSheet(QString::fromUtf8("#Habitacions_button{\n"
"	background-color: transparent;\n"
"	border-image: url(:/imagenes/imagenes/habitacion.png);\n"
"}\n"
"\n"
"#Habitacions_button:pressed{\n"
"	border-image: url(:/imagenes/imagenes/habitacion_pressed.png);\n"
"}"));
        Empleados_button = new QPushButton(centralwidget);
        Empleados_button->setObjectName(QString::fromUtf8("Empleados_button"));
        Empleados_button->setGeometry(QRect(430, 210, 101, 101));
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
        Registros_button->setGeometry(QRect(440, 40, 101, 101));
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
        label->setGeometry(QRect(400, 320, 161, 41));
        label->setStyleSheet(QString::fromUtf8(""));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(410, 150, 141, 41));
        label_2->setStyleSheet(QString::fromUtf8(""));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(100, 150, 121, 41));
        label_3->setStyleSheet(QString::fromUtf8(""));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(70, 320, 191, 41));
        label_4->setStyleSheet(QString::fromUtf8(""));
        LogOutPushButton = new QPushButton(centralwidget);
        LogOutPushButton->setObjectName(QString::fromUtf8("LogOutPushButton"));
        LogOutPushButton->setGeometry(QRect(560, 10, 75, 51));
        LogOutPushButton->setCursor(QCursor(Qt::PointingHandCursor));
        LogOutPushButton->setStyleSheet(QString::fromUtf8("#LogOutPushButton{\n"
"	background-color: transparent;\n"
"	border-image: url(:/imagenes/imagenes/logout1.png);\n"
"}\n"
"\n"
"#LogOutPushButton:pressed{\n"
"	border-image: url(:/imagenes/imagenes/logout2.png);\n"
"}"));
        MainWindow->setCentralWidget(centralwidget);

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
        LogOutPushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
