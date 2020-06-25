#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "gui_registro.h"

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

}

void MainWindow::on_Registros_button_clicked()
{

    Gui_Registro guiR;
    guiR.setModal(true);
    guiR.exec();

}

void MainWindow::on_Habitacions_button_clicked()
{

}
