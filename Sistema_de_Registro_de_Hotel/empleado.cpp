#include "empleado.h"
#include <iostream>
#include <string>

Empleado::Empleado(){

}

Empleado::Empleado(int id_persona, int dni, string _contra, string nombre,string apellido,string direccion,string email,double _sueldo, string _ocupacion,string _fechaContratacion) : Persona(id_persona, dni, nombre,apellido,direccion,email){
        contra=_contra;
        sueldo=_sueldo;
        ocupacion=_ocupacion;
        fechaContratacion=_fechaContratacion;

}


//Metodos Getters
string Empleado::getContrasena(){
    return contra;
}
double Empleado::getSueldo(){
    return sueldo;
}
string Empleado::getOcupacion(){
    return ocupacion;
}
string Empleado::getFechaContratacion(){
    return fechaContratacion;
}


//Metodos Setters
void Empleado::setContrasena(string _contra){
    contra=_contra;
}
void Empleado::setSueldo(double _sueldo){
    sueldo=_sueldo;
}
void Empleado::setOcupacion(string _ocupacion){
    ocupacion=_ocupacion;
}
void Empleado::setFechaContratacion(string _fechaContratacion){
    fechaContratacion=_fechaContratacion;
}


bool Empleado::registrarEmpleado(){return true;}
bool Empleado::modificarEmpleado(){return true;}
bool Empleado::borrarEmpleado(){return true;}
bool Empleado::buscarEmpleado(){return true;}

Empleado::~Empleado(){}
