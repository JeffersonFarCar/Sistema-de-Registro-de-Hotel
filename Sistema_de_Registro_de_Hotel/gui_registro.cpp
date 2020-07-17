#include "gui_registro.h"
#include "ui_gui_registro.h"

#include <QMessageBox>
#include <iostream>
#include <string>
using namespace std;

Gui_Registro::Gui_Registro(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Gui_Registro)
{
    this->setFixedSize(QSize(397, 432)); //646, 395
    ui->setupUi(this);
}

Gui_Registro::~Gui_Registro()
{
    delete ui;
}

void Gui_Registro::on_Registrar_button_clicked()
{
    QString idR_str = ui->LineEdit_idRegis->text();
    QString idC_str = ui->LineEdite_idCliente->text();
    QString num_str = ui->LineEdit_Nper->text();

    try {
        int idR = stoi(idR_str.toLocal8Bit().data());
        int idC = stoi(idC_str.toLocal8Bit().data());
        int num = stoi(num_str.toLocal8Bit().data());
    } catch (invalid_argument const &e) {
        QMessageBox::warning(this, "Advertencia", "Ingreso de datos erroneo.");
    }
}

void Gui_Registro::on_Cancelar_button_clicked()
{
    close();//Permite cerra la ventana actual abierta
}
