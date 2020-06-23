#include "Cliente.h"
#include <iostream>
#include <string>

Cliente::Cliente(){
    //Autogenerar id
    nombre = "Anonimo";
}

Cliente::Cliente(int _dni, string _name, string _ap, string _dir, string _email){
   //Autogenerar id
    dni = _dni;
    nombre = _name;
    apellido = _ap;
    direccion = _dir;
    email = _email;
}
void Cliente::setDNI(int _dni){
    dni = _dni;
}
void Cliente::setNombre(string _name){
    nombre = _name;
}
void Cliente::setApellido(string _ape){
    apellido = _ape;
}
void Cliente::setDireccion(string _dir){
    direccion = _dir;
}
void Cliente::setEmail(string _email){
    email = _email;
}

int Cliente::getIdCliente(){
    return idCliente;
}
int Cliente::getDNI(){
    return 0;
}
string Cliente::getNombre(){
    return nombre;
}
string Cliente::getApellido(){
    return apellido;
}
string Cliente::getDireccion(){
    return direccion;
}
string Cliente::getEmail(){
    return email;
}

bool Cliente::registrarCliente(){return true;}
bool Cliente::modificarCliente(){return true;}
bool Cliente::borrarCliente(){return true;}
bool Cliente::buscarCliente(){return true;}

Cliente::~Cliente(){}
