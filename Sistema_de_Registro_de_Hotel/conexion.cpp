#include "conexion.h"
#include "empleado.h"
#include "habitacion.h"
#include "estadohab.h"
#include "tipohabitacion.h"
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
    db.setDatabaseName("./registro_hotel.db");
    db.open();
}
void  Conexion::Cerrar(){
    db.close();
}

void Conexion::addHabitacion(Habitacion a){
    QSqlQuery query;
     qDebug()<<"laasddvqwdvqwkbdqliwd879a1\n";
            std::string x = std::to_string(a.getIdHabitacion());
            std::string b = std::to_string(a.getTipoHabitacion());
            std::string c = std::to_string(a.getEstadoH());
            std::string d = std::to_string(a.getNumHabitacion());
            qDebug()<<"laasddvqwdvqwkbdqliwd879a2\n";

            QString x1=QString::fromLocal8Bit(x.c_str());
            QString b1=QString::fromLocal8Bit(b.c_str());
            QString c1=QString::fromLocal8Bit(c.c_str());
            QString c2=QString::fromLocal8Bit(d.c_str());
             qDebug()<<"laasddvqwdvqwkbdqliwd879a3\n";
            QString consulta="insert into habitaciones (idhabitacion,idtipohab,idestado,numerohab) values ("+x1+","+b1+","+c1+","+c2+");";
           //QString consulta="insert into prueba (id) values (1);";
            qDebug()<<consulta;


            query.exec(consulta);
            query.isActive();
}

void Conexion::addEstadoHabitacion(EstadoHab a){
    QSqlQuery query;
     qDebug()<<"laasddvqwdvqwkbdqliwd879a1\n";
            std::string x = std::to_string(a.getIdEstado());
            qDebug()<<"laasddvqwdvqwkbdqliwd879a2\n";

            QString x1=QString::fromLocal8Bit(x.c_str());
            QString descripcion=QString::fromLocal8Bit(a.getDescripcion().c_str());

             qDebug()<<"laasddvqwdvqwkbdqliwd879a3\n";

           QString consulta="insert into estadohabitacion (idestadohab,estadoname) values ("+x1+", '"+descripcion+"');";
            qDebug()<<consulta;


            query.exec(consulta);
            query.isActive();



}


void Conexion::addTipoHabitacion(TipoHabitacion a){
    QSqlQuery query;
     qDebug()<<"laasddvqwdvqwkbdqliwd879a1\n";

            std::string t = std::to_string(a.getIdTipoHa());
            std::string x = std::to_string(a.getPrecio());

            qDebug()<<"laasddvqwdvqwkbdqliwd879a2\n";
            QString tph=QString::fromLocal8Bit(t.c_str());
            QString nombretipo=QString::fromLocal8Bit(a.getNombreTipo().c_str());
            QString descrptipo=QString::fromLocal8Bit(a.getDescripcion().c_str());
            QString x1=QString::fromLocal8Bit(x.c_str());


             qDebug()<<"laasddvqwdvqwkbdqliwd879a3\n";

           QString consulta="insert into tipohabitacion  (idtipohab,nombretipo,descripcion,precio) values ("+tph+", '"+nombretipo+"', '"+descrptipo+"',"+x1+");";
           qDebug()<<consulta;


            query.exec(consulta);
            query.isActive();
}

