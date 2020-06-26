#include "gui_cliente.h"
#include "ui_gui_cliente.h"

Gui_Cliente::Gui_Cliente(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Gui_Cliente)
{
    ui->setupUi(this);
}

Gui_Cliente::~Gui_Cliente()
{
    delete ui;
}
