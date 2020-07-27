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

    QString dniE_str = ui->lineEditDNIModi->text();
    QString nombreE_str = ui->lineEditNombreModi->text();
    QString apellidoE_str = ui->lineEditApellidoModi->text();
    QString direccionE_str = ui->lineEditDireccionModi->text();
    QString emailE_str = ui->lineEditEmailModi->text();
    QString sueldoE_str = ui->lineEditSueldoModi->text();
    QString ocupacionE_str = ui->lineEditOcupacionModi->text();

    try {
        int dniE            = stoi(dniE_str.toLocal8Bit().data());
        string nombreE      = nombreE_str.toStdString();
        string apellidoE    = apellidoE_str.toStdString();
        string direccionE   = direccionE_str.toStdString();
        string emailE       = emailE_str.toStdString();
        double sueldoE      = stoi(sueldoE_str.toLocal8Bit().data());
        string ocupacionE   = ocupacionE_str.toStdString();

        if(dniE>=0 && nombreE!="" && apellidoE!="" && direccionE!="" && direccionE!="" && emailE!="" && sueldoE!=NULL && ocupacionE!=""){
           Empleado empleado;
            try {
                QString id = ui->tableWidget->item(f,0)->text();

                empleado.setId(id.toInt());

                empleado.setNombre(nombreE);
                empleado.setApellido(apellidoE);
                empleado.setDireccion(direccionE);
                empleado.setOcupacion(ocupacionE);

                if(!std::isdigit(dniE) && std::to_string(dniE).length()==8 && !std::isdigit(sueldoE)){
                    empleado.setDNI(dniE);
                    empleado.setSueldo(sueldoE);
                    if (regex_match(emailE, regex("([a-z]+)([_.a-z0-9]*)([a-z0-9]+)(@)([a-z]+)([.a-z]+)([a-z]+)"))){
                    empleado.setEmail(emailE);

                    if(regex_match(nombreE,regex("^([A-ZÁÉÍÓÚ]{1}[a-zñáéíóú]+[\\s]*)+$"))){
                        empleado.setNombre(nombreE);
                     if(regex_match(apellidoE,regex("^([A-ZÁÉÍÓÚ]{1}[a-zñáéíóú]+[\\s]*)+$"))) {
                        empleado.setApellido(apellidoE);
                     if(regex_match(ocupacionE,regex("^([A-ZÁÉÍÓÚ]{1}[a-zñáéíóú]+[\\s]*)+$"))){
                        empleado.setOcupacion(ocupacionE);


                        crudE.updateEmpleado(empleado);
                        mostrarDatos();


                    }
                    else{
                         QMessageBox::warning(this, "Advertencia", "Ingreso OCUPACION incorrecta, comenzar con mayúscula.");
                     }

                     }
                     else{
                         QMessageBox::warning(this, "Advertencia", "Ingreso APELLIDO incorrecto, comenzar con mayúscula.");
                     }
                     }
                     else{
                         QMessageBox::warning(this, "Advertencia", "Ingreso NOMBRE incorrecto, comenzar con mayúscula.");
                     }
                     }
                     else{
                        QMessageBox::warning(this, "Advertencia", "Ingreso el EMAIL incorrecto.");
                    }
                    }
                    else{
                        QMessageBox::warning(this, "Advertencia", "Ingreso el SUELDO o DNI incorrecto.");
                    }
                    }

           catch (exception const &e) {
                QMessageBox::warning(this, "Advertencia", "Problema al editar.");
           }


           }
        }
        catch (exception const &e) {
                    QMessageBox::warning(this, "Advertencia", "Problema al editar.");
        }

     }
     else{
        QMessageBox::information(this,"Mensaje","No se realizo ningun cambio");
        }

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
