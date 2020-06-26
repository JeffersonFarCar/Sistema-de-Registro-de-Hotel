#ifndef CLIENTE_H
#define CLIENTE_H
#pragma once
#include <string>
#include <persona.h>
using namespace std;

class Cliente: public Persona{
private:
    string ciudadania;

public:
    Cliente();
    Cliente(int id_persona,string nombre,string apellido,string direccion,string email,string _ciudadania);
   //Getters and setters

   void setCiudadania(string _ciud);

   int  getIdCliente();
   string getCiudadania();

    //Metods of BD
    bool registrarCliente();
    bool modificarCliente();
    bool borrarCliente();
    bool buscarCliente();

   ~Cliente();
};

#endif // CLIENTE_H
