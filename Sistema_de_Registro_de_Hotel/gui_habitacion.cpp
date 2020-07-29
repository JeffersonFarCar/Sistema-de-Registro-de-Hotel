#include "gui_habitacion.h"
#include "ui_gui_habitacion.h"
#include "gui_tipo_habitacion.h"
#include "mainwindow.h"
#include "gui_estado_habitacion.h"
#include "conexion.h"
#include <QMessageBox>
#include <iostream>
#include <string>
#include "habitacion.h"
#include <QDebug>
#include "utils.h"
using namespace std;

gui_habitacion::gui_habitacion(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gui_habitacion)
{
    ui->setupUi(this);
    Utils utils;

    int id = utils.getLastId("habitaciones", "idhabitacion") +1;
    ui->lineEdit_2->setText(QString::number(id));

    fillComboBox();
    fillComboBox1();
}
void gui_habitacion::fillComboBox(){
    Conexion con;
    con.Conectar();
    QString Query1="SELECT * FROM tipohabitacion";
    QSqlQuery sql1;
    sql1.exec(Query1);

    while(sql1.next()){
        tipohabitaciones.append(sql1.value(0).toByteArray().constData());//agrego lo id de todas los tipos habitaciones
        ui->comboBox->addItem(sql1.value(1).toByteArray().constData());//llena los nombres en el combo box
    }
    con.Cerrar();
}

void gui_habitacion::fillComboBox1(){
    Conexion con;
    con.Conectar();
    QString Query1="SELECT * FROM estadohabitacion";
    QSqlQuery sql1;
    sql1.exec(Query1);

    while(sql1.next()){
        estados.append(sql1.value(0).toByteArray().constData());//agrego lo id de todas los tipos habitaciones
        ui->comboBox_2->addItem(sql1.value(1).toByteArray().constData());//llena los nombres en el combo box
    }
    con.Cerrar();
}
gui_habitacion::~gui_habitacion()
{
    delete ui;
}

void gui_habitacion::on_groupBox_clicked()
{

}

void gui_habitacion::on_pushButton_clicked()
{
    gui_tipo_habitacion guiTH;
    guiTH.setModal(true);
    guiTH.exec();


}

void gui_habitacion::on_pushButton_5_clicked()
{

}

void gui_habitacion::on_pushButton_2_clicked()
{
    gui_estado_habitacion guiEH;
    guiEH.setModal(true);
    guiEH.exec();
}

void gui_habitacion::on_pushButton_3_clicked()
{
    Conexion conect;
    conect.Conectar();

    QString idH_str = ui->lineEdit_2->text();//id habitacion
    QString numP_str= idtipohabitacion;//tipo de habitacion
    QString Habic_str = idestado;//estado habitacion
    QString numH_str = ui->lineEdit_3->text();//numero habitacion



    try {
        int idH = stoi(idH_str.toLocal8Bit().data());
        int numP = stoi(numP_str.toLocal8Bit().data());
        int Habic = stoi(Habic_str.toLocal8Bit().data());
        int numH = stoi(numH_str.toLocal8Bit().data());




        Habitacion habitacion;
        habitacion.setIdHabitacion(idH);
        habitacion.setTipoHabitacion(numP);
        habitacion.setEstadoH(Habic);
        habitacion.setNumHabitacion(numH);
       // habitacion.setNumPiso(numP);




       conect.addHabitacion(habitacion);
        if(idH!=0 && numH!=0 && numP!=0 ){
            QMessageBox::information(this, "Mensaje", "Se registró habitacion.");
            close();
        }
    } catch (invalid_argument const &e) {
        QMessageBox::warning(this, "Advertencia", "Ingreso de datos erroneo.");
    }
}

void gui_habitacion::on_pushButton_4_clicked()
{
    close();//Permite cerra la ventana actual abierta
}

void gui_habitacion::on_comboBox_currentIndexChanged(int index)
{
    //llamar id tipo habitacion para guardar
      if(index!=-1){//verifica esta seleccionando un elemento valido del combobox
          idtipohabitacion=tipohabitaciones.at(index);
          qDebug()<<idtipohabitacion;

      }
}

void gui_habitacion::on_comboBox_2_currentIndexChanged(int index)
{
    if(index!=-1){//verifica esta seleccionando un elemento valido del combobox
        idestado=estados.at(index);
        qDebug()<<idestado;

    }
}
