#include "persona.h"
#include <string>
using namespace std;
Persona::Persona() {
}
Persona::Persona(int _id_persona,string _name, string _ap, string _dir, string _email) {
 id_persona=_id_persona;
 nombre = _name;
 apellido = _ap;
 direccion = _dir;
 email = _email;
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
void Persona::setId(int _id){
    id_persona=_id;
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

