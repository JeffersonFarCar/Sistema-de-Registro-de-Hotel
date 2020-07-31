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
    this->setFixedSize(QSize(397, 474));

    ui->setupUi(this);
    Utils utils;

    int id = utils.getLastId("personas", "idpersona") +1;

    ui->lineEdit_idEmpleado->setText(QString::number(id));

    validarDatos();
}

Gui_Empleado::~Gui_Empleado()
{
    delete ui;
}

void Gui_Empleado::on_Aceptar_button_clicked(){

        Empleado_Crud ecrud;
        Empleado empleado;

        try {
            if(validarDatos()){
                QString idE_str         = ui->lineEdit_idEmpleado->text();
                QString DNIE_str        = ui->lineEdit_DNI->text();
                QString contraE_str      = ui->lineEdit_contrasenaE->text();
                QString nombreE_str     = ui->lineEdit_nombreE->text();
                QString apellidoE_str   = ui->lineEdit_apellidoE->text();
                QString direccionE_str  = ui->lineEdit_direccionE->text();
                QString emailE_str      = ui->lineEdit_emailE->text();
                QString ocupacionE_str  = ui->lineEdit_ocupacionE->text();
                QString sueldo_str      = ui->lineEdit_sueldoE->text();
                QString fechaE_str       = ui->dateEdit->text();


               empleado.setId(stoi(idE_str.toLocal8Bit().data()));
               empleado.setDNI(stoi(DNIE_str.toLocal8Bit().data()));
               empleado.setContrasena(contraE_str.toStdString());
               empleado.setNombre(nombreE_str.toStdString());
               empleado.setApellido(apellidoE_str.toStdString());
               empleado.setDireccion(direccionE_str.toStdString());
               empleado.setEmail(emailE_str.toStdString());
               empleado.setOcupacion(ocupacionE_str.toStdString());
               empleado.setSueldo(stod(sueldo_str.toLocal8Bit().data()));
               empleado.setFechaContratacion(fechaE_str.toStdString());


               ecrud.createEmpleado(empleado);

               QMessageBox::information(this, "Mensaje", "Se registró un nuevo empleado.");
               close();
            }

        } catch (exception &e) {
            QMessageBox::warning(this, "Advertencia", "Revise los datos.");
        }




}

bool Gui_Empleado::validarDatos()
{

    /*Inicio Ayuda para ingreso de datos*/
        QRegExp exp_dni("[0-9]{8}");
        QRegExp exp_N_A_O("^([A-ZÁÉÍÓÚ]{1}[a-zñáéíóú]+[\\s]*)+$");
        QRegExp exp_email("[\\w]+@{1}[\\w]+\\.[a-z]{2,3}");
        QRegExp exp_sueldo("[0-9]+(\.[0-9][0-9]?)?");

        ui->lineEdit_DNI->setValidator(new QRegExpValidator(exp_dni,this));
        ui->lineEdit_nombreE->setValidator(new QRegExpValidator(exp_N_A_O, this));
        ui->lineEdit_apellidoE->setValidator(new QRegExpValidator(exp_N_A_O, this));
        ui->lineEdit_emailE->setValidator(new QRegExpValidator(exp_email, this));
        ui->lineEdit_ocupacionE->setValidator(new QRegExpValidator(exp_N_A_O, this));
        ui->lineEdit_sueldoE->setValidator(new QRegExpValidator(exp_sueldo,this));
        /*Fin Ayuda*/

      /*Comprobación de ingresos correctos*/
        bool ifDni          = exp_dni.exactMatch(ui->lineEdit_DNI->text());
        bool ifNombre       = exp_N_A_O.exactMatch(ui->lineEdit_nombreE->text());
        bool ifApellido     = exp_N_A_O.exactMatch(ui->lineEdit_apellidoE->text());
        bool ifEmail        = exp_email.exactMatch(ui->lineEdit_emailE->text());
        bool ifOcupacion    = exp_N_A_O.exactMatch(ui->lineEdit_ocupacionE->text());
        bool ifSueldo       = exp_sueldo.exactMatch(ui->lineEdit_sueldoE->text());


        if (ui->lineEdit_DNI->text() == ""){
        }else if(ifDni == false){
            ui->lineEdit_DNI->setStyleSheet("border: 1px solid red;");
        }else {
            ui->lineEdit_DNI->setStyleSheet("border: 1px solid green;");
            ifDni = true;
        }

        if (ui->lineEdit_nombreE->text() == ""){
        }else if(ifNombre == false){
             ui->lineEdit_nombreE->setStyleSheet("border: 1px solid red;");
        }else {
            ui->lineEdit_nombreE->setStyleSheet("border: 1px solid green;");
            ifNombre = true;
        }

        if (ui->lineEdit_apellidoE->text() ==""){
        }else if(ifApellido == false){
            ui->lineEdit_apellidoE->setStyleSheet("border: 1px solid red;");
        }else {
            ui->lineEdit_apellidoE->setStyleSheet("border: 1px solid green;");
            ifApellido = true;
        }

        if (ui->lineEdit_direccionE->text() !=""){
            ui->lineEdit_direccionE->setStyleSheet("border: 1px solid green;");
        }

        if (ui->lineEdit_emailE->text() == ""){
        }else if(ifEmail == false){
            ui->lineEdit_emailE->setStyleSheet("border: 1px solid red;");
        }else {
            ui->lineEdit_emailE->setStyleSheet("border: 1px solid green;");
            ifEmail = true;
        }

        if (ui->lineEdit_ocupacionE->text() == ""){
        }else if(ifOcupacion == false){
            ui->lineEdit_ocupacionE->setStyleSheet("border: 1px solid red;");
        }else {
            ui->lineEdit_ocupacionE->setStyleSheet("border: 1px solid green;");
            ifOcupacion = true;
        }

        if(ui->lineEdit_sueldoE->text() == "" ){
        }else if(ifSueldo == false){
            ui->lineEdit_sueldoE->setStyleSheet("border: 1px solid red;");
        }else{
            ui->lineEdit_sueldoE->setStyleSheet("border: 1px solid green;");
            ifSueldo = true;
        }

        if (ui->dateEdit->text() !=""){
            ui->dateEdit->setStyleSheet("border: 1px solid green;");
        }
        if (ui->lineEdit_contrasenaE->text() !=""){
            ui->lineEdit_contrasenaE->setStyleSheet("border: 1px solid green;");
        }

        if(ifDni==true && ifNombre==true && ifApellido==true && ifOcupacion==true && ifEmail==true && ifSueldo==true)
        return true; //Si todos son correctos registra
        else return false; //No registra por almenos un error
}

void Gui_Empleado::on_Cancel_button_clicked()
{
    close();//Permite cerra la ventana actual abierta
}







