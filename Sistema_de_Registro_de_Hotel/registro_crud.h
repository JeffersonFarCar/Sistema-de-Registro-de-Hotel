#ifndef REGISTRO_CRUD_H
#define REGISTRO_CRUD_H

#include "registro.h"

class Registro_CRUD
{
public:
    Registro_CRUD();
    void createRegistro(Registro _registro);
    Registro readRegistro();
    void updateRegistro(Registro _registro);
    void deleteRegistro(int _id);
};

#endif // REGISTRO_CRUD_H
