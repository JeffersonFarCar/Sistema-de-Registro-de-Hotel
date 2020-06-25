#include "gui_empleado.h"
#include "ui_gui_empleado.h"

Gui_Empleado::Gui_Empleado(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Gui_Empleado)
{
    ui->setupUi(this);
}

Gui_Empleado::~Gui_Empleado()
{
    delete ui;
}
