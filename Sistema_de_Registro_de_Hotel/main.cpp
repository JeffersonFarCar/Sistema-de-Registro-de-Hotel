#include "login.h"
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
    Login ventanaPrincipal;
    ventanaPrincipal.show();
    if(ventanaPrincipal.exec() == QDialog::Rejected){
        return -1;
    }
    MainWindow mainWindow(ventanaPrincipal.getTipo());
    mainWindow.show();
    return a.exec();
}
