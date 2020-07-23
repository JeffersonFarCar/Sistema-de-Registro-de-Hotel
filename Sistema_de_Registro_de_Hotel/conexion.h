#ifndef CONEXION_H
#define CONEXION_H
#include "persona.h"
#include "cliente.h"
#include "empleado.h"
#include "habitacion.h"
#include <QtSql/QSqlQuery>
#include <QString>
#include <QtSql/QSqlDatabase>
class Conexion
{
    QSqlDatabase db;
public:
    Conexion();
    void Conectar();
    void Cerrar();
    void addPersona(Persona p);
    void addCliente(Cliente a);
    void addEmpleado(Empleado e);
    void addHabitacion(Habitacion a);
};

#endif // CONEXION_H
