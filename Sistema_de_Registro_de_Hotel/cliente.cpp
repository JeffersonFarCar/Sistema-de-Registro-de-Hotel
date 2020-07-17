#include "cliente.h"
#include <iostream>
#include <string>

Cliente::Cliente(){

}

Cliente::Cliente(int id_persona,string nombre,string apellido,string direccion,string email,string _ciudadania) : Persona(id_persona,nombre,apellido,direccion,email){
  ciudadania = _ciudadania;
}

void Cliente::setCiudadania(string _ciud){
    ciudadania = _ciud;
}

string Cliente::getCiudadania(){
    return ciudadania;
}

bool Cliente::registrarCliente(){return true;}
bool Cliente::modificarCliente(){return true;}
bool Cliente::borrarCliente(){return true;}
bool Cliente::buscarCliente(){return true;}

Cliente::~Cliente(){}
