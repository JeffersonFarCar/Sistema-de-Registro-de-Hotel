#include "conexion.h"
#include "cliente.h"
#include <iostream>
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
    db.setDatabaseName("databasesol.db");
    if(db.open())
        qDebug()<<"se conecto";
    else
        qDebug()<<"no se conecto";

}
void  Conexion::Cerrar(){
    //db.close();
}
void Conexion::addCliente(Cliente a){
    QSqlQuery query;
    QString nombre=QString::fromLocal8Bit(a.getNombre().c_str());
    QString apellido=QString::fromLocal8Bit(a.getApellido().c_str());
    QString direccion=QString::fromLocal8Bit(a.getDireccion().c_str());
    QString email=QString::fromLocal8Bit(a.getEmail().c_str());
    QString ciudadania=QString::fromLocal8Bit(a.getCiudadania().c_str());
    QString consulta="insert into clientes3 (id, nombre, apellido, direccion, email, ciudadania) values ("+QString::number(1)+",'"+nombre+"','"+apellido+"','"+direccion+"','"+email+"','"+ciudadania+"');";
    cout<<consulta.toUtf8().constData();
    query.exec(consulta);
    query.isActive();

}
