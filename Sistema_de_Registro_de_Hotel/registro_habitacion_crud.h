#ifndef REGISTRO_HABITACION_CRUD_H
#define REGISTRO_HABITACION_CRUD_H

#include <QString>

class Registro_Habitacion_CRUD
{
public:
    Registro_Habitacion_CRUD();    
    void CreateRegistro_Habitacion(QString table, QString clause);
    void ReadRegistro_Habitacion();
    void UpdateRegistro_Habitacion();
    void DeleteRegistro_Habitacion(QString idR);
};

#endif // REGISTRO_HABITACION_CRUD_H
