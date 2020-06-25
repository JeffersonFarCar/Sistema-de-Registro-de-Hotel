#include "mainwindow.h"

#include <QApplication>

#include <QDebug>
#include <iostream>
#include <string>
#include "registro.h"
#include "tipohabitacion.h"
#include "estadohab.h"
#include "habitacion.h"
using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //Prueba Clase Habitacion, Tipo, EstadoHabitacion -> Inicio
    int idTipoH=1; string descripcion="Simple"; float precio=95;
    TipoHabitacion tipoH(idTipoH, descripcion, precio);

    int idEstado=2; string descEsH="Ocupado";
    EstadoHab estadoH(idEstado, descEsH);

    int idH=10, numH=102, numP=3;
    Habitacion habitacion(idH, tipoH.getIdTipoHa(), numH, numP, estadoH.getIdEstado());
    cout<<"HABITACION"<<endl;
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
