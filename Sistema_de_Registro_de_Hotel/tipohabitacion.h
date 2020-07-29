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
    string nombretipo;

public:
    TipoHabitacion();
    TipoHabitacion(int _idTiHa, string _descrp,string _nombreTipo, float _precio);

    void setIdTipoHa(int _idTiHa);
    void setDescricion(string _descripcion);
    void setPrecio(float _precio);
    void setNombreTipo(string _nombreTipo);

    int getIdTipoHa() ;
    string getDescripcion() ;
    float getPrecio() ;
    string getNombreTipo();

};

#endif // TIPOHABITACION_H

