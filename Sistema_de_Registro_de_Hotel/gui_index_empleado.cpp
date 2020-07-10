#include "gui_index_empleado.h"
#include "ui_gui_index_empleado.h"
#include "gui_empleado.h"
#include "ui_gui_empleado.h"

#include <QStandardItemModel>
#include <QMessageBox>
#include <iostream>
#include <string>


using namespace std;

Gui_Index_Empleado::Gui_Index_Empleado(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Gui_Index_Empleado)
{
    ui->setupUi(this);
    u=0;
    f=-1;
}

Gui_Index_Empleado::~Gui_Index_Empleado()
{
    delete ui;
}
void Gui_Index_Empleado::on_CargarDatos_button_clicked(){

    ui->tableWidget->insertRow(ui->tableWidget->rowCount());

    ui->tableWidget->setItem(ui->tableWidget->rowCount()-3,0,new QTableWidgetItem("0003"));
    ui->tableWidget->setItem(ui->tableWidget->rowCount()-3,1,new QTableWidgetItem("Juana"));
    ui->tableWidget->setItem(ui->tableWidget->rowCount()-3,2,new QTableWidgetItem("Flores"));
    ui->tableWidget->setItem(ui->tableWidget->rowCount()-3,3,new QTableWidgetItem("Av. Arequipa 2-C"));
    ui->tableWidget->setItem(ui->tableWidget->rowCount()-3,4,new QTableWidgetItem("-"));
    ui->tableWidget->setItem(ui->tableWidget->rowCount()-3,5,new QTableWidgetItem("1000"));
    ui->tableWidget->setItem(ui->tableWidget->rowCount()-3,6,new QTableWidgetItem("Limpieza"));
    ui->tableWidget->setItem(ui->tableWidget->rowCount()-3,7,new QTableWidgetItem("02-10-2019"));

    ui->tableWidget->setItem(ui->tableWidget->rowCount()-2,0,new QTableWidgetItem("0002"));
    ui->tableWidget->setItem(ui->tableWidget->rowCount()-2,1,new QTableWidgetItem("Luis"));
    ui->tableWidget->setItem(ui->tableWidget->rowCount()-2,2,new QTableWidgetItem("Flores"));
    ui->tableWidget->setItem(ui->tableWidget->rowCount()-2,3,new QTableWidgetItem("Campo Verde 12"));
    ui->tableWidget->setItem(ui->tableWidget->rowCount()-2,4,new QTableWidgetItem("luis72@hotmail.com"));
    ui->tableWidget->setItem(ui->tableWidget->rowCount()-2,5,new QTableWidgetItem("1000"));
    ui->tableWidget->setItem(ui->tableWidget->rowCount()-2,6,new QTableWidgetItem("Seguridad"));
    ui->tableWidget->setItem(ui->tableWidget->rowCount()-2,7,new QTableWidgetItem("02-01-2020"));


    ui->tableWidget->setItem(ui->tableWidget->rowCount()-1,0,new QTableWidgetItem("0001"));
    ui->tableWidget->setItem(ui->tableWidget->rowCount()-1,1,new QTableWidgetItem("Maria"));
    ui->tableWidget->setItem(ui->tableWidget->rowCount()-1,2,new QTableWidgetItem("Juarez"));
    ui->tableWidget->setItem(ui->tableWidget->rowCount()-1,3,new QTableWidgetItem("Urb. El Palacio D-23"));
    ui->tableWidget->setItem(ui->tableWidget->rowCount()-1,4,new QTableWidgetItem("marijuarez@hotmail.com"));
    ui->tableWidget->setItem(ui->tableWidget->rowCount()-1,5,new QTableWidgetItem("1200"));
    ui->tableWidget->setItem(ui->tableWidget->rowCount()-1,6,new QTableWidgetItem("Seguridad"));
    ui->tableWidget->setItem(ui->tableWidget->rowCount()-1,7,new QTableWidgetItem("12-09-2019"));





}
void Gui_Index_Empleado::on_PrepararTabla_button_clicked()
{
    ui->tableWidget->setColumnCount(8);

    QStringList l;
    l<<"ID"<<"Nombre"<<"Apellido"<<"Direccion"<<"Email"<<"Sueldo"<<"Ocupacion"<<"Fecha Contrato";

    ui->tableWidget->setHorizontalHeaderLabels(l);
    ui->tableWidget->setColumnWidth(0,20);
    ui->tableWidget->setColumnWidth(1,100);
    ui->tableWidget->setColumnWidth(2,100);
    ui->tableWidget->setColumnWidth(3,100);
    ui->tableWidget->setColumnWidth(4,80);
    ui->tableWidget->setColumnWidth(5,80);
    ui->tableWidget->setColumnWidth(6,100);
    ui->tableWidget->setColumnWidth(7,120);

}



void Gui_Index_Empleado::on_Cancelar_button_clicked()
{
    close();//Permite cerra la ventana actual abierta
}

void Gui_Index_Empleado::on_Nuevo_Button_clicked()
{
    Gui_Empleado guiE;
    guiE.setModal(true);
    guiE.exec();
}
/*
void Gui_Index_Empleado::on_delete_empleado_button_clicked()
{
    ui->tableWidget->removeRow(f);
}

void Gui_Index_Empleado::on_tableWidget_itemClicked(QTableWidgetItem *item)
{
    f = item->row();
}
*/
