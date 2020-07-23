#include "cliente_crud.h"

#include "conexion.h"
#include "persona_crud.h"

Cliente_CRUD::Cliente_CRUD()
{

}

void Cliente_CRUD::createCliente(Cliente _cliente){
    Conexion conn;
    Persona_CRUD pcrud;

    QString nombre=QString::fromLocal8Bit(_cliente.getNombre().c_str());
    QString apellido=QString::fromLocal8Bit(_cliente.getApellido().c_str());
    QString direccion=QString::fromLocal8Bit(_cliente.getDireccion().c_str());
    QString email=QString::fromLocal8Bit(_cliente.getEmail().c_str());
    QString ciudadania=QString::fromLocal8Bit(_cliente.getCiudadania().c_str());

    Persona persona (1, 75115094, nombre.toStdString(), apellido.toStdString(), direccion.toStdString(), email.toStdString());
    pcrud.createPersona(persona);

    conn.Conectar();

    QString consulta; consulta.append("INSERT INTO clientes (id_persona, ciudadania) VALUES ("+QString::number(_cliente.getId())+", '"+ciudadania+"');");

    QSqlQuery query;
    query.prepare(consulta);
    query.exec();

    conn.Cerrar();
}

Cliente Cliente_CRUD::readCliente() const{
    Cliente c;
    return c;
}

void Cliente_CRUD::updateCliente(Cliente _cliente){

}

void Cliente_CRUD::deleteCliente(int _id){

}

