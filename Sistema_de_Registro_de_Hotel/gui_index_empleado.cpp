#include "gui_index_empleado.h"
#include "ui_gui_index_empleado.h"
#include "gui_empleado.h"
#include "ui_gui_empleado.h"
#include "conexion.h"


#include <QtSql>
#include <QtSql/QSqlQuery>
#include <QString>
#include <QtSql/QSqlDatabase>
#include <QStandardItemModel>
#include <QTableWidget>
#include <QTableWidgetItem>
#include <QMessageBox>

using namespace std;

Gui_Index_Empleado::Gui_Index_Empleado(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Gui_Index_Empleado)
{
    this->setFixedSize(QSize(776, 350));
    ui->setupUi(this);
    u=0;
    f=-1;
    mostrarDatos();
}

void Gui_Index_Empleado::mostrarDatos()
{
    prepararTabla();

    Conexion conect;
    conect.Conectar();

    QSqlQuery query_consulta;
    QString consulta="SELECT idpersona, dni, nombre, apellido, direccion, email, sueldo, ocupacion, fecha "
                     "FROM personas INNER JOIN empleados WHERE idpersona = id_persona";
    query_consulta.exec(consulta);

    int fila=0;
    ui->tableWidget->setRowCount(0);

    while(query_consulta.next()){
        ui->tableWidget->insertRow(fila);
        ui->tableWidget->setItem(fila, 0, new QTableWidgetItem(query_consulta.value(0).toByteArray().constData()));
        ui->tableWidget->setItem(fila, 1, new QTableWidgetItem(query_consulta.value(1).toByteArray().constData()));
        ui->tableWidget->setItem(fila, 2, new QTableWidgetItem(query_consulta.value(2).toByteArray().constData()));
        ui->tableWidget->setItem(fila, 3, new QTableWidgetItem(query_consulta.value(3).toByteArray().constData()));
        ui->tableWidget->setItem(fila, 4, new QTableWidgetItem(query_consulta.value(4).toByteArray().constData()));
        ui->tableWidget->setItem(fila, 5, new QTableWidgetItem(query_consulta.value(5).toByteArray().constData()));
        ui->tableWidget->setItem(fila, 6, new QTableWidgetItem(query_consulta.value(6).toByteArray().constData()));
        ui->tableWidget->setItem(fila, 7, new QTableWidgetItem(query_consulta.value(7).toByteArray().constData()));
        ui->tableWidget->setItem(fila, 8, new QTableWidgetItem(query_consulta.value(8).toByteArray().constData()));
        fila++;
    }
    conect.Cerrar();
}



Gui_Index_Empleado::~Gui_Index_Empleado()
{
    delete ui;
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
    mostrarDatos();

}

void Gui_Index_Empleado::on_delete_empleado_button_clicked()
{

    QMessageBox::StandardButton action;
    action = QMessageBox::question(this, "Cuidado", "¿Está seguro que desa borrar el dato?");
    if(action == QMessageBox::Yes)
        ui->tableWidget->removeRow(f);
}

void Gui_Index_Empleado::on_tableWidget_itemClicked(QTableWidgetItem *item)
{
    //Almacena el entero de la fila seleccionada, para borrar o modificar
    f = item->row();

    //Cpaturar datos para poder modificarlo
    QTableWidgetItem *dni = ui->tableWidget->item(f,1);
    QTableWidgetItem *nombre = ui->tableWidget->item(f,2);
    QTableWidgetItem *apellido = ui->tableWidget->item(f,3);
    QTableWidgetItem *direccion = ui->tableWidget->item(f,4);
    QTableWidgetItem *email = ui->tableWidget->item(f,5);
    QTableWidgetItem *sueldo = ui->tableWidget->item(f,6);
    QTableWidgetItem *ocupacion = ui->tableWidget->item(f,7);

    //Recuperar datos de la tabla a los texedit para modificar
    ui->lineEditDNIModi->setText(dni->text());
    ui->lineEditNombreModi->setText(nombre->text());
    ui->lineEditApellidoModi->setText(apellido->text());
    ui->lineEditDireccionModi->setText(direccion->text());
    ui->lineEditEmailModi->setText(email->text());
    ui->lineEditSueldoModi->setText(sueldo->text());
    ui->lineEditOcupacionModi->setText(ocupacion->text());
}


void Gui_Index_Empleado::on_edit_empleado_button_clicked()
{
    QMessageBox::StandardButton action;
    action = QMessageBox::question(this, "Cuidado", "¿Está seguro que desa editar el dato?");
    if(action == QMessageBox::Yes){
        ui->tableWidget->setItem(f,1,new QTableWidgetItem(ui->lineEditNombreModi->text()));
        ui->tableWidget->setItem(f,2,new QTableWidgetItem(ui->lineEditApellidoModi->text()));
        ui->tableWidget->setItem(f,3,new QTableWidgetItem(ui->lineEditDireccionModi->text()));
        ui->tableWidget->setItem(f,4,new QTableWidgetItem(ui->lineEditEmailModi->text()));
        ui->tableWidget->setItem(f,5,new QTableWidgetItem(ui->lineEditSueldoModi->text()));
        ui->tableWidget->setItem(f,6,new QTableWidgetItem(ui->lineEditOcupacionModi->text()));
    }
    QMessageBox::information(this,"Mensaje","Se edito correctamente");
}

void Gui_Index_Empleado::prepararTabla(){
    /*----Preparacion de la tabla----*/
      ui->tableWidget->setColumnCount(8);
      QStringList l;
      l<<"ID"<<"DNI"<<"Nombre"<<"Apellido"<<"Direccion"<<"Email"<<"Sueldo"<<"Ocupacion"<<"Fecha Contratacion";

      ui->tableWidget->setHorizontalHeaderLabels(l);
      ui->tableWidget->setColumnWidth(0,80);
      ui->tableWidget->setColumnWidth(1,120);
      ui->tableWidget->setColumnWidth(2,120);
      ui->tableWidget->setColumnWidth(3,150);
      ui->tableWidget->setColumnWidth(4,120);
      ui->tableWidget->setColumnWidth(5,120);
      ui->tableWidget->setColumnWidth(6,120);
      ui->tableWidget->setColumnWidth(7,120);
      ui->tableWidget->setColumnWidth(8,120);

      /*----Fin preparacion de la tabla----*/
}

void Gui_Index_Empleado::on_lineEdit_buscarEmpleado_textChanged(const QString &arg1)
{
    ui->tableWidget->clear();
    prepararTabla();
    Conexion conect;
    conect.Conectar();

    QSqlQuery query_consulta;
    QString consulta="SELECT idpersona, dni, nombre, apellido, direccion, email, sueldo, ocupacion, fecha "
                     "FROM personas INNER JOIN empleados WHERE idpersona = id_persona AND nombre LIKE '"+arg1+"%'";
    query_consulta.exec(consulta);

    int fila=0;
    ui->tableWidget->setRowCount(0);

    while(query_consulta.next()){
        ui->tableWidget->insertRow(fila);
        ui->tableWidget->setItem(fila, 0, new QTableWidgetItem(query_consulta.value(0).toByteArray().constData()));
        ui->tableWidget->setItem(fila, 1, new QTableWidgetItem(query_consulta.value(1).toByteArray().constData()));
        ui->tableWidget->setItem(fila, 2, new QTableWidgetItem(query_consulta.value(2).toByteArray().constData()));
        ui->tableWidget->setItem(fila, 3, new QTableWidgetItem(query_consulta.value(3).toByteArray().constData()));
        ui->tableWidget->setItem(fila, 4, new QTableWidgetItem(query_consulta.value(4).toByteArray().constData()));
        ui->tableWidget->setItem(fila, 5, new QTableWidgetItem(query_consulta.value(5).toByteArray().constData()));
        ui->tableWidget->setItem(fila, 6, new QTableWidgetItem(query_consulta.value(6).toByteArray().constData()));
        ui->tableWidget->setItem(fila, 7, new QTableWidgetItem(query_consulta.value(7).toByteArray().constData()));
        ui->tableWidget->setItem(fila, 8, new QTableWidgetItem(query_consulta.value(8).toByteArray().constData()));
        fila++;
    }
    conect.Cerrar();
}
