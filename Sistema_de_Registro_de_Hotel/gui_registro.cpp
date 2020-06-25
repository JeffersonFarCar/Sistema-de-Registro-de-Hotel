#include "gui_registro.h"
#include "ui_gui_registro.h"

Gui_Registro::Gui_Registro(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Gui_Registro)
{
    ui->setupUi(this);
}

Gui_Registro::~Gui_Registro()
{
    delete ui;
}
