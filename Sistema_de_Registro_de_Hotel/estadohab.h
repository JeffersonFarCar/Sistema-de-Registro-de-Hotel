#ifndef ESTADOHAB_H
#define ESTADOHAB_H

#include <iostream>
#include <string>
using namespace std;

class EstadoHab
{
private:
    int idEstadoH;
    string descripcion;

public:
    EstadoHab();
    EstadoHab(int _idEstadoH, string _descripcion);
    void setDescripcion(string _descripcion);
    void setIdEstado(int _idEstadoH);

    int getIdEstado() const;
    string getDescripcion() const;

};

#endif // ESTADOHAB_H
