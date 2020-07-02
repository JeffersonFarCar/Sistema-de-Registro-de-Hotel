#include "gui_tipo_habitacion.h"
#include "ui_gui_tipo_habitacion.h"
#include "gui_habitacion.h"

gui_tipo_habitacion::gui_tipo_habitacion(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gui_tipo_habitacion)
{
    ui->setupUi(this);
}

gui_tipo_habitacion::~gui_tipo_habitacion()
{
    delete ui;
}

void gui_tipo_habitacion::on_pushButton_clicked()
{
    gui_habitacion guiH;
    guiH.setModal(true);
    guiH.exec();
}
