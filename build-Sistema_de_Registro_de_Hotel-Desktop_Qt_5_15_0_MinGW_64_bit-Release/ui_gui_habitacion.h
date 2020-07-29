/********************************************************************************
** Form generated from reading UI file 'gui_habitacion.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUI_HABITACION_H
#define UI_GUI_HABITACION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_gui_habitacion
{
public:
    QGroupBox *groupBox;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLabel *label_2;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_2;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_5;
    QPushButton *pushButton;
    QLabel *label_6;
    QLabel *label_4;
    QComboBox *comboBox;
    QComboBox *comboBox_2;

    void setupUi(QDialog *gui_habitacion)
    {
        if (gui_habitacion->objectName().isEmpty())
            gui_habitacion->setObjectName(QString::fromUtf8("gui_habitacion"));
        gui_habitacion->resize(400, 333);
        groupBox = new QGroupBox(gui_habitacion);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(30, 20, 351, 301));
        pushButton_3 = new QPushButton(groupBox);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(180, 250, 75, 23));
        pushButton_4 = new QPushButton(groupBox);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(270, 250, 75, 23));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(116, 10, 131, 20));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(154, 220, 121, 23));
        lineEdit_3 = new QLineEdit(groupBox);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(120, 140, 113, 20));
        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(120, 40, 113, 20));
        lineEdit_2->setReadOnly(true);
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 40, 71, 20));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 140, 71, 20));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(114, 190, 71, 20));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(44, 220, 101, 23));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(20, 70, 101, 20));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 110, 101, 20));
        comboBox = new QComboBox(groupBox);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(120, 70, 111, 22));
        comboBox_2 = new QComboBox(groupBox);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setGeometry(QRect(120, 110, 111, 22));

        retranslateUi(gui_habitacion);

        QMetaObject::connectSlotsByName(gui_habitacion);
    } // setupUi

    void retranslateUi(QDialog *gui_habitacion)
    {
        gui_habitacion->setWindowTitle(QCoreApplication::translate("gui_habitacion", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("gui_habitacion", "habitacion", nullptr));
        pushButton_3->setText(QCoreApplication::translate("gui_habitacion", "Registrar", nullptr));
        pushButton_4->setText(QCoreApplication::translate("gui_habitacion", "Cancelar", nullptr));
        label_2->setText(QCoreApplication::translate("gui_habitacion", "Habitaci\303\263n", nullptr));
        pushButton_2->setText(QCoreApplication::translate("gui_habitacion", "Estado de la Habitacion", nullptr));
        label->setText(QCoreApplication::translate("gui_habitacion", "ID- Habitaci\303\263n", nullptr));
        label_3->setText(QCoreApplication::translate("gui_habitacion", "N\302\260 Habitaci\303\263n", nullptr));
        label_5->setText(QCoreApplication::translate("gui_habitacion", "Informaci\303\263n", nullptr));
        pushButton->setText(QCoreApplication::translate("gui_habitacion", "Tipo Habitaci\303\263n", nullptr));
        label_6->setText(QCoreApplication::translate("gui_habitacion", "Tipo de habitacion", nullptr));
        label_4->setText(QCoreApplication::translate("gui_habitacion", "Estado habitacion", nullptr));
    } // retranslateUi

};

namespace Ui {
    class gui_habitacion: public Ui_gui_habitacion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUI_HABITACION_H
