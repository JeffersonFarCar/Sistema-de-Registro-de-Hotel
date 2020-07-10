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

    void setupUi(QDialog *Gui_Index_Registro)
    {
        if (Gui_Index_Registro->objectName().isEmpty())
            Gui_Index_Registro->setObjectName(QString::fromUtf8("Gui_Index_Registro"));
        Gui_Index_Registro->resize(532, 318);
        New_Registro_Button = new QPushButton(Gui_Index_Registro);
        New_Registro_Button->setObjectName(QString::fromUtf8("New_Registro_Button"));
        New_Registro_Button->setGeometry(QRect(70, 250, 101, 51));
        groupBox = new QGroupBox(Gui_Index_Registro);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 20, 371, 221));
        list_Registros = new QListWidget(groupBox);
        list_Registros->setObjectName(QString::fromUtf8("list_Registros"));
        list_Registros->setGeometry(QRect(10, 20, 351, 192));
        Regresar_ = new QPushButton(Gui_Index_Registro);
        Regresar_->setObjectName(QString::fromUtf8("Regresar_"));
        Regresar_->setGeometry(QRect(250, 250, 101, 51));
        view_registros_button = new QPushButton(Gui_Index_Registro);
        view_registros_button->setObjectName(QString::fromUtf8("view_registros_button"));
        view_registros_button->setGeometry(QRect(430, 50, 71, 41));
        edit_registros_button = new QPushButton(Gui_Index_Registro);
        edit_registros_button->setObjectName(QString::fromUtf8("edit_registros_button"));
        edit_registros_button->setGeometry(QRect(430, 110, 71, 41));
        delete_registros_button = new QPushButton(Gui_Index_Registro);
        delete_registros_button->setObjectName(QString::fromUtf8("delete_registros_button"));
        delete_registros_button->setGeometry(QRect(430, 170, 71, 41));

        retranslateUi(Gui_Index_Registro);

        QMetaObject::connectSlotsByName(Gui_Index_Registro);
    } // setupUi

    void retranslateUi(QDialog *Gui_Index_Registro)
    {
        Gui_Index_Registro->setWindowTitle(QCoreApplication::translate("Gui_Index_Registro", "Dialog", nullptr));
        New_Registro_Button->setText(QCoreApplication::translate("Gui_Index_Registro", "New", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Gui_Index_Registro", "Index Registros", nullptr));
        Regresar_->setText(QCoreApplication::translate("Gui_Index_Registro", "Regresar", nullptr));
        view_registros_button->setText(QCoreApplication::translate("Gui_Index_Registro", "View", nullptr));
        edit_registros_button->setText(QCoreApplication::translate("Gui_Index_Registro", "Edit", nullptr));
        delete_registros_button->setText(QCoreApplication::translate("Gui_Index_Registro", "Delete", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Gui_Index_Registro: public Ui_Gui_Index_Registro {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUI_INDEX_REGISTRO_H
