#include "conexion.h"
#include "cliente.h"
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
    if(db.open())
        qDebug()<<"se conecto";
    else
        qDebug()<<"no se conecto";

}
void  Conexion::Cerrar(){
    //db.close();
}

void Conexion::addPersona(Persona p){
    QSqlQuery query;
    QString nombre = QString::fromLocal8Bit(p.getNombre().c_str());
    QString apellido = QString::fromLocal8Bit(p.getApellido().c_str());
    QString direccion = QString::fromLocal8Bit(p.getDireccion().c_str());
    QString email = QString::fromLocal8Bit(p.getEmail().c_str());

    QString insert = "INSERT INTO personas (dni, nombre, apellido, direccion, email) "
                     "VALUES ("+QString::number(p.getDni())+"'"+nombre+"', '"+apellido+"', "+
                              "'"+direccion+"', '"+email+"');";
}

//Agrega nuevo registro de cliente
void Conexion::addCliente(Cliente a){
    QSqlQuery query;

    QString nombre=QString::fromLocal8Bit(a.getNombre().c_str());
    QString apellido=QString::fromLocal8Bit(a.getApellido().c_str());
    QString direccion=QString::fromLocal8Bit(a.getDireccion().c_str());
    QString email=QString::fromLocal8Bit(a.getEmail().c_str());
    QString ciudadania=QString::fromLocal8Bit(a.getCiudadania().c_str());

    Persona persona (1, 75115094, nombre.toStdString(), apellido.toStdString(), direccion.toStdString(), email.toStdString());
    addPersona(persona);

    QString consulta = "insert into clientes (idpersona, ciudadania) values ("+QString::number(1)+",'"+ciudadania+"');";
    cout<<consulta.toUtf8().constData();
    query.exec(consulta);
    query.isActive();

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
