#include "ui_gui_menu_cliente.h"
#include "gui_menu_cliente.h"
#include "gui_cliente.h"
#include "cliente_crud.h"
#include "conexion.h"

#include <QtSql>
#include <QtSql/QSqlQuery>
#include <QString>
#include <QtSql/QSqlDatabase>
#include <QStandardItemModel>
#include <QMessageBox>

Cliente_CRUD crudC; //Para poder elminiar y modificar

Gui_Menu_Cliente::Gui_Menu_Cliente(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Gui_Menu_Cliente)
{
    //Definicion de variables
    this->setFixedSize(QSize(776, 350));
    ui->setupUi(this);
    fila = -1; //Item seleccionado en la tabla
    mostrarDatos(); //Metodo inicializador, mostrar datos de BD en la tabla
}

void Gui_Menu_Cliente::mostrarDatos()
{
    prepararTabla();

    Conexion conect;
    conect.Conectar();

    QSqlQuery query_consulta;
    QString consulta="SELECT idpersona, dni, nombre, apellido, direccion, email, ciudadania FROM personas INNER JOIN clientes WHERE personas.idpersona = clientes.id_persona";
    query_consulta.exec(consulta);
    int fila=0;
    ui->newTableC->setRowCount(0);

    while(query_consulta.next()){

        ui->newTableC->insertRow(fila);
        ui->newTableC->setItem(fila, 0, new QTableWidgetItem(query_consulta.value(0).toByteArray().constData()));
        ui->newTableC->setItem(fila, 1, new QTableWidgetItem(query_consulta.value(1).toByteArray().constData()));
        ui->newTableC->setItem(fila, 2, new QTableWidgetItem(query_consulta.value(2).toByteArray().constData()));
        ui->newTableC->setItem(fila, 3, new QTableWidgetItem(query_consulta.value(3).toByteArray().constData()));
        ui->newTableC->setItem(fila, 4, new QTableWidgetItem(query_consulta.value(4).toByteArray().constData()));
        ui->newTableC->setItem(fila, 5, new QTableWidgetItem(query_consulta.value(5).toByteArray().constData()));
        ui->newTableC->setItem(fila, 6, new QTableWidgetItem(query_consulta.value(6).toByteArray().constData()));
        fila++;
    }
    conect.Cerrar();
}

void Gui_Menu_Cliente::on_Agregar_button_clicked()
{
    Gui_Cliente guiC;
    guiC.setModal(true);
    guiC.exec();
    mostrarDatos();
}

void Gui_Menu_Cliente::on_newTableC_itemClicked(QTableWidgetItem *item)
{
    //Almacena el entero de la fila seleccionada, para borrar o modificar
    fila = item->row();

    //Cpaturar datos para poder modificarlo
    QTableWidgetItem *dni = ui->newTableC->item(fila,1);
    QTableWidgetItem *nombre = ui->newTableC->item(fila,2);
    QTableWidgetItem *apellido = ui->newTableC->item(fila,3);
    QTableWidgetItem *direccion = ui->newTableC->item(fila,4);
    QTableWidgetItem *email = ui->newTableC->item(fila,5);
    QTableWidgetItem *ciudadania = ui->newTableC->item(fila,6);

    //Recuperar datos de la tabla a los texedit para modificar
    ui->lineEditDNI->setText(dni->text());
    ui->lineEditNOMBRE->setText(nombre->text());
    ui->lineEditAPELLIDO->setText(apellido->text());
    ui->lineEditDIRECCION->setText(direccion->text());
    ui->lineEditCIUDADANIA->setText(ciudadania->text());
    ui->lineEditEMAIL->setText(email->text());
}

void Gui_Menu_Cliente::on_pushButtoMODIFICAR_clicked()
{
    ui->newTableC->setItem(fila,1,new QTableWidgetItem(ui->lineEditNOMBRE->text()));
    ui->newTableC->setItem(fila,2,new QTableWidgetItem(ui->lineEditAPELLIDO->text()));
    ui->newTableC->setItem(fila,3,new QTableWidgetItem(ui->lineEditDIRECCION->text()));
    ui->newTableC->setItem(fila,4,new QTableWidgetItem(ui->lineEditCIUDADANIA->text()));
    ui->newTableC->setItem(fila,5,new QTableWidgetItem(ui->lineEditEMAIL->text()));
}

void Gui_Menu_Cliente::on_pushButtonELIMINAR_clicked()
{
    QString id = ui->newTableC->item(fila,0)->text();
    QMessageBox::StandardButton action;
    action = QMessageBox::question(this, "Cuidado", "¿Está seguro que desa borrar el dato?");
    if(action == QMessageBox::Yes)
        crudC.deleteCliente(id.toInt());
        mostrarDatos();
}

void Gui_Menu_Cliente::prepararTabla(){
    /*----Preparacion de la tabla----*/
    ui->newTableC->setColumnCount(7);
    QStringList l;
    l<<"ID"<<"DNI"<<"Nombre"<<"Apellido"<<"Direccion"<<"Email"<<"Ciudadania";

    ui->newTableC->setHorizontalHeaderLabels(l);
    ui->newTableC->setColumnWidth(0,80);
    ui->newTableC->setColumnWidth(1,100);
    ui->newTableC->setColumnWidth(2,120);
    ui->newTableC->setColumnWidth(3,150);
    ui->newTableC->setColumnWidth(4,120);
    ui->newTableC->setColumnWidth(5,120);
    ui->newTableC->setColumnWidth(6,120);

      /*----Fin preparacion de la tabla----*/
}

void Gui_Menu_Cliente::on_lineEdit_buscar_textChanged(const QString &arg1)
{
    ui->newTableC->clear();
    prepararTabla();
    Conexion conect;
        ui->newTableC->setRowCount(0);
        conect.Conectar();
        QSqlQuery query_consulta;

        QString consulta="SELECT idpersona, dni, nombre, apellido, direccion, email, "
                         "ciudadania FROM personas INNER JOIN clientes WHERE idpersona = id_persona AND nombre LIKE '"+arg1+"%'";

        query_consulta.exec(consulta);

        int fila=0;
        ui->newTableC->setRowCount(0);

        while(query_consulta.next()){

            ui->newTableC->insertRow(fila);
            ui->newTableC->setItem(fila, 0, new QTableWidgetItem(query_consulta.value(0).toByteArray().constData()));
            ui->newTableC->setItem(fila, 1, new QTableWidgetItem(query_consulta.value(1).toByteArray().constData()));
            ui->newTableC->setItem(fila, 2, new QTableWidgetItem(query_consulta.value(2).toByteArray().constData()));
            ui->newTableC->setItem(fila, 3, new QTableWidgetItem(query_consulta.value(3).toByteArray().constData()));
            ui->newTableC->setItem(fila, 4, new QTableWidgetItem(query_consulta.value(4).toByteArray().constData()));
            ui->newTableC->setItem(fila, 5, new QTableWidgetItem(query_consulta.value(5).toByteArray().constData()));
            ui->newTableC->setItem(fila, 6, new QTableWidgetItem(query_consulta.value(6).toByteArray().constData()));
            fila++;
        }
        conect.Cerrar();
}

void Gui_Menu_Cliente::on_Buscar_button_clicked()
{

}

Gui_Menu_Cliente::~Gui_Menu_Cliente()
{
    delete ui;
}
