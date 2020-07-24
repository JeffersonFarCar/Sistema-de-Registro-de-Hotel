#include "empleado_crud.h"

#include "conexion.h"
#include "persona_crud.h"

Empleado_Crud::Empleado_Crud()
{

}


void Empleado_Crud::createEmpleado(Empleado _empleado){
    Conexion conn;
    Persona_CRUD pcrud;

    QString nombre=QString::fromLocal8Bit(_empleado.getNombre().c_str());
    QString apellido=QString::fromLocal8Bit(_empleado.getApellido().c_str());
    QString direccion=QString::fromLocal8Bit(_empleado.getDireccion().c_str());
    QString email=QString::fromLocal8Bit(_empleado.getEmail().c_str());
    QString ocupacion=QString::fromLocal8Bit(_empleado.getOcupacion().c_str());
    QString fecha=QString::fromLocal8Bit(_empleado.getFechaContratacion().c_str());
    int dni = _empleado.getDni();



    Persona persona (1,dni, nombre.toStdString(), apellido.toStdString(), direccion.toStdString(), email.toStdString());
    pcrud.createPersona(persona);

    conn.Conectar();

    QString consulta; consulta.append("INSERT INTO empleados (id_persona, ocupacion, sueldo, fecha) VALUES ("+QString::number(_empleado.getId())+", '"+ocupacion+"',"+QString::number(_empleado.getSueldo())+",'"+fecha+"');");

    QSqlQuery query;
    query.prepare(consulta);
    query.exec();

    conn.Cerrar();
}
Empleado Empleado_Crud::readEmpleado() const{
    Empleado e;
    return e;
}

void Empleado_Crud::updateEmpleado(Empleado _empleado){

}

void Empleado_Crud::deleteEmpleado(int _id){

}

