#include "gui_indexhabitacion.h"
#include "ui_gui_indexhabitacion.h"
#include "gui_habitacion.h"
gui_indexHabitacion::gui_indexHabitacion(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gui_indexHabitacion)
{
    ui->setupUi(this);
}

gui_indexHabitacion::~gui_indexHabitacion()
{
    delete ui;
}

void gui_indexHabitacion::on_pushButton_4_clicked()
{
    gui_habitacion guiHA;
         guiHA.setModal(true);
         guiHA.exec();

}

void gui_indexHabitacion::on_pushButton_5_clicked()
{
    close();//Permite cerra la ventana actual abierta
}

void gui_indexHabitacion::on_pushButton_clicked()
{

}
