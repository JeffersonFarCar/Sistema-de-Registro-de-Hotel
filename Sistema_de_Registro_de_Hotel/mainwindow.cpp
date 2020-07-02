#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "gui_registro.h"
#include "gui_empleado.h"
#include "gui_cliente.h"
#include "gui_habitacion.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_Usuarios_button_clicked()
{
    Gui_Cliente guiC;
    guiC.setModal(true);
    guiC.exec();
}

void MainWindow::on_Registros_button_clicked()
{

   // Gui_Registro guiR;
    Gui_Registro guiR;
    guiR.setModal(true);
    guiR.exec();

}

void MainWindow::on_Habitacions_button_clicked()
{

     gui_habitacion guiH;
     guiH.setModal(true);
     guiH.exec();
}

void MainWindow::on_Empleados_button_clicked()
{
    Gui_Empleado guiE;
    guiE.setModal(true);
    guiE.exec();
}
