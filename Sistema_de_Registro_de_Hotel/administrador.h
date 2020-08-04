#ifndef ADMINISTRADOR_H
#define ADMINISTRADOR_H

#include <persona.h>

class Administrador: public Persona
{
private:
    string contra;
public:
    Administrador(int id,int dni,string contra, string nombre, string apellido, string dir, string email);
    string getContra();
    void setContrasena(string contra);

};

#endif // ADMINISTRADOR_H
