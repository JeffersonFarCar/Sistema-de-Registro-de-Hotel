#include "gui_factura.h"
#include "ui_gui_factura.h"
#include <fstream>
#include <cstring>
#include <iostream>
#include "QMessageBox"
using namespace std;

gui_factura::gui_factura(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gui_factura)
{

    ui->setupUi(this);
    imprimirFactura();
}

gui_factura::~gui_factura()
{
    delete ui;
}
void gui_factura::imprimirFactura(){

    //recibe objeto cliente y objeto registro para modificar los datos duros

    ui->factura_cliente_nombre->setText("Luis");
    ui->factura_cliente_apellido->setText("Aliaga Mariaca");
    ui->factura_cliente_direccion->setText("Claveles - 114 / JLBR");
    ui->factura_cliente_ciudadania->setText("4569871");
    ui->factura_cliente_nro_registro->setText("123546");
    ui->factura_cliente_personas->setText("cinco");
    ui->factura_cliente_ingreso->setText("15-03-2020");
    ui->factura_cliente_salida->setText("20-03-2020");
    ui->factura_cliente_precioDia->setText("$/50.00");
    ui->factura_cliente_dias->setText("5");
    ui->factura_cliente_precioTotal->setText("$/250.00");

}


void gui_factura::on_factura_cliente_nombre_linkActivated(const QString &link)
{

}
//factura_cliente_nombre

void gui_factura::on_pushButton_clicked()
{

    ofstream f2("facturaN1.txt",ios::out | ios::binary);//f1.open("entrada.dat", ios::binary);


    QString nombre = ui->factura_cliente_nombre->text();
    QString apellido = ui->factura_cliente_apellido->text();
    QString direccion = ui->factura_cliente_direccion->text();
    QString ciudadania = ui->factura_cliente_ciudadania->text();
    QString Nregistro = ui->factura_cliente_nro_registro->text();
    QString Npersonas = ui->factura_cliente_personas->text();
    QString ingreso = ui->factura_cliente_ingreso->text();
    QString salida = ui->factura_cliente_salida->text();
    QString precioD = ui->factura_cliente_precioDia->text();
    QString Ndias = ui->factura_cliente_dias->text();
    QString precioT = ui->factura_cliente_precioTotal->text();
    QString TFactura="Factura N1\n"
                     "\nNombre:\t\t"+nombre+
                     "\nApellido:\t\t"+apellido+
                     "\nDirección:\t\t"+direccion+
                     "\nCiudadania:\t\t"+ciudadania+
                     "\nNumero de personas:\t\t"+Npersonas+
                     "\nFecha de Ingreso:\t\t"+ingreso+
                     "\nFecha de Salida:\t\t"+salida+
                     "\nCantidad de dias:\t\t"+Ndias+
                     "\nPrecio por día:\t\t"+precioD+
                     "\nPrecio Total:\t\t"+precioT;
     QMessageBox::information(this, "Mensaje", "Se guardó la factura correctamente");
    f2<<TFactura.toUtf8().constData()<<endl;


}
