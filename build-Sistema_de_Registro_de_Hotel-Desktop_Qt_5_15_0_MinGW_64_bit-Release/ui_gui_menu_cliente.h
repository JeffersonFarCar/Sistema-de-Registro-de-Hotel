/********************************************************************************
** Form generated from reading UI file 'gui_menu_cliente.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUI_MENU_CLIENTE_H
#define UI_GUI_MENU_CLIENTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_Gui_Menu_Cliente
{
public:
    QPushButton *pushButtoMODIFICAR;
    QPushButton *pushButtonELIMINAR;
    QLineEdit *lineEditEMAIL;
    QLineEdit *lineEdit_buscar;
    QLabel *label_2;
    QPushButton *Buscar_button;
    QLineEdit *lineEditNOMBRE;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *lineEditDIRECCION;
    QPushButton *Agregar_button;
    QLabel *label_6;
    QLineEdit *lineEditCIUDADANIA;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_7;
    QLineEdit *lineEditAPELLIDO;
    QLabel *label_8;
    QLineEdit *lineEditDNI;
    QTableWidget *newTableC;

    void setupUi(QDialog *Gui_Menu_Cliente)
    {
        if (Gui_Menu_Cliente->objectName().isEmpty())
            Gui_Menu_Cliente->setObjectName(QString::fromUtf8("Gui_Menu_Cliente"));
        Gui_Menu_Cliente->resize(788, 345);
        pushButtoMODIFICAR = new QPushButton(Gui_Menu_Cliente);
        pushButtoMODIFICAR->setObjectName(QString::fromUtf8("pushButtoMODIFICAR"));
        pushButtoMODIFICAR->setGeometry(QRect(710, 190, 51, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Times New Roman"));
        font.setPointSize(10);
        font.setBold(false);
        font.setWeight(50);
        pushButtoMODIFICAR->setFont(font);
        pushButtoMODIFICAR->setCursor(QCursor(Qt::PointingHandCursor));
        pushButtoMODIFICAR->setStyleSheet(QString::fromUtf8("#pushButtoMODIFICAR{\n"
"	background-color: transparent;\n"
"	border-image: url(:/imagenes/imagenes/edit_unpressed.png);\n"
"}\n"
"\n"
"#pushButtoMODIFICAR:pressed{\n"
"	background-color: transparent;\n"
"	border-image: url(:/imagenes/imagenes/edit_pressed.png);\n"
"}"));
        pushButtonELIMINAR = new QPushButton(Gui_Menu_Cliente);
        pushButtonELIMINAR->setObjectName(QString::fromUtf8("pushButtonELIMINAR"));
        pushButtonELIMINAR->setGeometry(QRect(710, 250, 51, 51));
        pushButtonELIMINAR->setCursor(QCursor(Qt::PointingHandCursor));
        pushButtonELIMINAR->setStyleSheet(QString::fromUtf8("#pushButtonELIMINAR{\n"
"	background-color: transparent;\n"
"	border-image: url(:/imagenes/imagenes/delete_unpressed.png);\n"
"}\n"
"\n"
"#pushButtonELIMINAR:pressed{\n"
"	background-color: transparent;\n"
"	border-image: url(:/imagenes/imagenes/delete_pressed.png);\n"
"}"));
        lineEditEMAIL = new QLineEdit(Gui_Menu_Cliente);
        lineEditEMAIL->setObjectName(QString::fromUtf8("lineEditEMAIL"));
        lineEditEMAIL->setGeometry(QRect(500, 250, 171, 20));
        lineEdit_buscar = new QLineEdit(Gui_Menu_Cliente);
        lineEdit_buscar->setObjectName(QString::fromUtf8("lineEdit_buscar"));
        lineEdit_buscar->setEnabled(true);
        lineEdit_buscar->setGeometry(QRect(70, 60, 181, 21));
        QFont font1;
        font1.setFamily(QString::fromUtf8("MS Sans Serif"));
        lineEdit_buscar->setFont(font1);
        lineEdit_buscar->setCursor(QCursor(Qt::PointingHandCursor));
        lineEdit_buscar->setMouseTracking(false);
        lineEdit_buscar->setTabletTracking(false);
        lineEdit_buscar->setFrame(false);
        lineEdit_buscar->setDragEnabled(false);
        label_2 = new QLabel(Gui_Menu_Cliente);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(420, 190, 61, 16));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Times New Roman"));
        font2.setPointSize(12);
        label_2->setFont(font2);
        Buscar_button = new QPushButton(Gui_Menu_Cliente);
        Buscar_button->setObjectName(QString::fromUtf8("Buscar_button"));
        Buscar_button->setEnabled(true);
        Buscar_button->setGeometry(QRect(20, 50, 31, 31));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Buscar_button->sizePolicy().hasHeightForWidth());
        Buscar_button->setSizePolicy(sizePolicy);
        Buscar_button->setMaximumSize(QSize(1677, 1677));
        QFont font3;
        font3.setBold(false);
        font3.setUnderline(false);
        font3.setWeight(50);
        font3.setStrikeOut(false);
        Buscar_button->setFont(font3);
        Buscar_button->setCursor(QCursor(Qt::ArrowCursor));
        Buscar_button->setTabletTracking(false);
        Buscar_button->setAcceptDrops(false);
        Buscar_button->setAutoFillBackground(false);
        Buscar_button->setStyleSheet(QString::fromUtf8("#Buscar_button{\n"
"	background-color: transparent;\n"
"	border-image: url(:/imagenes/imagenes/buscar_pressed.png);\n"
"}"));
        Buscar_button->setIconSize(QSize(10, 10));
        Buscar_button->setFlat(true);
        lineEditNOMBRE = new QLineEdit(Gui_Menu_Cliente);
        lineEditNOMBRE->setObjectName(QString::fromUtf8("lineEditNOMBRE"));
        lineEditNOMBRE->setGeometry(QRect(500, 160, 171, 20));
        label_4 = new QLabel(Gui_Menu_Cliente);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(420, 280, 71, 16));
        label_4->setFont(font2);
        label_5 = new QLabel(Gui_Menu_Cliente);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(420, 250, 71, 16));
        label_5->setFont(font2);
        lineEditDIRECCION = new QLineEdit(Gui_Menu_Cliente);
        lineEditDIRECCION->setObjectName(QString::fromUtf8("lineEditDIRECCION"));
        lineEditDIRECCION->setGeometry(QRect(500, 220, 171, 20));
        Agregar_button = new QPushButton(Gui_Menu_Cliente);
        Agregar_button->setObjectName(QString::fromUtf8("Agregar_button"));
        Agregar_button->setEnabled(true);
        Agregar_button->setGeometry(QRect(700, 150, 71, 31));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Times New Roman"));
        font4.setPointSize(12);
        font4.setBold(true);
        font4.setWeight(75);
        Agregar_button->setFont(font4);
        Agregar_button->setCursor(QCursor(Qt::PointingHandCursor));
        Agregar_button->setAutoFillBackground(false);
        Agregar_button->setStyleSheet(QString::fromUtf8("#Aceptar_button{\n"
"	border-color: rgb(85, 170, 127);\n"
"alternate-background-color: rgb(85, 170, 127);\n"
"	background-color: rgb(85, 170, 127);\n"
"}"));
        label_6 = new QLabel(Gui_Menu_Cliente);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(360, 10, 111, 41));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Times New Roman"));
        font5.setPointSize(20);
        font5.setBold(false);
        font5.setItalic(false);
        font5.setWeight(9);
        label_6->setFont(font5);
        label_6->setStyleSheet(QString::fromUtf8("font: 75 20pt \"Times New Roman\";"));
        lineEditCIUDADANIA = new QLineEdit(Gui_Menu_Cliente);
        lineEditCIUDADANIA->setObjectName(QString::fromUtf8("lineEditCIUDADANIA"));
        lineEditCIUDADANIA->setGeometry(QRect(500, 280, 171, 20));
        label = new QLabel(Gui_Menu_Cliente);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(420, 160, 61, 16));
        QFont font6;
        font6.setFamily(QString::fromUtf8("Times New Roman"));
        font6.setPointSize(12);
        font6.setBold(false);
        font6.setWeight(50);
        label->setFont(font6);
        label_3 = new QLabel(Gui_Menu_Cliente);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(420, 220, 71, 16));
        label_3->setFont(font2);
        label_7 = new QLabel(Gui_Menu_Cliente);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(690, 110, 81, 21));
        label_7->setStyleSheet(QString::fromUtf8("font: 75 14pt \"Times New Roman\";"));
        lineEditAPELLIDO = new QLineEdit(Gui_Menu_Cliente);
        lineEditAPELLIDO->setObjectName(QString::fromUtf8("lineEditAPELLIDO"));
        lineEditAPELLIDO->setGeometry(QRect(500, 190, 171, 20));
        label_8 = new QLabel(Gui_Menu_Cliente);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(420, 130, 61, 16));
        label_8->setFont(font6);
        lineEditDNI = new QLineEdit(Gui_Menu_Cliente);
        lineEditDNI->setObjectName(QString::fromUtf8("lineEditDNI"));
        lineEditDNI->setGeometry(QRect(500, 130, 171, 20));
        newTableC = new QTableWidget(Gui_Menu_Cliente);
        newTableC->setObjectName(QString::fromUtf8("newTableC"));
        newTableC->setGeometry(QRect(10, 100, 391, 211));

        retranslateUi(Gui_Menu_Cliente);

        Buscar_button->setDefault(true);


        QMetaObject::connectSlotsByName(Gui_Menu_Cliente);
    } // setupUi

    void retranslateUi(QDialog *Gui_Menu_Cliente)
    {
        Gui_Menu_Cliente->setWindowTitle(QCoreApplication::translate("Gui_Menu_Cliente", "LISTA DE CLIENTES", nullptr));
        pushButtoMODIFICAR->setText(QString());
        pushButtonELIMINAR->setText(QString());
        label_2->setText(QCoreApplication::translate("Gui_Menu_Cliente", "Apellido:", nullptr));
        Buscar_button->setText(QString());
        label_4->setText(QCoreApplication::translate("Gui_Menu_Cliente", "Ciudadania:", nullptr));
        label_5->setText(QCoreApplication::translate("Gui_Menu_Cliente", "E-mail:", nullptr));
        Agregar_button->setText(QCoreApplication::translate("Gui_Menu_Cliente", "Nuevo", nullptr));
        label_6->setText(QCoreApplication::translate("Gui_Menu_Cliente", "Clientes", nullptr));
        label->setText(QCoreApplication::translate("Gui_Menu_Cliente", "Nombre:", nullptr));
        label_3->setText(QCoreApplication::translate("Gui_Menu_Cliente", "Direcci\303\263n:", nullptr));
        label_7->setText(QCoreApplication::translate("Gui_Menu_Cliente", "Accciones", nullptr));
        label_8->setText(QCoreApplication::translate("Gui_Menu_Cliente", "DNI:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Gui_Menu_Cliente: public Ui_Gui_Menu_Cliente {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUI_MENU_CLIENTE_H
