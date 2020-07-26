/********************************************************************************
** Form generated from reading UI file 'gui_indexhabitacion.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUI_INDEXHABITACION_H
#define UI_GUI_INDEXHABITACION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_gui_indexHabitacion
{
public:
    QGroupBox *groupBox;
    QLabel *label_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QLabel *label;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QTableWidget *tabb;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;

    void setupUi(QDialog *gui_indexHabitacion)
    {
        if (gui_indexHabitacion->objectName().isEmpty())
            gui_indexHabitacion->setObjectName(QString::fromUtf8("gui_indexHabitacion"));
        gui_indexHabitacion->setEnabled(true);
        gui_indexHabitacion->resize(679, 316);
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        gui_indexHabitacion->setFont(font);
        groupBox = new QGroupBox(gui_indexHabitacion);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 661, 301));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setWeight(50);
        groupBox->setFont(font1);
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(430, 60, 81, 21));
        label_2->setStyleSheet(QString::fromUtf8("font: 75 14pt \"Times New Roman\";"));
        pushButton_3 = new QPushButton(groupBox);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(490, 90, 51, 51));
        pushButton_3->setFont(font1);
        pushButton_3->setStyleSheet(QString::fromUtf8("#pushButton_3{\n"
"	background-color: transparent;\n"
"	border-image: url(:/imagenes/imagenes/delete_unpressed.png);\n"
"}\n"
"\n"
"#pushButton_3:pressed{\n"
"	border-image: url(:/imagenes/imagenes/delete_pressed.png);\n"
"}"));
        pushButton_4 = new QPushButton(groupBox);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(200, 240, 91, 31));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Times New Roman"));
        font2.setPointSize(16);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(9);
        pushButton_4->setFont(font2);
        pushButton_4->setStyleSheet(QString::fromUtf8("font: 75 16pt \"Times New Roman\";"));
        pushButton_5 = new QPushButton(groupBox);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(310, 240, 91, 31));
        pushButton_5->setFont(font2);
        pushButton_5->setStyleSheet(QString::fromUtf8("font: 75 16pt \"Times New Roman\";"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(200, 10, 141, 21));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Times New Roman"));
        font3.setPointSize(20);
        font3.setBold(false);
        font3.setItalic(false);
        font3.setWeight(9);
        label->setFont(font3);
        label->setStyleSheet(QString::fromUtf8("font: 75 20pt \"Times New Roman\";"));
        pushButton_6 = new QPushButton(groupBox);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(70, 240, 101, 31));
        pushButton_7 = new QPushButton(groupBox);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(70, 270, 101, 31));
        tabb = new QTableWidget(groupBox);
        tabb->setObjectName(QString::fromUtf8("tabb"));
        tabb->setGeometry(QRect(20, 50, 381, 181));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(480, 160, 47, 13));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(480, 190, 47, 13));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(460, 220, 71, 20));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(480, 260, 47, 13));
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(580, 80, 51, 51));
        pushButton_2->setFont(font1);
        pushButton_2->setStyleSheet(QString::fromUtf8("#pushButton_2{\n"
"	background-color: transparent;\n"
"	border-image: url(:/imagenes/imagenes/edit_unpressed.png);\n"
"}\n"
"\n"
"#pushButton_2:pressed{\n"
"	border-image: url(:/imagenes/imagenes/edit_pressed.png);\n"
"}"));
        lineEdit_4 = new QLineEdit(groupBox);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(540, 250, 113, 20));
        lineEdit_3 = new QLineEdit(groupBox);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(540, 220, 113, 20));
        lineEdit = new QLineEdit(gui_indexHabitacion);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(550, 170, 113, 20));
        lineEdit->setFont(font1);
        lineEdit_2 = new QLineEdit(gui_indexHabitacion);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(550, 200, 113, 20));
        lineEdit_2->setFont(font1);

        retranslateUi(gui_indexHabitacion);

        QMetaObject::connectSlotsByName(gui_indexHabitacion);
    } // setupUi

    void retranslateUi(QDialog *gui_indexHabitacion)
    {
        gui_indexHabitacion->setWindowTitle(QCoreApplication::translate("gui_indexHabitacion", "Dialog", nullptr));
        groupBox->setTitle(QString());
        label_2->setText(QCoreApplication::translate("gui_indexHabitacion", "Accciones", nullptr));
        pushButton_3->setText(QString());
        pushButton_4->setText(QCoreApplication::translate("gui_indexHabitacion", "Registrar", nullptr));
        pushButton_5->setText(QCoreApplication::translate("gui_indexHabitacion", "Cancelar", nullptr));
        label->setText(QCoreApplication::translate("gui_indexHabitacion", "Habitaciones", nullptr));
        pushButton_6->setText(QCoreApplication::translate("gui_indexHabitacion", "preparar tabla", nullptr));
        pushButton_7->setText(QCoreApplication::translate("gui_indexHabitacion", "Insertar registro", nullptr));
        label_3->setText(QCoreApplication::translate("gui_indexHabitacion", "estado", nullptr));
        label_4->setText(QCoreApplication::translate("gui_indexHabitacion", "precio", nullptr));
        label_5->setText(QCoreApplication::translate("gui_indexHabitacion", "N\302\260habitacion", nullptr));
        label_6->setText(QCoreApplication::translate("gui_indexHabitacion", "N\302\260piso", nullptr));
        pushButton_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class gui_indexHabitacion: public Ui_gui_indexHabitacion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUI_INDEXHABITACION_H
