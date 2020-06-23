#ifndef CLIENTE_H
#define CLIENTE_H
#pragma once
#include <string>
#include <Persona.h>
using namespace std;

class Cliente: public Persona{
private:
    int idCliente;
    int dni;
    string nombre;
    string apellido;
    string direccion;
    string email;

public:
    Cliente();
    Cliente( int _dni, string _name, string _ap, string _dir, string _email);
   //Getters and setters
   void setDNI(int _dni);
   void setNombre(string _name);
   void setApellido(string _ape);
   void setDireccion(string _dir);
   void setEmail(string _email);

   int  getIdCliente();
   int getDNI();
   string getNombre();
   string getApellido();
   string getDireccion();
   string getEmail();

    //Metods of BD
    bool registrarCliente();
    bool modificarCliente();
    bool borrarCliente();
    bool buscarCliente();

   ~Cliente();
};

#endif // CLIENTE_H
