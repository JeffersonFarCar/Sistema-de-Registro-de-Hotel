#ifndef PERSONA_H
#define PERSONA_H
#include <string>
using namespace std;

class Persona {
public:
    Persona();
    Persona(int,string, string, string, string);
    ~Persona();
    int getId();
    string getNombre();
    string getApellido();
    string getDireccion();
    string getEmail();
    void setId(int _id);
    void setNombre(string _nombre);
    void setApellido(string _apellido);
    void setDireccion(string _direccion);
    void setEmail(string _email);

private:
    int id_persona;
    string nombre;
    string apellido;
    string direccion;
    string email;
};

#endif
