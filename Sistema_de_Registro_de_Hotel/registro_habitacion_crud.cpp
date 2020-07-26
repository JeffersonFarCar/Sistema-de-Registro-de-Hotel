#include "registro_habitacion_crud.h"

#include "conexion.h"
#include <QSql>

Registro_Habitacion_CRUD::Registro_Habitacion_CRUD()
{
}

void Registro_Habitacion_CRUD::CreateRegistro_Habitacion(QString table, QString clause){
    Conexion conn;
    conn.Conectar();

    QString queryInsert;
    queryInsert.append("INSERT INTO "+table+" (idregistro, idhabitacion) VALUES "+clause);
    QSqlQuery query;
    query.prepare(queryInsert);
    query.exec();

    conn.Cerrar();
}

void Registro_Habitacion_CRUD::DeleteRegistro_Habitacion(QString idR){
    Conexion conn;
    conn.Conectar();
    QString queryDelete;
    queryDelete.append("DELETE FROM registro_habitacion WHERE idregistro = "+idR);
    QSqlQuery query;
    query.prepare(queryDelete);
    query.exec();
    conn.Cerrar();
}
