#include "conexion.h"
#include "empleado.h"
#include "habitacion.h"
#include <iostream>
#include <QtSql>
#include <QtSql/QSqlQuery>
#include <QString>
#include <QtSql/QSqlDatabase>
#include <QDebug>
#include <QtSql>
using namespace std;
Conexion::Conexion()
{

}
void Conexion::Conectar(){
    db=QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("./databasesol.db");
    db.open();
}
void  Conexion::Cerrar(){
    db.close();
}

void Conexion::addEmpleado(Empleado e){
    QSqlQuery query;
    QString nombre=QString::fromLocal8Bit(e.getNombre().c_str());
    QString apellido=QString::fromLocal8Bit(e.getApellido().c_str());
    QString direccion=QString::fromLocal8Bit(e.getDireccion().c_str());
    QString email=QString::fromLocal8Bit(e.getEmail().c_str());
    QString ocupacion=QString::fromLocal8Bit(e.getOcupacion().c_str());
    QString fechaContratacion=QString::fromLocal8Bit(e.getFechaContratacion().c_str());
    QString consulta="insert into empleados (id, nombre, apellido, direccion, email, ocupacion, sueldo, fechaContratacion) values ("+QString::number(e.getId())+",'"+nombre+"','"+apellido+"','"+direccion+"','"+email+"','"+ocupacion+"',"+QString::number(e.getSueldo())+",'"+fechaContratacion+"');";
    cout<<consulta.toUtf8().constData();
    query.exec(consulta);
    query.isActive();

}

void Conexion::addHabitacion(Habitacion a){
    QSqlQuery query;
     // int id =a.getIdHabitacion();
     // int nh =a.getNumHabitacion();
      //int np =a.getNumPiso();


    QString consulta="insert into habitacion (id, Numero_Habitacion, Numero_Piso) values ("+QString::number(3)+",'"+QString::number(2)+"','"+QString::number(2)+"');";
    cout<<consulta.toUtf8().constData();
    query.exec(consulta);
    query.isActive();
}
