#include "gui_estado_habitacion.h"
#include "ui_gui_estado_habitacion.h"
#include "gui_habitacion.h"
gui_estado_habitacion::gui_estado_habitacion(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gui_estado_habitacion)
{
    ui->setupUi(this);
}

gui_estado_habitacion::~gui_estado_habitacion()
{
    delete ui;
}

void gui_estado_habitacion::on_pushButton_clicked()
{
    gui_habitacion guiH;
    guiH.setModal(true);
    guiH.exec();
}
