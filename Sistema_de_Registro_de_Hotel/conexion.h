#ifndef CONEXION_H
#define CONEXION_H
#include "cliente.h"
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
    void addCliente(Cliente a);
};

#endif // CONEXION_H
