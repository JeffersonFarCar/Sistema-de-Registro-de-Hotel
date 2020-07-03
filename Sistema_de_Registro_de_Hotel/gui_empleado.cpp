#include "gui_empleado.h"
#include "ui_gui_empleado.h"

#include <QMessageBox>
#include <iostream>
#include <string>

using namespace std;

Gui_Empleado::Gui_Empleado(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Gui_Empleado)
{
    ui->setupUi(this);
}

Gui_Empleado::~Gui_Empleado()
{
    delete ui;
}

void Gui_Empleado::on_Aceptar_button_clicked(){
        QString idE_str         = ui->lineEdit_idEmpleado->text();
        QString nombreE_str     = ui->lineEdit_nombreE->text();
        QString apellidoE_str   = ui->lineEdit_apellidoE->text();
        QString direccionE_str  = ui->lineEdit_direccionE->text();
        QString emailE_str      = ui->lineEdit_emailE->text();
        QString ocupacionE_str  = ui->lineEdit_ocupacionE->text();
        QString sueldo_str      = ui->lineEdit_sueldoE->text();

        try {
            int idE             = stoi(idE_str.toLocal8Bit().data());
            string nombreE      = nombreE_str.toStdString();
            string apellidoE    = apellidoE_str.toStdString();
            string direccionE   = direccionE_str.toStdString();
            string emailE       = emailE_str.toStdString();
            string ocupacionE   = ocupacionE_str.toStdString();
            double sueldoE      = stoi(sueldo_str.toLocal8Bit().data());

            if(idE!=NULL && nombreE!="" && apellidoE!="" && direccionE!="" && emailE!="" && ocupacionE!="" && sueldoE!=NULL){
                QMessageBox::information(this, "Mensaje", "Se registró un nuevo Empleado.");
                close();
            }

        }
        catch (invalid_argument const &e) {
            QMessageBox::warning(this, "Advertencia", "Ingreso de datos erroneo.");
        }
}

void Gui_Empleado::on_Cancelar_button_clicked()
{
    close();//Permite cerra la ventana actual abierta
}
