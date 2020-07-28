#include "gui_edit_registro.h"
#include "ui_gui_edit_registro.h"

#include <QSqlQuery>
#include <QDebug>
#include <QMessageBox>

#include "gui_registro_habitacion.h"
#include "conexion.h"
#include "registro_habitacion_crud.h"
#include "utils.h"
#include "registro_crud.h"

GUI_Edit_Registro::GUI_Edit_Registro(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GUI_Edit_Registro)
{
    this->setFixedSize(QSize(433, 446));
    ui->setupUi(this);
}

GUI_Edit_Registro::~GUI_Edit_Registro()
{
    delete ui;
}

void GUI_Edit_Registro::setEditRegistro(int _id){
    Conexion conn;
    conn.Conectar();
    QString query = "SELECT idhabitacion FROM registro_habitacion WHERE idregistro = "+QString::number(_id+1);
    QSqlQuery sql;
    sql.exec(query);
    while(sql.next()){
        habitacionesOri.append(sql.value(0).toByteArray());
    }
    conn.Cerrar();
    idRegistroEdit = _id+1;
    ui->idR_Edit_LineEdit->setText(QString::number(idRegistroEdit));
    cargarDatos();
}

void GUI_Edit_Registro::cargarDatos(){
    Conexion conn;
    conn.Conectar();
    QString query = "SELECT idpersona, nombre, fechaE, fechaS "
                    "FROM personas INNER JOIN registros "
                    "ON idpersona=idpersona_c "
                    "WHERE idregistro = "+QString::number(idRegistroEdit);
    QSqlQuery sql;
    sql.exec(query);

    while(sql.next()){
        ui->idC_Edit_LineEdit->setText(sql.value(0).toByteArray());
        ui->nomC_Edit_LineEdit->setText(sql.value(1).toByteArray());
        QDate dateE = QDate::fromString(sql.value(2).toByteArray(), "d/MM/yyyy");
        QDate dateS = QDate::fromString(sql.value(3).toByteArray(), "d/MM/yyyy");
        ui->Edit_fechaE->setDate(dateE);
        ui->Edit_fechaS->setDate(dateS);
    }
    conn.Cerrar();
}

void GUI_Edit_Registro::on_habit_Edit_Button_clicked()
{
    Registro_habitacion rh;
    rh.setIdRegistro(ui->idR_Edit_LineEdit->text().toInt());
    rh.setModal(true);
    rh.exec();
}

void GUI_Edit_Registro::on_Editar_Button_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Guardar", "¿Desea guardar los cambios?",
                                    QMessageBox::Yes|QMessageBox::No);
    if(reply == QMessageBox::Yes){
        Registro_CRUD rc;
        rc.updateRegistro(ui->Edit_fechaS->text(), QString::number(idRegistroEdit));
        close();
    }
}

void GUI_Edit_Registro::on_Cancelar_button_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Salir", "Los cambios no se guardaran\n"
                                                 "¿Esta seguro que desea salir?",
                                    QMessageBox::Yes|QMessageBox::No);
    if(reply == QMessageBox::Yes){
       QStringList ids;
       Conexion conn;
       conn.Conectar();
       QString query = "SELECT idhabitacion FROM registro_habitacion WHERE idregistro = "+QString::number(idRegistroEdit);
       QSqlQuery sql;
       sql.exec(query);
       while(sql.next()){
           if(habitacionesOri.indexOf(sql.value(0).toByteArray()) == -1){
               qDebug()<<">>>>>>>>>"<<sql.value(0).toByteArray();
               ids.append(sql.value(0).toByteArray());
           }
       }
       conn.Cerrar();

       Registro_Habitacion_CRUD rhc;
       rhc.DeleteRegistro_Habitacion(QString::number(idRegistroEdit));
       Utils u;
       for(QString id:habitacionesOri){
           rhc.CreateRegistro_Habitacion("registro_habitacion", "("+QString::number(idRegistroEdit)+", "+id+")");
           u.updateEstado("habitaciones", "idestado = 2", "idhabitacion = "+id);
       }
       for(QString id:ids){
           u.updateEstado("habitaciones", "idestado = 1", "idhabitacion = "+id);
       }
       close();
    }
}
