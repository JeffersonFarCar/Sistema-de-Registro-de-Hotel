#ifndef TIPOHABITACION_H
#define TIPOHABITACION_H

#include <iostream>
#include <string>
using namespace std;

class TipoHabitacion
{
private:
    int idTipoHabitacion;
    string descripcion;
    float precio;

public:
    TipoHabitacion();
    TipoHabitacion(int _idTiHa, string _descrp, float _precio);

    void setIdTipoHa(int _idTiHa);
    void setDescricion(string _descripcion);
    void setPrecio(float _precio);

    int getIdTipoHa() const;
    string getDescripcion() const;
    float getPrecio() const;
};

#endif // TIPOHABITACION_H
