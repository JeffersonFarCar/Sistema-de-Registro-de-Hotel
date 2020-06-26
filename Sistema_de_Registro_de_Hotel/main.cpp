#include "mainwindow.h"

#include <QApplication>

#include <QDebug>
#include <iostream>
#include <string>
#include "registro.h"
#include "tipohabitacion.h"
#include "estadohab.h"
#include "habitacion.h"
#include "empleado.h"
#include "cliente.h"
using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //Prueba Clase Empleado -> Inicio
    int idEmpleado=2;
    string nombre="Juan", apellido="Perez", direccion="Paucarpata 321", email="juanPerez12@gmail.com";
    double sueldo=1400.10; string ocupacion="Seguridad", fecha="12-10-2019";
    Empleado empleado(idEmpleado,nombre,apellido,direccion,email,sueldo,ocupacion,fecha);

    cout<<"EMPLEADO"<<endl;
    cout<<"Id de Empleado: "<<empleado.getId()<<endl;
    cout<<"Nombre del Empleado: "<<empleado.getNombre()<<endl;
    cout<<"Apellido del Empleado: "<<empleado.getApellido()<<endl;
    cout<<"Direccion del Empleado: "<<empleado.getDireccion()<<endl;
    cout<<"Email del Empleado: "<<empleado.getEmail()<<endl;
    cout<<"Sueldo del Empleado: "<<empleado.getSueldo()<<endl;
    cout<<"Ocupacion del Empleado: "<<empleado.getOcupacion()<<endl;
    cout<<"Fecha de Contratacion del Empleado: "<<empleado.getFechaContratacion()<<endl;
    //Prueba Clase Empleado -> Fin

    //Prueba Clase Cliente -> Inicio
    int idCliente=2;
    string nombreC="Henry", apellidoC="Rojas Aquino", direccionC="Perales, Tres manzanos N°12",
          emailC="henry_12@gmail.com", ciudadaniaC = "Cusco";
    Cliente cliente(idCliente,nombreC,apellidoC,direccionC,emailC,ciudadaniaC);

    cout<<"CLIENTE"<<endl;
    cout<<"Id de Cliente: "<<cliente.getId()<<endl;
    cout<<"Nombre del Cliente: "<<cliente.getNombre()<<endl;
    cout<<"Apellido del Cliente: "<<cliente.getApellido()<<endl;
    cout<<"Direccion del Cliente: "<<cliente.getDireccion()<<endl;
    cout<<"Email del Cliente: "<<cliente.getEmail()<<endl;
    cout<<"Ciudadania del Cliente: "<<cliente.getCiudadania()<<endl;
    //Prueba Clase Cliente -> Fin

    //Prueba Clase Habitacion, Tipo, EstadoHabitacion -> Inicio
    int idTipoH=1; string descripcion="Simple"; float precio=95;
    TipoHabitacion tipoH(idTipoH, descripcion, precio);

    int idEstado=2; string descEsH="Ocupado";
    EstadoHab estadoH(idEstado, descEsH);

    int idH=10, numH=102, numP=3;
    Habitacion habitacion(idH, tipoH.getIdTipoHa(), numH, numP, estadoH.getIdEstado());
    cout<<"\nHABITACION"<<endl;
    cout<<"Id Habitacion: "<<habitacion.getIdHabitacion()<<endl;
    cout<<"Tipo Habitacion: "<<tipoH.getDescripcion()<<endl;
    cout<<"Numero Habitacion: "<<habitacion.getIdHabitacion()<<endl;
    cout<<"Numero Piso: "<<habitacion.getNumPiso()<<endl;
    cout<<"Estado: "<<estadoH.getDescripcion()<<endl;
    //Prueba Clase Habitacion, Tipo, EstadoHabitacion -> Fin

    //Prueba Clase Registro -> Inicio
    int idR=20, idC=18, cant=3;
    QDate fechEntrada = QDate::currentDate();
    QDate fechSalida(2020, 07, 15);

    Registro registro(idR, idC, habitacion.getIdHabitacion(), cant, fechEntrada, fechSalida);
    cout<<"\nREGISTRO"<<endl;
    cout<<"Id de registro: "<<registro.getIdRegistro()<<endl;
    cout<<"Id del cliente: "<<registro.getIdCliente()<<endl;
    cout<<"Id de la habiacion: "<<registro.getIdHabitacion()<<endl;
    cout<<"Fecha de registro: "<<fechEntrada.toString().toLocal8Bit().data()<<endl;
    cout<<"Fecha de salida: "<<fechSalida.toString().toLocal8Bit().data()<<endl;
    //Prueba Clase Registro -> Fin

    //Muestra la interfaz principal mainWindow
    MainWindow w;
    w.show();

    return a.exec();
}
