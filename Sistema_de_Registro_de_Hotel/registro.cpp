#include "registro.h"

Registro::Registro(){

}

Registro::Registro(int _idR, int _idC, int _idH, int _cant, QDate _fechE, QDate _fechS){
    idRegistro = _idR;
    idCliente = _idC;
    idHabitacion = _idH;
    cantPersonas = _cant;
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
void Registro::setIdHabitacion(int _idH){
    idHabitacion = _idH;
}
void Registro::setCantPersonas(int _cant){
    cantPersonas = _cant;
}
void Registro::setFechaEntrada(QDate _fechE){
    fechaEntrada = _fechE;
}
void Registro::setFechaSalida(QDate _fechS){
    fechaSalida = _fechS;
}

//Creación de Getters
int Registro::getIdRegistro() const{
    return idRegistro;
}
int Registro::getIdCliente() const{
    return idCliente;
}
int Registro::getIdHabitacion() const{
    return idHabitacion;
}
int Registro::getCantPersonas() const{
    return cantPersonas;
}
QDate Registro::getFechaEntrada() const{
    return fechaEntrada;
}
QDate Registro::getFechaSalida() const{
    return fechaSalida;
}
