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
    if(db.open())
        qDebug()<<"se conecto";
    else
        qDebug()<<"no se conecto";

}
void  Conexion::Cerrar(){
    db.close();
    if(db.isOpen()){
        qDebug()<<">>>>>>still here";
    }else{
        qDebug()<<">>>>>>se cerro";
    }
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
     qDebug()<<"laasddvqwdvqwkbdqliwd879a1\n";
            std::string x = std::to_string(a.getIdHabitacion());
            std::string b = std::to_string(a.getNumPiso());
            std::string c = std::to_string(a.getEstadoH());
            std::string d = std::to_string(a.getNumHabitacion());
            qDebug()<<"laasddvqwdvqwkbdqliwd879a2\n";

            QString x1=QString::fromLocal8Bit(x.c_str());
            QString b1=QString::fromLocal8Bit(b.c_str());
            QString c1=QString::fromLocal8Bit(c.c_str());
            QString c2=QString::fromLocal8Bit(d.c_str());
             qDebug()<<"laasddvqwdvqwkbdqliwd879a3\n";
            QString consulta="insert into habitaciones (idhabitacion,idtipohab,idestado,numerohab) values ("+x1+","+c1+","+c2+","+b1+");";
           //QString consulta="insert into prueba (id) values (1);";
            qDebug()<<consulta;


            query.exec(consulta);
            query.isActive();
}
