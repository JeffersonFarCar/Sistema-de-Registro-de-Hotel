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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_Gui_Menu_Cliente
{
public:
    QGroupBox *groupBox;
    QLineEdit *lineEdit_buscar;
    QPushButton *Aceptar_button;
    QPushButton *Buscar_button;
    QTableWidget *tablaMenuC;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButtonB3;
    QPushButton *pushButtonB4;
    QLineEdit *lineEditNOMBRE;
    QLineEdit *lineEditAPELLIDO;
    QLineEdit *lineEditDIRECCION;
    QLineEdit *lineEditCIUDADANIA;
    QLineEdit *lineEditEMAIL;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *pushButtoMODIFICAR;
    QPushButton *pushButtonVIEW;
    QLabel *label_6;
    QLabel *label_7;

    void setupUi(QDialog *Gui_Menu_Cliente)
    {
        if (Gui_Menu_Cliente->objectName().isEmpty())
            Gui_Menu_Cliente->setObjectName(QString::fromUtf8("Gui_Menu_Cliente"));
        Gui_Menu_Cliente->resize(602, 474);
        groupBox = new QGroupBox(Gui_Menu_Cliente);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 10, 581, 471));
        groupBox->setAutoFillBackground(false);
        groupBox->setCheckable(false);
        lineEdit_buscar = new QLineEdit(groupBox);
        lineEdit_buscar->setObjectName(QString::fromUtf8("lineEdit_buscar"));
        lineEdit_buscar->setEnabled(true);
        lineEdit_buscar->setGeometry(QRect(320, 50, 181, 21));
        QFont font;
        font.setFamily(QString::fromUtf8("MS Sans Serif"));
        lineEdit_buscar->setFont(font);
        lineEdit_buscar->setCursor(QCursor(Qt::PointingHandCursor));
        lineEdit_buscar->setMouseTracking(false);
        lineEdit_buscar->setTabletTracking(false);
        lineEdit_buscar->setFrame(false);
        lineEdit_buscar->setDragEnabled(false);
        Aceptar_button = new QPushButton(groupBox);
        Aceptar_button->setObjectName(QString::fromUtf8("Aceptar_button"));
        Aceptar_button->setEnabled(true);
        Aceptar_button->setGeometry(QRect(450, 140, 101, 31));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        Aceptar_button->setFont(font1);
        Aceptar_button->setCursor(QCursor(Qt::PointingHandCursor));
        Aceptar_button->setAutoFillBackground(true);
        Aceptar_button->setStyleSheet(QString::fromUtf8("#Aceptar_button{\n"
"	border-color: rgb(85, 170, 127);\n"
"alternate-background-color: rgb(85, 170, 127);\n"
"	background-color: rgb(85, 170, 127);\n"
"}"));
        Buscar_button = new QPushButton(groupBox);
        Buscar_button->setObjectName(QString::fromUtf8("Buscar_button"));
        Buscar_button->setGeometry(QRect(520, 40, 41, 41));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Buscar_button->sizePolicy().hasHeightForWidth());
        Buscar_button->setSizePolicy(sizePolicy);
        Buscar_button->setMaximumSize(QSize(1677, 1677));
        QFont font2;
        font2.setBold(true);
        font2.setUnderline(false);
        font2.setWeight(75);
        font2.setStrikeOut(false);
        Buscar_button->setFont(font2);
        Buscar_button->setCursor(QCursor(Qt::PointingHandCursor));
        Buscar_button->setTabletTracking(false);
        Buscar_button->setAcceptDrops(false);
        Buscar_button->setAutoFillBackground(false);
        Buscar_button->setStyleSheet(QString::fromUtf8("#Buscar_button{\n"
"	background-color: transparent;\n"
"	border-image: url(:/imagenes/imagenes/buscar_pressed.png);\n"
"}"));
        Buscar_button->setIconSize(QSize(10, 10));
        Buscar_button->setFlat(true);
        tablaMenuC = new QTableWidget(groupBox);
        tablaMenuC->setObjectName(QString::fromUtf8("tablaMenuC"));
        tablaMenuC->setEnabled(true);
        tablaMenuC->setGeometry(QRect(10, 110, 401, 261));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tablaMenuC->sizePolicy().hasHeightForWidth());
        tablaMenuC->setSizePolicy(sizePolicy1);
        tablaMenuC->setMaximumSize(QSize(16777215, 16777215));
        tablaMenuC->setBaseSize(QSize(0, 0));
        tablaMenuC->setFrameShape(QFrame::StyledPanel);
        tablaMenuC->setFrameShadow(QFrame::Sunken);
        tablaMenuC->setDragEnabled(false);
        tablaMenuC->setShowGrid(true);
        tablaMenuC->setSortingEnabled(false);
        tablaMenuC->setWordWrap(true);
        tablaMenuC->setCornerButtonEnabled(true);
        tablaMenuC->setRowCount(0);
        tablaMenuC->setColumnCount(0);
        tablaMenuC->horizontalHeader()->setVisible(true);
        tablaMenuC->horizontalHeader()->setCascadingSectionResizes(false);
        tablaMenuC->horizontalHeader()->setMinimumSectionSize(43);
        tablaMenuC->horizontalHeader()->setDefaultSectionSize(115);
        tablaMenuC->horizontalHeader()->setHighlightSections(false);
        tablaMenuC->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        tablaMenuC->horizontalHeader()->setStretchLastSection(false);
        tablaMenuC->verticalHeader()->setVisible(true);
        tablaMenuC->verticalHeader()->setCascadingSectionResizes(false);
        tablaMenuC->verticalHeader()->setMinimumSectionSize(23);
        tablaMenuC->verticalHeader()->setDefaultSectionSize(29);
        tablaMenuC->verticalHeader()->setProperty("showSortIndicator", QVariant(false));
        tablaMenuC->verticalHeader()->setStretchLastSection(false);
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(20, 80, 91, 21));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Times New Roman"));
        font3.setPointSize(10);
        font3.setBold(true);
        font3.setWeight(75);
        pushButton->setFont(font3);
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setAutoFillBackground(true);
        pushButton->setStyleSheet(QString::fromUtf8("#pushButton{\n"
"	border-color: rgb(85, 170, 127);\n"
"alternate-background-color: rgb(85, 170, 127);\n"
"	background-color: rgb(85, 170, 127);\n"
"}"));
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(430, 180, 141, 23));
        pushButton_2->setFont(font3);
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2->setAutoFillBackground(true);
        pushButton_2->setStyleSheet(QString::fromUtf8("#pushButton_2{\n"
"	border-color: rgb(85, 170, 127);\n"
"alternate-background-color: rgb(85, 170, 127);\n"
"	background-color: rgb(85, 170, 127);\n"
"}"));
        pushButtonB3 = new QPushButton(groupBox);
        pushButtonB3->setObjectName(QString::fromUtf8("pushButtonB3"));
        pushButtonB3->setGeometry(QRect(470, 270, 51, 41));
        pushButtonB3->setCursor(QCursor(Qt::PointingHandCursor));
        pushButtonB3->setStyleSheet(QString::fromUtf8("#pushButtonB3{\n"
"	background-color: transparent;\n"
"	border-image: url(:/imagenes/imagenes/delete_unpressed.png);\n"
"}\n"
"\n"
"#pushButtonB3:pressed{\n"
"	background-color: transparent;\n"
"	border-image: url(:/imagenes/imagenes/delete_pressed.png);\n"
"}"));
        pushButtonB4 = new QPushButton(groupBox);
        pushButtonB4->setObjectName(QString::fromUtf8("pushButtonB4"));
        pushButtonB4->setGeometry(QRect(450, 340, 91, 21));
        pushButtonB4->setFont(font3);
        pushButtonB4->setCursor(QCursor(Qt::PointingHandCursor));
        pushButtonB4->setAutoFillBackground(true);
        pushButtonB4->setStyleSheet(QString::fromUtf8("#pushButtonB4{\n"
"	border-color: rgb(85, 170, 127);\n"
"alternate-background-color: rgb(85, 170, 127);\n"
"	background-color: rgb(85, 170, 127);\n"
"}"));
        lineEditNOMBRE = new QLineEdit(groupBox);
        lineEditNOMBRE->setObjectName(QString::fromUtf8("lineEditNOMBRE"));
        lineEditNOMBRE->setGeometry(QRect(20, 400, 151, 20));
        lineEditAPELLIDO = new QLineEdit(groupBox);
        lineEditAPELLIDO->setObjectName(QString::fromUtf8("lineEditAPELLIDO"));
        lineEditAPELLIDO->setGeometry(QRect(180, 400, 171, 20));
        lineEditDIRECCION = new QLineEdit(groupBox);
        lineEditDIRECCION->setObjectName(QString::fromUtf8("lineEditDIRECCION"));
        lineEditDIRECCION->setGeometry(QRect(360, 400, 201, 20));
        lineEditCIUDADANIA = new QLineEdit(groupBox);
        lineEditCIUDADANIA->setObjectName(QString::fromUtf8("lineEditCIUDADANIA"));
        lineEditCIUDADANIA->setGeometry(QRect(20, 440, 181, 20));
        lineEditEMAIL = new QLineEdit(groupBox);
        lineEditEMAIL->setObjectName(QString::fromUtf8("lineEditEMAIL"));
        lineEditEMAIL->setGeometry(QRect(220, 440, 191, 20));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 380, 61, 16));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Times New Roman"));
        font4.setBold(false);
        font4.setWeight(50);
        label->setFont(font4);
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(180, 380, 61, 16));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Times New Roman"));
        label_2->setFont(font5);
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(360, 380, 71, 16));
        label_3->setFont(font5);
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 420, 71, 16));
        label_4->setFont(font5);
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(220, 420, 71, 16));
        label_5->setFont(font5);
        pushButtoMODIFICAR = new QPushButton(groupBox);
        pushButtoMODIFICAR->setObjectName(QString::fromUtf8("pushButtoMODIFICAR"));
        pushButtoMODIFICAR->setGeometry(QRect(420, 430, 51, 31));
        QFont font6;
        font6.setFamily(QString::fromUtf8("Times New Roman"));
        font6.setPointSize(10);
        font6.setBold(false);
        font6.setWeight(50);
        pushButtoMODIFICAR->setFont(font6);
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
        pushButtonVIEW = new QPushButton(groupBox);
        pushButtonVIEW->setObjectName(QString::fromUtf8("pushButtonVIEW"));
        pushButtonVIEW->setGeometry(QRect(460, 220, 51, 31));
        pushButtonVIEW->setStyleSheet(QString::fromUtf8("#pushButtonVIEW{\n"
"	background-color: transparent;\n"
"	border-image: url(:/imagenes/imagenes/view_unpressed.png);\n"
"}\n"
"\n"
"#pushButtonVIEW:pressed{\n"
"	background-color: transparent;\n"
"	border-image: url(:/imagenes/imagenes/view_pressed.png);\n"
"}"));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(240, 10, 141, 31));
        label_6->setStyleSheet(QString::fromUtf8("font: 75 20pt \"Times New Roman\";"));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(460, 100, 81, 21));
        label_7->setStyleSheet(QString::fromUtf8("font: 75 14pt \"Times New Roman\";"));

        retranslateUi(Gui_Menu_Cliente);

        Buscar_button->setDefault(true);


        QMetaObject::connectSlotsByName(Gui_Menu_Cliente);
    } // setupUi

    void retranslateUi(QDialog *Gui_Menu_Cliente)
    {
        Gui_Menu_Cliente->setWindowTitle(QCoreApplication::translate("Gui_Menu_Cliente", "LISTA DE CLIENTES", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Gui_Menu_Cliente", "Lista_de_clientes", nullptr));
        Aceptar_button->setText(QCoreApplication::translate("Gui_Menu_Cliente", "Registrar \n"
"Nuevo", nullptr));
        Buscar_button->setText(QString());
        pushButton->setText(QCoreApplication::translate("Gui_Menu_Cliente", "Preparar Tabla", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Gui_Menu_Cliente", "Agregar Registro Nuevo", nullptr));
        pushButtonB3->setText(QString());
        pushButtonB4->setText(QCoreApplication::translate("Gui_Menu_Cliente", "Borrar Todo", nullptr));
        label->setText(QCoreApplication::translate("Gui_Menu_Cliente", "NOMBRE", nullptr));
        label_2->setText(QCoreApplication::translate("Gui_Menu_Cliente", "APELLIDO", nullptr));
        label_3->setText(QCoreApplication::translate("Gui_Menu_Cliente", "DIRECCION", nullptr));
        label_4->setText(QCoreApplication::translate("Gui_Menu_Cliente", "CIUDADANIA", nullptr));
        label_5->setText(QCoreApplication::translate("Gui_Menu_Cliente", "EMAIL", nullptr));
        pushButtoMODIFICAR->setText(QString());
        pushButtonVIEW->setText(QString());
        label_6->setText(QCoreApplication::translate("Gui_Menu_Cliente", "Clientes", nullptr));
        label_7->setText(QCoreApplication::translate("Gui_Menu_Cliente", "Accciones", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Gui_Menu_Cliente: public Ui_Gui_Menu_Cliente {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUI_MENU_CLIENTE_H
