#include "persona_crud.h"
#include "conexion.h"

Persona_CRUD::Persona_CRUD()
{
}


void Persona_CRUD::createPersona(Persona _persona){
    Conexion conn;
    conn.Conectar();

    QSqlQuery query;
    QString nombre = QString::fromLocal8Bit(_persona.getNombre().c_str());
    QString apellido = QString::fromLocal8Bit(_persona.getApellido().c_str());
    QString direccion = QString::fromLocal8Bit(_persona.getDireccion().c_str());
    QString email = QString::fromLocal8Bit(_persona.getEmail().c_str());

    QString insert; insert.append("INSERT INTO personas (dni, nombre, apellido, direccion, email) "
                     "VALUES ("+QString::number(_persona.getDni())+", '"+nombre+"', '"+apellido+"', "+
                              "'"+direccion+"', '"+email+"');");
    QSqlQuery insertar;
    insertar.prepare(insert);
    insertar.exec();

    conn.Cerrar();
}

Persona Persona_CRUD::readPersona() const{
    Persona per;
    return per;
}

void Persona_CRUD::updatePersona(Persona _persona){

}

void Persona_CRUD::deletePersona(int _id){

}
