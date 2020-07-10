#include "index_registro.h"
#include "ui_index_registro.h"

Index_Registro::Index_Registro(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Index_Registro)
{
    ui->setupUi(this);
}

Index_Registro::~Index_Registro()
{
    delete ui;
}
