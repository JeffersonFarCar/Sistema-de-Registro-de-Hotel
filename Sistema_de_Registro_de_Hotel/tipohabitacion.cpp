#include "tipohabitacion.h"
#include <string>
using namespace std;
TipoHabitacion::TipoHabitacion()
{

}

TipoHabitacion::TipoHabitacion(int _idTiHa, string _descrp,string _nombreTipo, float _precio){
    idTipoHabitacion = _idTiHa;
    descripcion = _descrp;
    precio = _precio;
    nombretipo=_nombreTipo;
}

void TipoHabitacion::setIdTipoHa(int _idTiHa){
    idTipoHabitacion = _idTiHa;
}
void TipoHabitacion::setNombreTipo(string _nombreTipo){
    nombretipo = _nombreTipo;
}


void TipoHabitacion::setDescricion(string _descripcion){
    descripcion = _descripcion;
}
void TipoHabitacion::setPrecio(float _precio){
    precio = _precio;
}

int TipoHabitacion::getIdTipoHa() {
    return idTipoHabitacion;
}
string TipoHabitacion::getDescripcion() {
    return descripcion;
}
string TipoHabitacion::getNombreTipo() {
    return nombretipo;
}
float TipoHabitacion::getPrecio() {
    return precio;
}
