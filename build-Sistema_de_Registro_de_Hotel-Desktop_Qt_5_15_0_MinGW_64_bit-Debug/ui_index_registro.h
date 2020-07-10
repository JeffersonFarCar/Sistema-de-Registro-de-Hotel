/********************************************************************************
** Form generated from reading UI file 'index_registro.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INDEX_REGISTRO_H
#define UI_INDEX_REGISTRO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Index_Registro
{
public:
    QGroupBox *groupBox;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QPushButton *new_Registros_Button;

    void setupUi(QDialog *Index_Registro)
    {
        if (Index_Registro->objectName().isEmpty())
            Index_Registro->setObjectName(QString::fromUtf8("Index_Registro"));
        Index_Registro->resize(596, 295);
        groupBox = new QGroupBox(Index_Registro);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 40, 461, 231));
        scrollArea = new QScrollArea(groupBox);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(10, 20, 421, 191));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 419, 189));
        scrollArea->setWidget(scrollAreaWidgetContents);
        new_Registros_Button = new QPushButton(Index_Registro);
        new_Registros_Button->setObjectName(QString::fromUtf8("new_Registros_Button"));
        new_Registros_Button->setGeometry(QRect(490, 100, 81, 81));

        retranslateUi(Index_Registro);

        QMetaObject::connectSlotsByName(Index_Registro);
    } // setupUi

    void retranslateUi(QDialog *Index_Registro)
    {
        Index_Registro->setWindowTitle(QCoreApplication::translate("Index_Registro", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Index_Registro", "Index Registro", nullptr));
        new_Registros_Button->setText(QCoreApplication::translate("Index_Registro", "New", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Index_Registro: public Ui_Index_Registro {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INDEX_REGISTRO_H
