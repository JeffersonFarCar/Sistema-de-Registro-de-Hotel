#include "gui_registro.h"
#include "ui_gui_registro.h"

#include "gui_registro_habitacion.h"
#include "registro_habitacion_crud.h"
#include "registro.h"
#include "registro_crud.h"
#include "conexion.h"
#include "utils.h"
#include "gui_factura.h"
#include "singleton.h"

#include <QMessageBox>
#include <QComboBox>
#include <QStringList>
#include <QDebug>
#include <QDate>

#include <iostream>
#include <string>
#include <fstream>
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

    singleton *s2 = singleton::instance();
    QString idE = utils.getIds("idpersona", "personas", "dni="+QString::number(s2->getDNI())).at(0);
    ui->LineEdit_NomEmpleado->setText(idE);

    canthabitaciones = 0;
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
    sql.append("SELECT id_persona, nombre, apellido FROM personas INNER JOIN clientes WHERE idpersona = id_persona");
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
 * @brief Gui_Registro::on_Registrar_button_2_clicked
 * Abre la vista de Factura
 */
void Gui_Registro::on_Registrar_button_2_clicked()
{
    QString facturita;
         QString NroFactura;
    Conexion conect;
          conect.Conectar();

          //Consulta a la tabla personas, para obtener los datos a partir del id del cliente (clave foranea)
          QString consulta;
          consulta.append("SELECT*FROM personas inner join clientes on personas.idpersona=clientes.id_persona where id_persona ="+ui->LineEdite_idCliente->text()+";");
          QSqlQuery query;
          query.prepare(consulta);
          query.exec();
          query.next();
          // LineEdite_idCliente
          //insercion de los datos obtenidos a un objeto cliente
          Cliente cliente;

          cliente.setCiudadania(query.value(7).toByteArray().constData());//
          cliente.setEmail(query.value(5).toByteArray().constData());
          cliente.setNombre(query.value(2).toByteArray().constData());
          cliente.setDireccion(query.value(4).toByteArray().constData());
          cliente.setApellido(query.value(3).toByteArray().constData());

          QDate entrada;
          QDate salida(ui->fechaS->date().day(),ui->fechaS->date().month(),ui->fechaS->date().year());
          entrada.setDate(ui->fechaE->date().day(),ui->fechaE->date().month(),ui->fechaE->date().year());
        int a = ui->fechaE->date().day();
        int b = ui->fechaE->date().month();
        int c = ui->fechaE->date().year();
        entrada.setDate(a,b,c);
        int d1,m1,y1,d2,m2,y2;
        d2=ui->fechaS->date().day();m2=ui->fechaS->date().month();y2=ui->fechaS->date().year();
        d1=ui->fechaE->date().day();m1=ui->fechaE->date().month();y1=ui->fechaE->date().year();

        //validacion

            QString idR_str = ui->LineEdit_idRegis->text();
            QString idC_str = ui->LineEdite_idCliente->text();
            QString idE_str = QString::number(2);
            QString fechaE = ui->fechaE->text();
            QString fechaS = ui->fechaS->text();
            int idR=0, idC=0, idE=0;
            try {
                idR = stoi(idR_str.toLocal8Bit().data());
                idC = stoi(idC_str.toLocal8Bit().data());
                idE = stoi(idE_str.toLocal8Bit().data());

                if(clientes_nomape.indexOf(ui->Cliente_cmbox->currentText()) == -1){
                    throw out_of_range("Seleccione un nombre de cliente.");
                }
                if(ui->fechaE->date() > ui->fechaS->date()){
                    throw invalid_argument("La fecha de Salida no es válida.");
                }
                if(canthabitaciones < 1)
                    throw out_of_range("Debe seleccionar una habitación.");
                gui_factura guiR;
                guiR.setCliente(cliente);
                guiR.setFechas(d1,m1,y1,d2,m2,y2);
                guiR.setModal(true);
                guiR.exec();

                facturita=guiR.getFactura();
                        NroFactura=guiR.getNroFactura();
                        guiR.close();


            } catch (invalid_argument const &e) {
                QMessageBox::warning(this, "Cuidado!!", "Revise los campos de ID.");
            } catch (out_of_range const &oor){
                QMessageBox::warning(this, "Cuidado!!", oor.what());
            }
            string a2 = "./facturas/facturaNro"+NroFactura.toStdString()+".txt";
                factura=facturita.toUtf8().constData();
                nroFactura=NroFactura;
                NameFactura=a2;
            //fin validacion
}

//Aqui      <--------------
void Gui_Registro::setHabitacionesSelected(QStringList _habSelec){
    habitacionesSelected = _habSelec;
}
QStringList Gui_Registro::getHabitacionesSelected() const{
    return habitacionesSelected;
}

/**
 * @brief Gui_Registro::on_Hab_Reg_Button_clicked
 * Abre una nueva ventana donde se registraran la cantidad de habitaciones
 */
void Gui_Registro::on_Hab_Reg_Button_clicked()
{
    std::ofstream ofs;
        ofs.open("tmp.dat", std::ofstream::out | std::ofstream::trunc);
        ofs.close();

    Registro_habitacion rh;
    rh.setIdRegistro(ui->LineEdit_idRegis->text().toInt());
    rh.setModal(true);
    rh.exec();
    Utils u;
    canthabitaciones = u._contar("registro_habitacion", "WHERE idregistro = "+ui->LineEdit_idRegis->text());
    habitacionesSelected = rh.getHabitacionesSelected();
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
        idR = stoi(idR_str.toLocal8Bit().data());
        idC = stoi(idC_str.toLocal8Bit().data());
        idE = stoi(idE_str.toLocal8Bit().data());

        if(clientes_nomape.indexOf(ui->Cliente_cmbox->currentText()) == -1){
            throw out_of_range("Seleccione un nombre de cliente.");
        }
        if(ui->fechaE->date() > ui->fechaS->date()){
            throw invalid_argument("La fecha de Salida no es válida.");
        }
        if(canthabitaciones < 1)
            throw out_of_range("Debe seleccionar una habitación.");

        //(idR, idC, idE, cantH, string _fechE, string _fechS);
        Registro r(idR, idC, idE, 2, fechaE.toLocal8Bit().data(), fechaS.toLocal8Bit().data());
        Registro_CRUD rcrud;
        rcrud.createRegistro(r);
        QString sql;
                Conexion conn;
                conn.Conectar();
                QSqlQuery query;
                sql="insert into factura (factura_id)values ("+nroFactura+");";
                query.prepare(sql);
                query.exec();
                conn.Cerrar();



                ofstream f2(NameFactura,ios::out | ios::binary);//f1.open("entrada.dat", ios::binary);
                f2<<factura<<endl;
                close();

        close();
    } catch (invalid_argument const &e) {
        QMessageBox::warning(this, "Cuidado!!", "Revise los campos de ID.");
    } catch (out_of_range const &oor){
        QMessageBox::warning(this, "Cuidado!!", oor.what());
    }
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
        Utils u;
        QStringList ids = u.getIds("idhabitacion", "registro_habitacion", "idregistro = "+ui->LineEdit_idRegis->text());
        for(int i=0; i<ids.size(); i++){
            u.updateEstado("habitaciones", "idestado = 1", "idhabitacion = "+ids.at(i));
        }
        Registro_Habitacion_CRUD rhc;
        rhc.DeleteRegistro_Habitacion(ui->LineEdit_idRegis->text());
        close();
    }
}
