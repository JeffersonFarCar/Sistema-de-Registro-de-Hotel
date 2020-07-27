#include "gui_cliente.h"
#include "ui_gui_cliente.h"
#include <QMessageBox>
#include <iostream>
#include <string>
#include <QRegExpValidator>

#include "cliente_crud.h"
#include "utils.h"
#include "cliente.h"

using namespace std;

Gui_Cliente::Gui_Cliente(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Gui_Cliente)
{
    ui->setupUi(this);
    //  Obtener último ID de la tabla personas
    Utils utils;
    //Genera y se almacena el ultimo ID de persona y se asigna a cliente
    int id = utils.getLastId("personas", "idpersona") +1;
    ui->lineEdit->setText(QString::number(id));

    validarDatos();
}

bool Gui_Cliente::validarDatos()
{

    /*Inicio Ayuda para ingreso de datos*/
        QRegExp exp_dni("[0-9]{8}");
        QRegExp exp_N_A_C("^([A-ZÁÉÍÓÚ]{1}[a-zñáéíóú]+[\\s]*)+$");
        QRegExp exp_email("[\\w]+@{1}[\\w]+\\.[a-z]{2,3}");

        ui->lineEdit_1->setValidator(new QRegExpValidator(exp_dni, this));
        ui->lineEdit_2->setValidator(new QRegExpValidator(exp_N_A_C, this));
        ui->lineEdit_3->setValidator(new QRegExpValidator(exp_N_A_C, this));
        ui->lineEdit_5->setValidator(new QRegExpValidator(exp_N_A_C, this));
        ui->lineEdit_6->setValidator(new QRegExpValidator(exp_email, this));
    /*Fin Ayuda*/

      /*Comprobación de ingresos correctos*/
        bool ifDni =  exp_dni.exactMatch(ui->lineEdit_1->text());
        bool ifNombre = exp_N_A_C.exactMatch(ui->lineEdit_2->text());
        bool ifApellido = exp_N_A_C.exactMatch(ui->lineEdit_3->text());
        bool ifCiudadania = exp_N_A_C.exactMatch(ui->lineEdit_5->text());
        bool ifEmail = exp_email.exactMatch(ui->lineEdit_6->text());

        if (ui->lineEdit_1->text() ==""){
        }else if(ifDni == false){
            ui->lineEdit_1->setStyleSheet("border: 1px solid red;");
        }else {
            ui->lineEdit_1->setStyleSheet("border: 1px solid green;");
            ifDni = true;
        }

        if (ui->lineEdit_2->text() ==""){
        }else if(ifNombre == false){
             ui->lineEdit_2->setStyleSheet("border: 1px solid red;");
        }else {
            ui->lineEdit_2->setStyleSheet("border: 1px solid green;");
            ifNombre = true;
        }

        if (ui->lineEdit_3->text() ==""){
        }else if(ifApellido == false){
            ui->lineEdit_3->setStyleSheet("border: 1px solid red;");
        }else {
            ui->lineEdit_3->setStyleSheet("border: 1px solid green;");
            ifApellido = true;
        }

        if (ui->lineEdit_4->text() !=""){
            ui->lineEdit_4->setStyleSheet("border: 1px solid green;");
        }

        if (ui->lineEdit_5->text() ==""){
        }else if(ifCiudadania == false){
            ui->lineEdit_5->setStyleSheet("border: 1px solid red;");
        }else {
            ui->lineEdit_5->setStyleSheet("border: 1px solid green;");
            ifCiudadania = true;
        }

        if (ui->lineEdit_6->text() ==""){
        }else if(ifEmail == false){
            ui->lineEdit_6->setStyleSheet("border: 1px solid red;");
        }else {
            ui->lineEdit_6->setStyleSheet("border: 1px solid green;");
            ifEmail = true;
        }

        if(ifDni==true && ifNombre==true && ifApellido==true && ifCiudadania==true && ifEmail==true)
        return true; //Si todos son correctos registra
        else return false; //No registra por almenos un error
}

Gui_Cliente::~Gui_Cliente()
{
    delete ui;
}

void Gui_Cliente::on_groupBox_clicked()
{

}

void Gui_Cliente::on_Aceptar_button_clicked()
{
    Cliente_CRUD ccrud;
    Cliente cliente;

    try {
        if(validarDatos()){
           QString id_str = ui->lineEdit->text();
           QString dni_str = ui->lineEdit_1->text();
           QString nombre_str = ui->lineEdit_2->text();
           QString apellido_str = ui->lineEdit_3->text();
           QString direccion_str = ui->lineEdit_4->text();
           QString ciudadania_str = ui->lineEdit_5->text();
           QString email_str = ui->lineEdit_6->text();

           cliente.setId(stoi(id_str.toLocal8Bit().data()));
           cliente.setDNI(stoi(dni_str.toLocal8Bit().data()));
           cliente.setNombre(nombre_str.toStdString());
           cliente.setApellido(apellido_str.toStdString());
           cliente.setDireccion(direccion_str.toStdString());
           cliente.setEmail(email_str.toStdString());
           cliente.setCiudadania(ciudadania_str.toStdString());

           ccrud.createCliente(cliente);

           QMessageBox::information(this, "Mensaje", "Se registró un nuevo cliente.");
           close();
        }

    } catch (exception &e) {
        QMessageBox::warning(this, "Advertencia", "Revise los datos.");
    }
}


void Gui_Cliente::on_Cancel_button_clicked()
{
    close();//Permite cerra la ventana actual abierta
}
