#include "gui_index_registro.h"
#include "ui_gui_index_registro.h"

#include <QMessageBox>
#include <QComboBox>
#include <QStringList>
#include <QSpinBox>
#include <QDebug>
#include <QSqlError>

#include "gui_registro.h"
#include "conexion.h"

Gui_Index_Registro::Gui_Index_Registro(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Gui_Index_Registro)
{
    ui->setupUi(this);
    ui->tableListRegistros->setEditTriggers(QAbstractItemView::NoEditTriggers);
    mostrarDatos();
}

Gui_Index_Registro::~Gui_Index_Registro()
{
    delete ui;
}

void Gui_Index_Registro::on_Regresar__clicked()
{
    close();//Permite cerra la ventana actual abierta
}

void Gui_Index_Registro::mostrarDatos(){
    prepararTabla();
    cargarTabla();
}

void Gui_Index_Registro::prepararTabla(){
    /**----Preparar Tabla----**/
    ui->tableListRegistros->setColumnCount(5);
    QStringList l;
    l<<"ID"<<"Cliente"<<"Cant. Hab."<<"F. Ingreso"<<"F. Salida";
    ui->tableListRegistros->setHorizontalHeaderLabels(l);
    ui->tableListRegistros->setColumnWidth(0,20);
    ui->tableListRegistros->setColumnWidth(1,100);
    ui->tableListRegistros->setColumnWidth(2,100);
    ui->tableListRegistros->setColumnWidth(3,90);
    ui->tableListRegistros->setColumnWidth(4,90);
    /**---Fin Tabla---**/
}

void Gui_Index_Registro::cargarTabla(){
    Conexion conn;
    conn.Conectar();

    QSqlQuery query_consulta;
    QString query = "SELECT registros.idcliente, nombre, registros.fechae, registros.fechas FROM ((personas INNER JOIN clientes ON idpersona = id_persona) INNER JOIN registros ON clientes.idcliente = registros.idcliente);";
    query_consulta.exec(query);
    int fila = 0;
    ui->tableListRegistros->setRowCount(0);
    while(query_consulta.next()){
        ui->tableListRegistros->insertRow(fila);
        ui->tableListRegistros->setItem(fila, 0, new QTableWidgetItem(query_consulta.value(0).toByteArray().constData()));
        ui->tableListRegistros->setItem(fila, 1, new QTableWidgetItem(query_consulta.value(1).toByteArray().constData()));
        ui->tableListRegistros->setItem(fila, 2, new QTableWidgetItem("5"));
        ui->tableListRegistros->setItem(fila, 3, new QTableWidgetItem(query_consulta.value(2).toByteArray().constData()));
        ui->tableListRegistros->setItem(fila, 4, new QTableWidgetItem(query_consulta.value(3).toByteArray().constData()));
        fila++;
    }
    conn.Cerrar();
}

void Gui_Index_Registro::on_tableListRegistros_itemClicked(QTableWidgetItem *item)
{

}

void Gui_Index_Registro::on_New_Registro_Button_clicked()
{
    Gui_Registro guiR;
    guiR.setModal(true);
    guiR.exec();
    mostrarDatos();
}

void Gui_Index_Registro::on_edit_registros_button_clicked()
{

}

void Gui_Index_Registro::on_delete_registros_button_clicked()
{
    QMessageBox::StandardButton action;
    action = QMessageBox::question(this, "Cuidado", "¿Está seguro que desa borrar el dato?");
    if(action == QMessageBox::Yes){
        ui->tableListRegistros->removeRow(f);
    }
}
