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
