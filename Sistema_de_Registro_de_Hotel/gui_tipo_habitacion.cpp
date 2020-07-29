#include "gui_tipo_habitacion.h"
#include "ui_gui_tipo_habitacion.h"
#include "gui_habitacion.h"


#include "estadohab.h"
#include "utils.h"
#include "conexion.h"


#include "gui_tipo_habitacion.h"
#include "mainwindow.h"
#include <QMessageBox>
#include <iostream>
#include <string>
#include "habitacion.h"
#include "utils.h"

gui_tipo_habitacion::gui_tipo_habitacion(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gui_tipo_habitacion)
{
    this->setFixedSize(QSize(400, 300));
    ui->setupUi(this);
    Utils utils;

    int id = utils.getLastId("habitaciones", "idhabitacion") +1;
    ui->IDTIPOlineEdit->setText(QString::number(id));
}

gui_tipo_habitacion::~gui_tipo_habitacion()
{
    delete ui;
}

void gui_tipo_habitacion::on_pushButton_clicked()
{
    //gui_habitacion guiH;
    //guiH.setModal(true);
    //guiH.exec();
    close();//Permite cerra la ventana actual abierta
}

void gui_tipo_habitacion::on_pushButton_2_clicked()//boton aceptar
{
    Conexion conect;
    conect.Conectar();

    QString idh_= ui->IDTIPOlineEdit->text();
    QString nombretipo_= ui->NOMBRETIPOlineEdit_4->text();
    QString descripcion_tipo = ui->DESTIPOlineEdit_3->text();
    QString precio_= ui->PRECIOTIPOlineEdit_2->text();




    try {
        int tipoHabita = stoi(idh_.toLocal8Bit().data());
        float prec = stoi(precio_.toLocal8Bit().data());
        string descri = descripcion_tipo .toStdString();
        string nomtip = nombretipo_ .toStdString();


        TipoHabitacion tipohabitacion;
        tipohabitacion.setIdTipoHa(tipoHabita);
        tipohabitacion.setPrecio(prec);
        tipohabitacion.setDescricion(descri);
        tipohabitacion.setNombreTipo(nomtip);


       conect.addTipoHabitacion(tipohabitacion );

        if(tipoHabita!=0 &&prec!=0 && descri!="" && nomtip!="" ){
            QMessageBox::information(this, "Mensaje", "Se registró tipo habitacion.");
            close();
        }
    } catch (invalid_argument const &e) {
        QMessageBox::warning(this, "Advertencia", "Ingreso de datos erroneo.");
    }
}
