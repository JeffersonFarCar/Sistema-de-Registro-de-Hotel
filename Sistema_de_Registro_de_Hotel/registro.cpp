#include "registro.h"

Registro::Registro(){

}

Registro::Registro(int _idR, int _idC, int _idE, int _cantH, string _fechE, string _fechS){
    idRegistro = _idR;
    idCliente = _idC;
    idEmpleado = _idE;
    cantHabitaciones = _cantH;
    fechaEntrada = _fechE;
    fechaSalida = _fechS;
}

//Creación de Setters
void Registro::setIdRegistro(int _idR){
    idRegistro = _idR;
}
void Registro::setIdCliente(int _idC){
    idCliente = _idC;
}
void Registro::setIdEmpleado(int _idE){
    idEmpleado = _idE;
}
void Registro::setCantHab(int _cantH){
    cantHabitaciones = _cantH;
}
void Registro::setFechaEntrada(string _fechE){
    fechaEntrada = _fechE;
}
void Registro::setFechaSalida(string _fechS){
    fechaSalida = _fechS;
}

//Creación de Getters
int Registro::getIdRegistro() const{
    return idRegistro;
}
int Registro::getIdCliente() const{
    return idCliente;
}
int Registro::getIdEmpleado() const{
    return idEmpleado;
}
int Registro::getCantHab() const{
    return cantHabitaciones;
}
string Registro::getFechaEntrada() const{
    return fechaEntrada;
}
string Registro::getFechaSalida() const{
    return fechaSalida;
}
