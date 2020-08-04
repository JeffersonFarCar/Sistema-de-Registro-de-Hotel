#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "login.h"
#include "gui_registro.h"
#include "gui_empleado.h"
#include "gui_menu_cliente.h"
#include "gui_habitacion.h"
#include "gui_indexhabitacion.h"
#include "gui_index_registro.h"
#include "gui_index_empleado.h"

MainWindow::MainWindow(int tipo, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    // setWindowFlags(Qt::Window | Qt::MSWindowsFixedSizeDialogHint);
    this->setFixedSize(QSize(650, 400)); //646, 395
    ui->setupUi(this);
    if (tipo == Login::ADMINISTRADOR){
        ui->Empleados_button->setEnabled(true);
    }else{
        ui->Empleados_button->setEnabled(false);
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_Usuarios_button_clicked()
{
    Gui_Menu_Cliente guiC;
    guiC.setModal(true);
    guiC.exec();
}

void MainWindow::on_Registros_button_clicked()
{
    Gui_Index_Registro guiIR;
    guiIR.setModal(true);
    guiIR.exec();
}

void MainWindow::on_Habitacions_button_clicked()
{
     gui_indexHabitacion guiIH;
     guiIH.setModal(true);
     guiIH.exec();
}

void MainWindow::on_Empleados_button_clicked()
{
    Gui_Index_Empleado guiE;
    guiE.setModal(true);
    guiE.exec();
}
