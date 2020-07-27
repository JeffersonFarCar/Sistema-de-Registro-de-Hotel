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
    Conexion conn;

        Persona_CRUD pcrud;

        int dni= _persona.getDni();
        QString nombre=QString::fromLocal8Bit(_persona.getNombre().c_str());
        QString apellido=QString::fromLocal8Bit(_persona.getApellido().c_str());
        QString direccion=QString::fromLocal8Bit(_persona.getDireccion().c_str());
        QString email=QString::fromLocal8Bit(_persona.getEmail().c_str());
        conn.Conectar();

        QString consulta; consulta.append("UPDATE personas SET dni = "+ QString::number(dni) +" , nombre = '"+ nombre+"', apellido = '"
                                          +apellido+"', direccion = '"+direccion+ "', email = '"+email+"' WHERE idpersona = "+QString::number(_persona.getId())+";");

        QSqlQuery query;
        query.prepare(consulta);
        query.exec();

        conn.Cerrar();

}

void Persona_CRUD::deletePersona(int _id){
    Conexion conn;
    conn.Conectar();

    QString consulta; consulta.append("DELETE FROM personas WHERE idpersona = "+QString::number(_id)+";");
    QSqlQuery query;
    query.prepare(consulta);
    query.exec();

    conn.Cerrar();
}
