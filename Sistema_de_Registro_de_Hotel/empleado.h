#ifndef EMPLEADO_H
#define EMPLEADO_H
#pragma once
#include <string>
#include <persona.h>
using namespace std;

class Empleado: public Persona{
private:
    string contra;
    double sueldo;
    string ocupacion;
    string fechaContratacion;

public:
    Empleado();
    Empleado(int id_persona, int dni, string contra,string nombre,string apellido,string direccion,string email,double sueldo, string ocupacion, string fechaContratacion);

   void setContrasena(string _contra);
   void setSueldo(double _sueldo);
   void setOcupacion(string _ocupacion);
   void setFechaContratacion(string _fechaContratacion);

   string getContrasena();
   double getSueldo();
   string getOcupacion();
   string getFechaContratacion();


    bool registrarEmpleado();
    bool modificarEmpleado();
    bool borrarEmpleado();
    bool buscarEmpleado();

   ~Empleado();
};

#endif // EMPLEADO_H
