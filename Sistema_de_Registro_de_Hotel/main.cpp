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



    //Muestra la interfaz principal mainWindow
    MainWindow w;
    w.show();

    return a.exec();
}
