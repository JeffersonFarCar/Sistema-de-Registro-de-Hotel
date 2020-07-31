#include "gui_index_empleado.h"
#include "ui_gui_index_empleado.h"
#include "gui_empleado.h"
#include "ui_gui_empleado.h"
#include "conexion.h"
#include "empleado_crud.h"

#include <QtSql>
#include <QtSql/QSqlQuery>
#include <QString>
#include <QtSql/QSqlDatabase>
#include <QStandardItemModel>
#include <QTableWidget>
#include <QTableWidgetItem>
#include <QMessageBox>
#include <regex>

using namespace std;

Empleado_Crud crudE; //Para poder elminiar y modificar

Gui_Index_Empleado::Gui_Index_Empleado(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Gui_Index_Empleado)
{
    this->setFixedSize(QSize(776, 380));

    ui->setupUi(this);
    u=0;
    f=-1;
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    mostrarDatos();
}

void Gui_Index_Empleado::mostrarDatos()
{
    prepararTabla();

    Conexion conect;
    conect.Conectar();

    QSqlQuery query_consulta;
    QString consulta="SELECT idpersona, dni, contra, nombre, apellido, direccion, email, sueldo, ocupacion, fecha "
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
        ui->tableWidget->setItem(fila, 9, new QTableWidgetItem(query_consulta.value(9).toByteArray().constData()));
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
    QString id = ui->tableWidget->item(f,0)->text();
    QMessageBox::StandardButton action;
    action = QMessageBox::question(this, "Cuidado", "¿Está seguro que desa borrar el dato?");
    if(action == QMessageBox::Yes)
        crudE.deleteEmpleado(id.toInt());
        mostrarDatos();
}

void Gui_Index_Empleado::on_tableWidget_itemClicked(QTableWidgetItem *item)
{
    //Almacena el entero de la fila seleccionada, para borrar o modificar
    f = item->row();

    //Cpaturar datos para poder modificarlo
    QTableWidgetItem *dni       = ui->tableWidget->item(f,1);
    QTableWidgetItem *contra    = ui->tableWidget->item(f,2);
    QTableWidgetItem *nombre    = ui->tableWidget->item(f,3);
    QTableWidgetItem *apellido  = ui->tableWidget->item(f,4);
    QTableWidgetItem *direccion = ui->tableWidget->item(f,5);
    QTableWidgetItem *email     = ui->tableWidget->item(f,6);
    QTableWidgetItem *sueldo    = ui->tableWidget->item(f,7);
    QTableWidgetItem *ocupacion = ui->tableWidget->item(f,8);

    //Recuperar datos de la tabla a los texedit para modificar
    ui->lineEditDNIModi->setText(dni->text());
    ui->lineEditContraModi->setText(contra->text());
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

    Empleado empleado;
    try {
        if(validarDatos()){
            int dni_E           = stoi(ui->lineEditDNIModi->text().toLocal8Bit().data());
            string contra       = ui->lineEditContraModi->text().toStdString();
            string nombre       = ui->lineEditNombreModi->text().toStdString();
            string apellido     = ui->lineEditApellidoModi->text().toStdString();
            string direccion    = ui->lineEditDireccionModi->text().toStdString();
            string email        = ui->lineEditEmailModi->text().toStdString();
            double sueldo       = stod(ui->lineEditSueldoModi->text().toLocal8Bit().data());
            string ocupacion = ui->lineEditOcupacionModi->text().toStdString();

            QString id = ui->tableWidget->item(f,0)->text();
            empleado.setId(id.toInt());
            empleado.setDNI(dni_E);
            empleado.setContrasena(contra);
            empleado.setNombre(nombre);
            empleado.setApellido(apellido);
            empleado.setDireccion(direccion);
            empleado.setEmail(email);
            empleado.setOcupacion(ocupacion);
            empleado.setSueldo(sueldo);

            //Mensaje de Alerta
            action = QMessageBox::question(this, "Cuidado", "¿Está seguro que desa editar el dato?");
            if(action == QMessageBox::Yes){
                crudE.updateEmpleado(empleado); //Realizar Cambios
                mostrarDatos();
                QMessageBox::information(this, "Mensaje", "Cambios realizados correctamente.");
            } else{ QMessageBox::information(this,"Mensaje","No se realizó ningun cambio"); }
        }
    } catch (exception  &e) {
        QMessageBox::warning(this, "Advertencia", "Problema al editar, revisa los datos.");
    }

    }

bool Gui_Index_Empleado::validarDatos()
{

    /*Inicio Ayuda para ingreso de datos*/
        QRegExp exp_dni("[0-9]{8}");
        QRegExp exp_N_A_O("^([A-ZÁÉÍÓÚ]{1}[a-zñáéíóú]+[\\s]*)+$");
        QRegExp exp_email("[\\w]+@{1}[\\w]+\\.[a-z]{2,3}");
        QRegExp exp_sueldo("[0-9]+(\.[0-9][0-9]?)?");

        ui->lineEditDNIModi->setValidator(new QRegExpValidator(exp_dni, this));
        ui->lineEditNombreModi->setValidator(new QRegExpValidator(exp_N_A_O, this));
        ui->lineEditApellidoModi->setValidator(new QRegExpValidator(exp_N_A_O, this));
        ui->lineEditEmailModi->setValidator(new QRegExpValidator(exp_email, this));
        ui->lineEditSueldoModi->setValidator(new QRegExpValidator(exp_sueldo,this));
        ui->lineEditOcupacionModi->setValidator(new QRegExpValidator(exp_N_A_O,this));

        /*Fin Ayuda*/

        /*Comprobación de ingresos correctos*/
          bool ifDni        =  exp_dni.exactMatch(ui->lineEditDNIModi->text());
          bool ifNombre     = exp_N_A_O.exactMatch(ui->lineEditNombreModi->text());
          bool ifApellido   = exp_N_A_O.exactMatch(ui->lineEditApellidoModi->text());
          bool ifEmail      = exp_email.exactMatch(ui->lineEditEmailModi->text());
          bool ifSueldo     = exp_sueldo.exactMatch(ui->lineEditSueldoModi->text());
          bool ifOcupacion  = exp_N_A_O.exactMatch(ui->lineEditOcupacionModi->text());


        if(ifDni == false){
            ui->lineEditDNIModi->setStyleSheet("border: 1px solid red;");
        }else {
            ui->lineEditDNIModi->setStyleSheet("border: 1px solid green;");
            ifDni =true;
        }

        if(ifNombre == false){
             ui->lineEditNombreModi->setStyleSheet("border: 1px solid red;");
        }else {
            ui->lineEditNombreModi->setStyleSheet("border: 1px solid green;");
            ifNombre = true;
        }

        if(ifApellido == false){
            ui->lineEditApellidoModi->setStyleSheet("border: 1px solid red;");
        }else {
            ui->lineEditApellidoModi->setStyleSheet("border: 1px solid green;");
            ifApellido = true;
        }

        if (ui->lineEditDireccionModi->text() !=""){
            ui->lineEditDireccionModi->setStyleSheet("border: 1px solid green;");
        }

        if(ifEmail == false){
            ui->lineEditEmailModi->setStyleSheet("border: 1px solid red;");
        }else {
            ui->lineEditEmailModi->setStyleSheet("border: 1px solid green;");
            ifEmail = true;
        }

        if(ifSueldo == false){
            ui->lineEditSueldoModi->setStyleSheet("border: 1px solid red;");
        }else {
            ui->lineEditSueldoModi->setStyleSheet("border: 1px solid green;");
            ifSueldo = true;
        }

        if(ifOcupacion == false){
            ui->lineEditOcupacionModi->setStyleSheet("border: 1px solid red;");
        }
        else{
            ui->lineEditOcupacionModi->setStyleSheet("border: 1px solid green;");
        }

        if (ui->lineEditContraModi->text() !=""){
            ui->lineEditContraModi->setStyleSheet("border: 1px solid green;");
        }

        if(ifDni==true && ifNombre==true && ifApellido==true && ifOcupacion==true && ifEmail==true && ifSueldo==true)
        return true; //Si todos son correctos registra
        else return false; //No registra por almenos un error
}

void Gui_Index_Empleado::prepararTabla(){
    /*----Preparacion de la tabla----*/
      ui->tableWidget->setColumnCount(10);
      QStringList l;
      l<<"ID"<<"DNI"<<"Contraseña"<<"Nombre"<<"Apellido"<<"Direccion"<<"Email"<<"Sueldo"<<"Ocupacion"<<"Fecha Contratacion";

      ui->tableWidget->setHorizontalHeaderLabels(l);
      ui->tableWidget->setColumnWidth(0,80);
      ui->tableWidget->setColumnWidth(1,120);
      ui->tableWidget->setColumnWidth(2,120);
      ui->tableWidget->setColumnWidth(3,120);
      ui->tableWidget->setColumnWidth(4,150);
      ui->tableWidget->setColumnWidth(5,120);
      ui->tableWidget->setColumnWidth(6,120);
      ui->tableWidget->setColumnWidth(7,120);
      ui->tableWidget->setColumnWidth(8,120);
      ui->tableWidget->setColumnWidth(9,120);

      /*----Fin preparacion de la tabla----*/
}

void Gui_Index_Empleado::on_lineEdit_buscarEmpleado_textChanged(const QString &arg1)
{
    ui->tableWidget->clear();
    prepararTabla();
    Conexion conect;
    conect.Conectar();

    QSqlQuery query_consulta;
    QString consulta="SELECT idpersona, dni,contra, nombre, apellido, direccion, email, sueldo, ocupacion, fecha "
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
        ui->tableWidget->setItem(fila, 9, new QTableWidgetItem(query_consulta.value(9).toByteArray().constData()));
        fila++;
    }
    conect.Cerrar();
}
