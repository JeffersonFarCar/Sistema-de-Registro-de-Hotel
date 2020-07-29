#include "gui_estado_habitacion.h"
#include "ui_gui_estado_habitacion.h"
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
#include <QDebug>
using namespace std;
gui_estado_habitacion::gui_estado_habitacion(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gui_estado_habitacion)
{
    ui->setupUi(this);
    Utils utils;

    int id = utils.getLastId("estadohabitacion", "idestadohab") +1;
    ui->IDESTADOlineEdit->setText(QString::number(id));
    fillComboBox();
}

void gui_estado_habitacion::fillComboBox(){
    Conexion con;
    con.Conectar();
    QString Query1="SELECT * FROM estadohabitacion";
    QSqlQuery sql1;
    sql1.exec(Query1);

    while(sql1.next()){
        estados.append(sql1.value(1).toByteArray().constData());//agrego lo id de todas los tipos habitaciones
        ui->comboBox->addItem(sql1.value(1).toByteArray().constData());//llena los nombres en el combo box
    }
    con.Cerrar();
}


gui_estado_habitacion::~gui_estado_habitacion()
{
    delete ui;
}

void gui_estado_habitacion::on_pushButton_clicked()
{
    //gui_habitacion guiH;
    //guiH.setModal(true);
    //guiH.exec();
    close();//Permite cerra la ventana actual abierta
}

void gui_estado_habitacion::on_pushButton_2_clicked()
{
    Conexion conect;
    conect.Conectar();

    QString idestado_estadohabitacion = ui->IDESTADOlineEdit->text();
    //QString descripcion = ui->lineEdit_2_estado->text();
    QString descripcion = idestado;


    try {
        int id = stoi(idestado_estadohabitacion.toLocal8Bit().data());
        string descri = descripcion .toStdString();

        EstadoHab estadoHab;
        estadoHab.setDescripcion(descri);
        estadoHab.setIdEstado(id);

       conect.addEstadoHabitacion(estadoHab);
        if(id!=0 && descri!=""  ){
            QMessageBox::information(this, "Mensaje", "Se registró estado.");
            close();
        }
    } catch (invalid_argument const &e) {
        QMessageBox::warning(this, "Advertencia", "Ingreso de datos erroneo.");
    }
}

void gui_estado_habitacion::on_comboBox_currentIndexChanged(int index)
{
    if(index!=-1){//verifica esta seleccionando un elemento valido del combobox
            idestado=estados.at(index);
            qDebug()<<idestado;
    }
}
