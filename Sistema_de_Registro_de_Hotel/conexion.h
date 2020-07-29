#ifndef CONEXION_H
#define CONEXION_H
#include "empleado.h"
#include "habitacion.h"
#include "estadohab.h"
#include "tipohabitacion.h"
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
    void addEmpleado(Empleado e);
    void addHabitacion(Habitacion a);
   void addEstadoHabitacion(EstadoHab a);
   void addTipoHabitacion(TipoHabitacion a);
};

#endif // CONEXION_H
