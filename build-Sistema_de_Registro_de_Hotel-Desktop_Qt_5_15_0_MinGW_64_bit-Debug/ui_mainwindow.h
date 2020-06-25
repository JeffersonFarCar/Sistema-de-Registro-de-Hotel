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
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(484, 379);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Usuarios_button = new QPushButton(centralwidget);
        Usuarios_button->setObjectName(QString::fromUtf8("Usuarios_button"));
        Usuarios_button->setGeometry(QRect(40, 60, 141, 91));
        Habitacions_button = new QPushButton(centralwidget);
        Habitacions_button->setObjectName(QString::fromUtf8("Habitacions_button"));
        Habitacions_button->setGeometry(QRect(40, 210, 141, 91));
        Empleados_button = new QPushButton(centralwidget);
        Empleados_button->setObjectName(QString::fromUtf8("Empleados_button"));
        Empleados_button->setGeometry(QRect(290, 210, 141, 91));
        Registros_button = new QPushButton(centralwidget);
        Registros_button->setObjectName(QString::fromUtf8("Registros_button"));
        Registros_button->setGeometry(QRect(290, 60, 141, 91));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        Usuarios_button->setText(QCoreApplication::translate("MainWindow", "Usuarios", nullptr));
        Habitacions_button->setText(QCoreApplication::translate("MainWindow", "Habitaciones", nullptr));
        Empleados_button->setText(QCoreApplication::translate("MainWindow", "Empleados", nullptr));
        Registros_button->setText(QCoreApplication::translate("MainWindow", "Registros", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
