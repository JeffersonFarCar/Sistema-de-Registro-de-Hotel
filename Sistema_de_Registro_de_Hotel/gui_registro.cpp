#include "gui_registro.h"
#include "ui_gui_registro.h"

#include "registro_habitacion.h"
#include "registro.h"
#include "registro_crud.h"
#include "conexion.h"
#include "utils.h"
#include "gui_factura.h"

#include <QMessageBox>
#include <QComboBox>
#include <QStringList>
#include <QDebug>
#include <QDate>

#include <iostream>
#include <string>
using namespace std;

/**
 * @brief Gui_Registro::Gui_Registro
 * @param parent
 * Constructor de la vista
 */
Gui_Registro::Gui_Registro(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Gui_Registro)
{
    this->setFixedSize(QSize(397, 432));
    ui->setupUi(this);

    //Coloca el id de registro automáticamente
    Utils utils;
    int id = utils.getLastId("registros", "idregistro") +1;
    ui->LineEdit_idRegis->setText(QString::number(id));

    fillComboBox(); // Metodo para llenar el combobox
    QDate q;
    ui->fechaE->setDate(q.currentDate());
    ui->fechaS->setDate(q.currentDate());
}

/**
 * @brief Gui_Registro::~Gui_Registro
 * Destructor de la vista GUI-Registro, para evitar consumo de memoria
 */
Gui_Registro::~Gui_Registro()
{
    delete ui;
}

/**
 * @brief Gui_Registro::fillComboBox
 * Llena el combobox con los nombres de clientes de la BD
 */
void Gui_Registro::fillComboBox(){
    QString sql;
    sql.append("SELECT idcliente, nombre, apellido FROM personas INNER JOIN clientes WHERE idpersona = id_persona");
    Conexion conn;
    conn.Conectar();
    QSqlQuery query;
    query.prepare(sql);
    query.exec();
    while(query.next()){
        QString id = query.value(0).toByteArray().constData();
        QString nombres = query.value(1).toByteArray().constData();
        QString apellidos = query.value(2).toByteArray().constData();
        clientes_id.append(id);
        clientes_nomape.append(nombres+" "+apellidos);
    }
    conn.Cerrar();
    ui->Cliente_cmbox->addItems(clientes_nomape);
}

/**
 * @brief Gui_Registro::on_Cliente_cmbox_currentIndexChanged
 * @param index El index de cada elemento en el combobox
 * Actualiza el campo ID-Cliente de la vista
 */
void Gui_Registro::on_Cliente_cmbox_currentIndexChanged(int index)
{
    if(index != -1)
        ui->LineEdite_idCliente->setText(clientes_id.at(index));
}

/**
 * @brief Gui_Registro::on_Registrar_button_clicked
 * Recibe el evento de click para guardar la información en la BD
 */
void Gui_Registro::on_Registrar_button_clicked()
{
    QString idR_str = ui->LineEdit_idRegis->text();
    QString idC_str = ui->LineEdite_idCliente->text();
    QString idE_str = ui->LineEdit_NomEmpleado->text();
    QString fechaE = ui->fechaE->text();
    QString fechaS = ui->fechaS->text();
    int idR=0, idC=0, idE=0;
    try {
        if(idR_str.isEmpty()){
            throw invalid_argument("ID Registro invalido");
        }else if(idC_str.isEmpty()){
            throw invalid_argument("ID Cliente invalido");
        }else{
            idR = stoi(idR_str.toLocal8Bit().data());
            idC = stoi(idC_str.toLocal8Bit().data());
            idE = 1;
        }
        if(clientes_nomape.indexOf(ui->Cliente_cmbox->currentText()) == -1){
            throw invalid_argument("Seleccione un nombre de cliente");
        }
        if(ui->fechaE->date() > ui->fechaS->date()){
            throw invalid_argument("La fecha de Salida no es válida.");
        }

        //(idR, idC, idE, cantH, string _fechE, string _fechS);
        Registro r(idR, idC, idE, 2, fechaE.toLocal8Bit().data(), fechaS.toLocal8Bit().data());
        Registro_CRUD rcrud;
        rcrud.createRegistro(r);
        close();
    } catch (invalid_argument const &e) {
        QMessageBox::warning(this, "Cuidado!!", e.what());
    }
}

/**
 * @brief Gui_Registro::on_Registrar_button_2_clicked
 * Abre la vista de Factura
 */
void Gui_Registro::on_Registrar_button_2_clicked()
{
    gui_factura guiR;
    guiR.setModal(true);
    guiR.exec();
}

/**
 * @brief Gui_Registro::on_Hab_Reg_Button_clicked
 * Abre una nueva ventana donde se registraran la cantidad de habitaciones
 */
void Gui_Registro::on_Hab_Reg_Button_clicked()
{
    Registro_habitacion rh;
    rh.setModal(true);
    rh.exec();
}

/**
 * @brief Gui_Registro::on_Cancelar_button_clicked
 * Permite cerrar la vista actual
 */
void Gui_Registro::on_Cancelar_button_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Salir", "¿Esta seguro de salir?",
                                    QMessageBox::Yes|QMessageBox::No);
    if(reply == QMessageBox::Yes){
        QMessageBox::warning(this, "Advertencia", "No se guardaron los datos.");
        close();
    }
}
