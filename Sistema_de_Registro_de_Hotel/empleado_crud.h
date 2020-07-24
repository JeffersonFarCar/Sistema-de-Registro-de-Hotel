#ifndef EMPLEADO_CRUD_H
#define EMPLEADO_CRUD_H

#include "empleado.h"

class Empleado_Crud
{
public:
    Empleado_Crud();
    void createEmpleado(Empleado _empleado);
    Empleado readEmpleado() const;
    void updateEmpleado(Empleado _empleado);
    void deleteEmpleado(int _id);
};

#endif // EMPLEADO_CRUD_H

