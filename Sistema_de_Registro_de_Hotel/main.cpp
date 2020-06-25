#include "mainwindow.h"

#include <QApplication>

#include <QDebug>
#include <iostream>
#include <string>
#include "registro.h"
using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //Este seria mi prueba gente
    int idR=20, idC=18, idH=102, cant=3;
    QDate fechEntrada = QDate::currentDate();
    QDate fechSalida(2020, 07, 15);

    Registro registro(idR, idC, idH, cant, fechEntrada, fechSalida);

    cout<<"Id de registro: "<<registro.getIdRegistro()<<endl;
    cout<<"Id del cliente: "<<registro.getIdCliente()<<endl;
    cout<<"Id de la habiacion: "<<registro.getIdHabitacion()<<endl;
    cout<<"Fecha de registro: "<<fechEntrada.toString().toLocal8Bit().data()<<endl;
    cout<<"Fecha de salida: "<<fechSalida.toString().toLocal8Bit().data()<<endl;

    MainWindow w;
    w.show();

    return a.exec();
}
