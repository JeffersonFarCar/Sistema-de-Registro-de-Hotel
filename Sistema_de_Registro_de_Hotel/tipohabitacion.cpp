#include "tipohabitacion.h"

TipoHabitacion::TipoHabitacion()
{

}

TipoHabitacion::TipoHabitacion(int _idTiHa, string _descrp, float _precio){
    idTipoHabitacion = _idTiHa;
    descripcion = _descrp;
    precio = _precio;
}

void TipoHabitacion::setIdTipoHa(int _idTiHa){
    idTipoHabitacion = _idTiHa;
}
void TipoHabitacion::setDescricion(string _descripcion){
    descripcion = _descripcion;
}
void TipoHabitacion::setPrecio(float _precio){
    precio = _precio;
}

int TipoHabitacion::getIdTipoHa() const{
    return idTipoHabitacion;
}
string TipoHabitacion::getDescripcion() const{
    return descripcion;
}
float TipoHabitacion::getPrecio() const{
    return precio;
}
