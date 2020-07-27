#include "gui_empleado.h"
#include "ui_gui_empleado.h"
#include "conexion.h"
#include "empleado.h"
#include "utils.h"
#include "empleado_crud.h"
#include <QMessageBox>
#include <iostream>
#include <string>
#include <regex>

using namespace std;

Gui_Empleado::Gui_Empleado(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Gui_Empleado)
{
    this->setFixedSize(QSize(397, 432));
    ui->setupUi(this);
    Utils utils;

    int id = utils.getLastId("personas", "idpersona") +1;

    ui->lineEdit_idEmpleado->setText(QString::number(id));
}

Gui_Empleado::~Gui_Empleado()
{
    delete ui;
}

void Gui_Empleado::on_Aceptar_button_clicked(){

        Empleado_Crud ccrud;

        QString idE_str         = ui->lineEdit_idEmpleado->text();
        QString DNIE_str        = ui->lineEdit_DNI->text();
        QString nombreE_str     = ui->lineEdit_nombreE->text();
        QString apellidoE_str   = ui->lineEdit_apellidoE->text();
        QString direccionE_str  = ui->lineEdit_direccionE->text();
        QString emailE_str      = ui->lineEdit_emailE->text();
        QString ocupacionE_str  = ui->lineEdit_ocupacionE->text();
        QString sueldo_str      = ui->lineEdit_sueldoE->text();
        QString fechaE_str       = ui->dateEdit->text();


        try {
            int idE             = stoi(idE_str.toLocal8Bit().data());
            int DNIE            = stoi(DNIE_str.toLocal8Bit().data());
            string nombreE      = nombreE_str.toStdString();
            string apellidoE    = apellidoE_str.toStdString();
            string direccionE   = direccionE_str.toStdString();
            string emailE       = emailE_str.toStdString();
            string ocupacionE   = ocupacionE_str.toStdString();
            double sueldoE      = stoi(sueldo_str.toLocal8Bit().data());
            string fechaE       = fechaE_str.toStdString();


            string sueldoEcon = to_string(sueldoE);
            if(idE>=0 && nombreE!="" && apellidoE!="" && direccionE!="" && emailE!="" && ocupacionE!="" && sueldoE!=NULL){

                Empleado empleado;
                empleado.setId(idE);
                empleado.setFechaContratacion(fechaE);
                    empleado.setNombre(nombreE);
                    empleado.setApellido(apellidoE);
                    empleado.setDireccion(direccionE);
                    empleado.setOcupacion(ocupacionE);
                if(!std::isdigit(DNIE) && std::to_string(DNIE).length()==8 && !std::isdigit(sueldoE)){
                    empleado.setDNI(DNIE);
                    empleado.setSueldo(sueldoE);
                if (regex_match(emailE, regex("([a-z]+)([_.a-z0-9]*)([a-z0-9]+)(@)([a-z]+)([.a-z]+)([a-z]+)"))){
                    empleado.setEmail(emailE);

                    ccrud.createEmpleado(empleado);
                    QMessageBox::information(this, "Mensaje", "Se registró un nuevo Empleado.");
                    close();
                }
                else{
                    QMessageBox::warning(this, "Advertencia", "Ingreso el EMAIL incorrecto.");
                }
                }else{
                    QMessageBox::warning(this, "Advertencia", "Ingreso el SUELDO o DNI incorrecto.");
                }
                }

       }
        catch (invalid_argument const &e) {
            QMessageBox::warning(this, "Advertencia", "Ingreso de datos erroneo.");
        }
}


void Gui_Empleado::on_Cancel_button_clicked()
{
    close();//Permite cerra la ventana actual abierta
}





