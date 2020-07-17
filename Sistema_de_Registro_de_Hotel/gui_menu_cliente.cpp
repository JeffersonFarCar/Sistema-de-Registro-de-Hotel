#include "gui_cliente.h"
#include "gui_menu_cliente.h"
#include "ui_gui_menu_cliente.h"

#include <QStandardItemModel>
#include <QTableWidget>
#include <QTableWidgetItem>
//#include <string>
//using namespace std;
Gui_Menu_Cliente::Gui_Menu_Cliente(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Gui_Menu_Cliente)
{
    //Definicion de variables
    ui->setupUi(this);
    u = 0;
    fila = -1;

  /*----Preparacion de la tabla----*/
    ui->tablaMenuC->setColumnCount(6);
    QStringList l;
    l<<"ID"<<"Nombre"<<"Apellido"<<"Direccion"<<"Ciudadania"<<"Email";

    ui->tablaMenuC->setHorizontalHeaderLabels(l);
    ui->tablaMenuC->setColumnWidth(0,50);
    ui->tablaMenuC->setColumnWidth(1,150);
    ui->tablaMenuC->setColumnWidth(2,150);
    ui->tablaMenuC->setColumnWidth(3,170);
    ui->tablaMenuC->setColumnWidth(4,80);
    ui->tablaMenuC->setColumnWidth(5,130);
  /*----Fin preparacion de la tabla----*/
}

Gui_Menu_Cliente::~Gui_Menu_Cliente()
{
    delete ui;
}



void Gui_Menu_Cliente::on_pushButton_2_clicked()
{
    u++;
    QByteArray d;
    //d.append("USUARIO");
    d.append(QString::number(u));
    ui->tablaMenuC->insertRow(ui->tablaMenuC->rowCount());

    ui->tablaMenuC->setItem(ui->tablaMenuC->rowCount()-1,0,new QTableWidgetItem(d.constData()));
    ui->tablaMenuC->setItem(ui->tablaMenuC->rowCount()-1,1,new QTableWidgetItem("Henry"));
    ui->tablaMenuC->setItem(ui->tablaMenuC->rowCount()-1,2,new QTableWidgetItem("Rojas"));
    ui->tablaMenuC->setItem(ui->tablaMenuC->rowCount()-1,3,new QTableWidgetItem("Perales, Los manzanos,N°12 "));
    ui->tablaMenuC->setItem(ui->tablaMenuC->rowCount()-1,4,new QTableWidgetItem("Cusco"));
    ui->tablaMenuC->setItem(ui->tablaMenuC->rowCount()-1,5,new QTableWidgetItem("henry_12@gmail.com"));

    ui->tablaMenuC->setItem(ui->tablaMenuC->rowCount()-2,0,new QTableWidgetItem(d.constData()));
    ui->tablaMenuC->setItem(ui->tablaMenuC->rowCount()-2,1,new QTableWidgetItem("Alex"));
    ui->tablaMenuC->setItem(ui->tablaMenuC->rowCount()-2,2,new QTableWidgetItem("Aquise"));
    ui->tablaMenuC->setItem(ui->tablaMenuC->rowCount()-2,3,new QTableWidgetItem("Las torres, Nueva Alta, N°B-2"));
    ui->tablaMenuC->setItem(ui->tablaMenuC->rowCount()-2,4,new QTableWidgetItem("Arequipa"));
    ui->tablaMenuC->setItem(ui->tablaMenuC->rowCount()-2,5,new QTableWidgetItem("alex_99A@gmail.com"));

    ui->tablaMenuC->setItem(ui->tablaMenuC->rowCount()-3,0,new QTableWidgetItem(d.constData()));
    ui->tablaMenuC->setItem(ui->tablaMenuC->rowCount()-3,1,new QTableWidgetItem("USUARIO"));
    ui->tablaMenuC->setItem(ui->tablaMenuC->rowCount()-3,2,new QTableWidgetItem("APELLIDO"));
    ui->tablaMenuC->setItem(ui->tablaMenuC->rowCount()-3,3,new QTableWidgetItem("direccion"));
    ui->tablaMenuC->setItem(ui->tablaMenuC->rowCount()-3,4,new QTableWidgetItem("ciudadania"));
    ui->tablaMenuC->setItem(ui->tablaMenuC->rowCount()-3,5,new QTableWidgetItem("unknow@gmail.com"));
}


void Gui_Menu_Cliente::on_pushButtonB3_clicked()
{
     ui->tablaMenuC->removeRow(fila);
}


void Gui_Menu_Cliente::on_tablaMenuC_itemClicked(QTableWidgetItem *item)
{
    //Almacena el entero de la fila seleccionada, para borrar o modificar
    fila = item->row();

    //Cpaturar datos para poder modificarlo
    QTableWidgetItem *nombre = ui->tablaMenuC->item(fila,1);
    QTableWidgetItem *apellido = ui->tablaMenuC->item(fila,2);
    QTableWidgetItem *direccion = ui->tablaMenuC->item(fila,3);
    QTableWidgetItem *ciudadania = ui->tablaMenuC->item(fila,4);
    QTableWidgetItem *email = ui->tablaMenuC->item(fila,5);

    //Recuperar datos de la tabla a los texedit para modificar
    ui->lineEditNOMBRE->setText(nombre->text());
    ui->lineEditAPELLIDO->setText(apellido->text());
    ui->lineEditDIRECCION->setText(direccion->text());
    ui->lineEditCIUDADANIA->setText(ciudadania->text());
    ui->lineEditEMAIL->setText(email->text());
}

void Gui_Menu_Cliente::on_pushButtoMODIFICAR_clicked()
{
    ui->tablaMenuC->setItem(fila,1,new QTableWidgetItem(ui->lineEditNOMBRE->text()));
    ui->tablaMenuC->setItem(fila,2,new QTableWidgetItem(ui->lineEditAPELLIDO->text()));
    ui->tablaMenuC->setItem(fila,3,new QTableWidgetItem(ui->lineEditDIRECCION->text()));
    ui->tablaMenuC->setItem(fila,4,new QTableWidgetItem(ui->lineEditCIUDADANIA->text()));
    ui->tablaMenuC->setItem(fila,5,new QTableWidgetItem(ui->lineEditEMAIL->text()));
}

void Gui_Menu_Cliente::on_Agregar_button_clicked()
{
    Gui_Cliente guiC;
    guiC.setModal(true);
    guiC.exec();
}
