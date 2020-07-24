#include "gui_registro.h"
#include "ui_gui_registro.h"

#include "registro_habitacion.h"
#include "conexion.h"
#include "utils.h"
#include "gui_factura.h"
#include <QMessageBox>
#include <QComboBox>
#include <QStringList>

#include <iostream>
#include <string>
using namespace std;

Gui_Registro::Gui_Registro(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Gui_Registro)
{
    this->setFixedSize(QSize(397, 432)); //646, 395
    ui->setupUi(this);

    QStringList fonts = {};

    QString sql;
    sql.append("SELECT nombre FROM personas INNER JOIN clientes WHERE idpersona = id_persona");
    Conexion conn;
    conn.Conectar();
    QSqlQuery query;
    query.prepare(sql);
    query.exec();
    while(query.next()){
        QString nombres = query.value(0).toByteArray().constData();
        fonts.append(nombres);
    }
    conn.Cerrar();
    Utils utils;
    int id = utils.getLastId("registros", "idregistro") +1;

    ui->LineEdit_idRegis->setText(QString::number(id));
    ui->Cliente_cmbox->addItems(fonts);
}

Gui_Registro::~Gui_Registro()
{
    delete ui;
}

void Gui_Registro::on_Registrar_button_clicked()
{
    QString idR_str = ui->LineEdit_idRegis->text();
    QString idC_str = ui->LineEdite_NomCliente->text();
    QString num_str = ui->LineEdit_NomEmpleado->text();

    try {
        int idR = stoi(idR_str.toLocal8Bit().data());
        int idC = stoi(idC_str.toLocal8Bit().data());
        int num = stoi(num_str.toLocal8Bit().data());
        close();
    } catch (invalid_argument const &e) {
        QMessageBox::warning(this, "Advertencia", "Ingreso de datos erroneo.");
    }
}

void Gui_Registro::on_pushButton_clicked()
{
    Registro_habitacion rh;
    rh.setModal(true);
    rh.exec();
}

void Gui_Registro::on_Cancelar_button_clicked()
{
    close();//Permite cerra la ventana actual abierta
}

void Gui_Registro::on_LineEdite_NomCliente_textChanged(const QString &arg1)
{
    QStringList fonts = {};
    ui->Cliente_cmbox->clear();
    QString sql;
    sql.append("SELECT nombre FROM personas INNER JOIN clientes WHERE idpersona = id_persona AND nombre LIKE'"+arg1+"%'");
    Conexion conn;
    conn.Conectar();
    QSqlQuery query;
    query.prepare(sql);
    query.exec();
    while(query.next()){
        QString nombres = query.value(0).toByteArray().constData();
        fonts.append(nombres);
    }
    conn.Cerrar();
    ui->Cliente_cmbox->addItems(fonts);
}

void Gui_Registro::on_Registrar_button_2_clicked()
{
    gui_factura guiR;
        guiR.setModal(true);
        guiR.exec();
}
