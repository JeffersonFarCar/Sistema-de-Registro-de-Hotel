#include "gui_cliente.h"
#include "ui_gui_cliente.h"
#include "conexion.h"
#include "cliente.h"
#include <QMessageBox>
#include <iostream>
#include <string>
using namespace std;

Gui_Cliente::Gui_Cliente(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Gui_Cliente)
{
    ui->setupUi(this);
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
    Conexion conect;
    conect.Conectar();
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
        Cliente cliente;
        cliente.setNombre(nombre); cliente.setApellido(apellido); cliente.setDireccion(direccion);
        cliente.setEmail(email); cliente.setCiudadania(ciudadania);
        conect.addCliente(cliente);
        if(nombre!="" && apellido!="" && direccion!="" && ciudadania!="" && email!=""){
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
