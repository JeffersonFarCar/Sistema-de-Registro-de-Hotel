#include "gui_cliente.h"
#include "ui_gui_cliente.h"
#include <QMessageBox>
#include <iostream>
#include <string>

#include "cliente_crud.h"
#include "utils.h"
#include "cliente.h"

using namespace std;

Gui_Cliente::Gui_Cliente(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Gui_Cliente)
{
    ui->setupUi(this);

    Utils utils;
    int id = utils.getLastId("personas", "idpersona") +1;

    ui->lineEdit->setText(QString::number(id));
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

    QString id_str = ui->lineEdit->text();
    QString nombre_str = ui->lineEdit_2->text();
    QString apellido_str = ui->lineEdit_3->text();
    QString direccion_str = ui->lineEdit_4->text();
    QString ciudadania_str = ui->lineEdit_5->text();
    QString email_str = ui->lineEdit_6->text();
    try {
        int id_C = stoi(id_str.toLocal8Bit().data());
        string nombre = nombre_str.toStdString();
        string apellido = apellido_str.toStdString();
        string direccion = direccion_str.toStdString();
        string ciudadania = ciudadania_str.toStdString();
        string email = email_str.toStdString();

        if(id_C>=0 && nombre!="" && apellido!="" && direccion!="" && ciudadania!="" && email!=""){
            Cliente cliente;
            cliente.setId(id_C);
            cliente.setNombre(nombre); cliente.setApellido(apellido); cliente.setDireccion(direccion);
            cliente.setEmail(email); cliente.setCiudadania(ciudadania);

            ccrud.createCliente(cliente);

            QMessageBox::information(this, "Mensaje", "Se registró un nuevo cliente.");
            close();
        }
    } catch (invalid_argument const &e) {
        QMessageBox::warning(this, "Advertencia", "El ID de Cliente debe ser númerico.");
    }

}

void Gui_Cliente::on_Cancel_button_clicked()
{
    close();//Permite cerra la ventana actual abierta
}
