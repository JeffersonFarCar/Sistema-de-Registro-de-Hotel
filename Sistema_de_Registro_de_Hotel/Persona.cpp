#include "Persona.h"
#include <string>
using namespace std;
Persona::Persona(string _nombre, string _apellido, string _direccion, string _email) {
	nombre=_nombre;
	apellido=_apellido;
	direccion=_direccion;
	email=_email;
}
Persona::~Persona(){}
int Persona::getId(){
	return id_persona;
}
string Persona::getNombre(){
	return nombre;
}
string Persona::getApellido(){
	return apellido;
}
string Persona::getDireccion(){
	return direccion;
}
string Persona::getEmail(){
	return email;
}
void Persona::setNombre(string _nombre){
	nombre=_nombre;
}
void Persona::setApellido(string _apellido){
	apellido=_apellido;
}
void Persona::setDireccion(string _direccion){
	direccion=_direccion;
}
void Persona::setEmail(string _email){
	email=_email;
}

