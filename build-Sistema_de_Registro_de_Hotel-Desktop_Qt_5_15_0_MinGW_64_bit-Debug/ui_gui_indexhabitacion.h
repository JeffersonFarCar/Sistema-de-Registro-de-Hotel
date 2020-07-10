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
        groupBox->setGeometry(QRect(10, 20, 541, 301));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setWeight(50);
        groupBox->setFont(font1);
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(440, 40, 101, 21));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(430, 70, 71, 31));
        pushButton->setStyleSheet(QString::fromUtf8("#pushButton{\n"
"	background-color: transparent;\n"
"	border-image: url(:/imagenes/imagenes/eye.png);\n"
"}\n"
"\n"
"#pushButton:pressed{\n"
"	border-image: url(:/imagenes/imagenes/eye.png);\n"
"}"));
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(430, 120, 81, 41));
        pushButton_2->setFont(font1);
        pushButton_2->setStyleSheet(QString::fromUtf8("#pushButton_2{\n"
"	background-color: transparent;\n"
"	border-image: url(:/imagenes/imagenes/edit.png);\n"
"}\n"
"\n"
"#pushButton_2:pressed{\n"
"	border-image: url(:/imagenes/imagenes/edit.png);\n"
"}"));
        pushButton_3 = new QPushButton(groupBox);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(430, 190, 75, 23));
        pushButton_3->setFont(font1);
        pushButton_3->setStyleSheet(QString::fromUtf8("#pushButton_3{\n"
"	background-color: transparent;\n"
"	border-image: url(:/imagenes/imagenes/eliminar.png);\n"
"}\n"
"\n"
"#pushButton_3:pressed{\n"
"	border-image: url(:/imagenes/imagenes/eliminar.png);\n"
"}"));
        pushButton_4 = new QPushButton(groupBox);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(150, 250, 71, 31));
        pushButton_4->setFont(font1);
        pushButton_5 = new QPushButton(groupBox);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(250, 250, 71, 31));
        pushButton_5->setFont(font1);
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(150, 20, 131, 21));
        QFont font2;
        font2.setPointSize(14);
        font2.setBold(false);
        font2.setWeight(50);
        label->setFont(font2);
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
