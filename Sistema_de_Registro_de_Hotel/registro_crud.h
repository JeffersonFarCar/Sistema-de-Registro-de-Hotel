#ifndef REGISTRO_CRUD_H
#define REGISTRO_CRUD_H

#include <QString>

#include "registro.h"

class Registro_CRUD
{
public:
    Registro_CRUD();
    void createRegistro(Registro _registro);
    Registro readRegistro();
    void updateRegistro(QString _fechaS, QString _idR);
    void deleteRegistro(int _id);
};

#endif // REGISTRO_CRUD_H
