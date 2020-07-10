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
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_gui_indexHabitacion
{
public:
    QGroupBox *groupBox;
    QLabel *label_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QLabel *label;
    QListView *listView;

    void setupUi(QDialog *gui_indexHabitacion)
    {
        if (gui_indexHabitacion->objectName().isEmpty())
            gui_indexHabitacion->setObjectName(QString::fromUtf8("gui_indexHabitacion"));
        gui_indexHabitacion->setEnabled(true);
        gui_indexHabitacion->resize(575, 316);
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        gui_indexHabitacion->setFont(font);
        groupBox = new QGroupBox(gui_indexHabitacion);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 10, 541, 301));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setWeight(50);
        groupBox->setFont(font1);
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(420, 40, 81, 21));
        label_2->setStyleSheet(QString::fromUtf8("font: 75 14pt \"Times New Roman\";"));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(440, 70, 51, 51));
        pushButton->setStyleSheet(QString::fromUtf8("#pushButton{\n"
"	background-color: transparent;\n"
"	border-image: url(:/imagenes/imagenes/view_unpressed.png);\n"
"}\n"
"\n"
"#pushButton:pressed{\n"
"	border-image: url(:/imagenes/imagenes/view_pressed.png);\n"
"}"));
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(440, 140, 51, 51));
        pushButton_2->setFont(font1);
        pushButton_2->setStyleSheet(QString::fromUtf8("#pushButton_2{\n"
"	background-color: transparent;\n"
"	border-image: url(:/imagenes/imagenes/edit_unpressed.png);\n"
"}\n"
"\n"
"#pushButton_2:pressed{\n"
"	border-image: url(:/imagenes/imagenes/edit_pressed.png);\n"
"}"));
        pushButton_3 = new QPushButton(groupBox);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(440, 210, 51, 51));
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
        pushButton_4->setGeometry(QRect(130, 250, 91, 31));
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
        pushButton_5->setGeometry(QRect(250, 250, 91, 31));
        pushButton_5->setFont(font2);
        pushButton_5->setStyleSheet(QString::fromUtf8("font: 75 16pt \"Times New Roman\";"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(150, 20, 141, 21));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Times New Roman"));
        font3.setPointSize(20);
        font3.setBold(false);
        font3.setItalic(false);
        font3.setWeight(9);
        label->setFont(font3);
        label->setStyleSheet(QString::fromUtf8("font: 75 20pt \"Times New Roman\";"));
        listView = new QListView(groupBox);
        listView->setObjectName(QString::fromUtf8("listView"));
        listView->setGeometry(QRect(20, 50, 371, 191));

        retranslateUi(gui_indexHabitacion);

        QMetaObject::connectSlotsByName(gui_indexHabitacion);
    } // setupUi

    void retranslateUi(QDialog *gui_indexHabitacion)
    {
        gui_indexHabitacion->setWindowTitle(QCoreApplication::translate("gui_indexHabitacion", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("gui_indexHabitacion", "indexHabitacion", nullptr));
        label_2->setText(QCoreApplication::translate("gui_indexHabitacion", "Accciones", nullptr));
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        pushButton_3->setText(QString());
        pushButton_4->setText(QCoreApplication::translate("gui_indexHabitacion", "Registrar", nullptr));
        pushButton_5->setText(QCoreApplication::translate("gui_indexHabitacion", "Cancelar", nullptr));
        label->setText(QCoreApplication::translate("gui_indexHabitacion", "Habitaciones", nullptr));
    } // retranslateUi

};

namespace Ui {
    class gui_indexHabitacion: public Ui_gui_indexHabitacion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUI_INDEXHABITACION_H
