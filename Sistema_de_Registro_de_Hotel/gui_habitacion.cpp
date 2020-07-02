#include "gui_habitacion.h"
#include "ui_gui_habitacion.h"
#include "gui_tipo_habitacion.h"
#include "mainwindow.h"
#include "gui_estado_habitacion.h"

#include <QMessageBox>
#include <iostream>
#include <string>
using namespace std;

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

void gui_habitacion::on_pushButton_3_clicked()
{
    QString idH_str = ui->lineEdit_2->text();
    QString numH_str = ui->lineEdit_3->text();
    QString numP_str = ui->lineEdit_4->text();

    try {
        int idH = stoi(idH_str.toLocal8Bit().data());
        int numH = stoi(numH_str.toLocal8Bit().data());
        int numP = stoi(numP_str.toLocal8Bit().data());
    } catch (invalid_argument const &e) {
        QMessageBox::warning(this, "Advertencia", "Ingreso de datos erroneo.");
    }
}

void gui_habitacion::on_pushButton_4_clicked()
{
    close();//Permite cerra la ventana actual abierta
}
