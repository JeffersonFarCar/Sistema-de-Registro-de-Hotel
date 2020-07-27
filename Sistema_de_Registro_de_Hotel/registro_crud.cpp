#include "registro_crud.h"

#include "conexion.h"
#include "string"
using namespace std;

Registro_CRUD::Registro_CRUD()
{

}


void Registro_CRUD::createRegistro(Registro _registro){
    Conexion conn;
    conn.Conectar();

    QSqlQuery query;
    QString id = QString::number(_registro.getIdRegistro());
    QString idC = QString::number(_registro.getIdCliente());
    QString idE = QString::number(_registro.getIdEmpleado());
    QString cantH = QString::number(_registro.getCantHab());
    QString fE = QString::fromLocal8Bit(_registro.getFechaEntrada().c_str());
    QString fS = QString::fromLocal8Bit(_registro.getFechaSalida().c_str());

    QString insert; insert.append("INSERT INTO registros (idpersona_c, idpersona_e, fechaE, fechaS) "
                     "VALUES ("+idC+", "+idE+", '"+fE+"', '"+fS+"');");
    QSqlQuery insertar;
    insertar.prepare(insert);
    insertar.exec();

    conn.Cerrar();
}

Registro Registro_CRUD::readRegistro(){
    Registro r;
    return r;
}

void Registro_CRUD::updateRegistro(Registro _registro){

}

void Registro_CRUD::deleteRegistro(int _id){

}
