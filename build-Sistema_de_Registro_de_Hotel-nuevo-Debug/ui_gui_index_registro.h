/********************************************************************************
** Form generated from reading UI file 'gui_index_registro.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUI_INDEX_REGISTRO_H
#define UI_GUI_INDEX_REGISTRO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Gui_Index_Registro
{
public:
    QPushButton *New_Registro_Button;
    QGroupBox *groupBox;
    QListWidget *list_Registros;
    QPushButton *Regresar_;
    QPushButton *view_registros_button;
    QPushButton *edit_registros_button;
    QPushButton *delete_registros_button;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QDialog *Gui_Index_Registro)
    {
        if (Gui_Index_Registro->objectName().isEmpty())
            Gui_Index_Registro->setObjectName(QString::fromUtf8("Gui_Index_Registro"));
        Gui_Index_Registro->resize(532, 322);
        New_Registro_Button = new QPushButton(Gui_Index_Registro);
        New_Registro_Button->setObjectName(QString::fromUtf8("New_Registro_Button"));
        New_Registro_Button->setGeometry(QRect(70, 260, 101, 41));
        New_Registro_Button->setStyleSheet(QString::fromUtf8("font: 75 16pt \"Times New Roman\";"));
        groupBox = new QGroupBox(Gui_Index_Registro);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 40, 371, 211));
        list_Registros = new QListWidget(groupBox);
        list_Registros->setObjectName(QString::fromUtf8("list_Registros"));
        list_Registros->setGeometry(QRect(10, 10, 351, 192));
        Regresar_ = new QPushButton(Gui_Index_Registro);
        Regresar_->setObjectName(QString::fromUtf8("Regresar_"));
        Regresar_->setGeometry(QRect(250, 260, 101, 41));
        Regresar_->setStyleSheet(QString::fromUtf8("font: 75 16pt \"Times New Roman\";"));
        view_registros_button = new QPushButton(Gui_Index_Registro);
        view_registros_button->setObjectName(QString::fromUtf8("view_registros_button"));
        view_registros_button->setGeometry(QRect(440, 90, 51, 51));
        view_registros_button->setStyleSheet(QString::fromUtf8("#view_registros_button{\n"
"	background-color: transparent;\n"
"	border-image: url(:/imagenes/imagenes/view_unpressed.png);\n"
"}\n"
"\n"
"#view_registros_button:pressed{\n"
"	background-color: transparent;\n"
"	border-image: url(:/imagenes/imagenes/view_pressed.png);\n"
"}"));
        edit_registros_button = new QPushButton(Gui_Index_Registro);
        edit_registros_button->setObjectName(QString::fromUtf8("edit_registros_button"));
        edit_registros_button->setGeometry(QRect(440, 170, 51, 51));
        edit_registros_button->setStyleSheet(QString::fromUtf8("#edit_registros_button{\n"
"	background-color: transparent;\n"
"	border-image: url(:/imagenes/imagenes/edit_unpressed.png);\n"
"}\n"
"\n"
"#edit_registros_button:pressed{\n"
"	background-color: transparent;\n"
"	border-image: url(:/imagenes/imagenes/edit_pressed.png);\n"
"}"));
        delete_registros_button = new QPushButton(Gui_Index_Registro);
        delete_registros_button->setObjectName(QString::fromUtf8("delete_registros_button"));
        delete_registros_button->setGeometry(QRect(440, 250, 51, 51));
        delete_registros_button->setStyleSheet(QString::fromUtf8("#delete_registros_button{\n"
"	background-color: transparent;\n"
"	border-image: url(:/imagenes/imagenes/delete_unpressed.png);\n"
"}\n"
"\n"
"#delete_registros_button:pressed{\n"
"	background-color: transparent;\n"
"	border-image: url(:/imagenes/imagenes/delete_pressed.png);\n"
"}"));
        label_2 = new QLabel(Gui_Index_Registro);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(420, 40, 81, 21));
        label_2->setStyleSheet(QString::fromUtf8("font: 75 14pt \"Times New Roman\";"));
        label_3 = new QLabel(Gui_Index_Registro);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(170, 10, 111, 21));
        label_3->setStyleSheet(QString::fromUtf8("font: 75 20pt \"Times New Roman\";"));

        retranslateUi(Gui_Index_Registro);

        QMetaObject::connectSlotsByName(Gui_Index_Registro);
    } // setupUi

    void retranslateUi(QDialog *Gui_Index_Registro)
    {
        Gui_Index_Registro->setWindowTitle(QCoreApplication::translate("Gui_Index_Registro", "Dialog", nullptr));
        New_Registro_Button->setText(QCoreApplication::translate("Gui_Index_Registro", "Registrar", nullptr));
        groupBox->setTitle(QString());
        Regresar_->setText(QCoreApplication::translate("Gui_Index_Registro", "Cancelar", nullptr));
        view_registros_button->setText(QString());
        edit_registros_button->setText(QString());
        delete_registros_button->setText(QString());
        label_2->setText(QCoreApplication::translate("Gui_Index_Registro", "Accciones", nullptr));
        label_3->setText(QCoreApplication::translate("Gui_Index_Registro", "Registros", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Gui_Index_Registro: public Ui_Gui_Index_Registro {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUI_INDEX_REGISTRO_H