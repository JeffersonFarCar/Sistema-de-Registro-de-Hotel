#include "habitacion.h"

Habitacion::Habitacion()
{

}
Habitacion::Habitacion(int _idH, int _tipoH, int _numHabi, int _numPiso, int _estadoH){
    idHabitacion = _idH;
    tipoHabitacion = _tipoH;
    numeroHabitacion = _numHabi;
    numeroPiso = _numPiso;
    estadoHabitacion = _estadoH;
}

void Habitacion::setIdHabitacion(int _idH){
    idHabitacion = _idH;
}
void Habitacion::setTipoHabitacion(int _tipoH){
    tipoHabitacion = _tipoH;
}
void Habitacion::setNumHabitacion(int _numHab){
    numeroHabitacion = _numHab;
}
void Habitacion::setNumPiso(int _numPiso){
    numeroPiso = _numPiso;
}
void Habitacion::setEstadoH(int _estadoH){
    estadoHabitacion = _estadoH;
}

int Habitacion::getIdHabitacion() const{
    return idHabitacion;
}
int Habitacion::getTipoHabitacion() const{
    return tipoHabitacion;
}
int Habitacion::getNumHabitacion() const{
    return getNumHabitacion();
}
int Habitacion::getNumPiso() const{
    return numeroPiso;
}
int Habitacion::getEstadoH() const{
    return estadoHabitacion;
}
