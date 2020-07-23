#include "gui_cliente.h"
#include "gui_menu_cliente.h"
#include "ui_gui_menu_cliente.h"
#include "conexion.h"

#include <QtSql>
#include <QtSql/QSqlQuery>
#include <QString>
#include <QtSql/QSqlDatabase>
#include <QStandardItemModel>
#include <QTableWidget>
#include <QTableWidgetItem>

Gui_Menu_Cliente::Gui_Menu_Cliente(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Gui_Menu_Cliente)
{
    //Definicion de variables
    ui->setupUi(this);
    u = 0;
    fila = -1;

    mostrarDatos();
}

void Gui_Menu_Cliente::mostrarDatos()
{
    /*----Preparacion de la tabla----*/
      ui->tablaMenuC->setColumnCount(6);
      QStringList l;
      l<<"ID"<<"Nombre"<<"Apellido"<<"Direccion"<<"Email"<<"Ciudadania";

      ui->tablaMenuC->setHorizontalHeaderLabels(l);
      ui->tablaMenuC->setColumnWidth(0,80);
      ui->tablaMenuC->setColumnWidth(1,120);
      ui->tablaMenuC->setColumnWidth(2,120);
      ui->tablaMenuC->setColumnWidth(3,150);
      ui->tablaMenuC->setColumnWidth(4,120);
      ui->tablaMenuC->setColumnWidth(5,120);

      /*----Fin preparacion de la tabla----*/

    Conexion conect;
    conect.Conectar();
    QSqlQuery query_consulta;

    QString consulta="select * from personas";

    query_consulta.exec(consulta);

    int fila=0;
    ui->tablaMenuC->setRowCount(0);
    while(query_consulta.next()){
        ui->tablaMenuC->insertRow(fila);
        ui->tablaMenuC->setItem(fila, 0, new QTableWidgetItem(query_consulta.value(0).toByteArray().constData()));
        ui->tablaMenuC->setItem(fila, 1, new QTableWidgetItem(query_consulta.value(1).toByteArray().constData()));
        ui->tablaMenuC->setItem(fila, 2, new QTableWidgetItem(query_consulta.value(2).toByteArray().constData()));
        ui->tablaMenuC->setItem(fila, 3, new QTableWidgetItem(query_consulta.value(3).toByteArray().constData()));
        ui->tablaMenuC->setItem(fila, 4, new QTableWidgetItem(query_consulta.value(4).toByteArray().constData()));
        ui->tablaMenuC->setItem(fila, 5, new QTableWidgetItem(query_consulta.value(5).toByteArray().constData()));
        fila++;
    }
    conect.Cerrar();
}

Gui_Menu_Cliente::~Gui_Menu_Cliente()
{
    delete ui;
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
    mostrarDatos();
}
