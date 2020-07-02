#include "gui_habitacion.h"
#include "ui_gui_habitacion.h"
#include "gui_tipo_habitacion.h"
#include "mainwindow.h"
#include "gui_estado_habitacion.h"
gui_habitacion::gui_habitacion(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gui_habitacion)
{
    ui->setupUi(this);
}

gui_habitacion::~gui_habitacion()
{
    delete ui;
}

void gui_habitacion::on_groupBox_clicked()
{

}

void gui_habitacion::on_pushButton_clicked()
{
    gui_tipo_habitacion guiTH;
    guiTH.setModal(true);
    guiTH.exec();


}

void gui_habitacion::on_pushButton_5_clicked()
{

}

void gui_habitacion::on_pushButton_2_clicked()
{
    gui_estado_habitacion guiEH;
    guiEH.setModal(true);
    guiEH.exec();
}
