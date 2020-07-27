#include "ui_gui_menu_cliente.h"
#include "gui_menu_cliente.h"
#include "gui_cliente.h"
#include "cliente_crud.h"
#include "conexion.h"

#include <QtSql>
#include <QtSql/QSqlQuery>
#include <QString>
#include <QtSql/QSqlDatabase>
#include <QStandardItemModel>
#include <QMessageBox>

Cliente_CRUD crudC; //Para poder elminiar y modificar

Gui_Menu_Cliente::Gui_Menu_Cliente(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Gui_Menu_Cliente)
{
    //Definicion de variables
    this->setFixedSize(QSize(776, 350));
    ui->setupUi(this);
    fila = -1; //Item seleccionado en la tabla
    mostrarDatos(); //Metodo inicializador, mostrar datos de BD en la tabla
}

void Gui_Menu_Cliente::mostrarDatos()
{
    prepararTabla();

    Conexion conect;
    conect.Conectar();

    QSqlQuery query_consulta;
    QString consulta="SELECT idpersona, dni, nombre, apellido, direccion, email, ciudadania FROM personas INNER JOIN clientes WHERE personas.idpersona = clientes.id_persona";
    query_consulta.exec(consulta);
    int fila=0;
    ui->newTableC->setRowCount(0);

    while(query_consulta.next()){

        ui->newTableC->insertRow(fila);
        ui->newTableC->setItem(fila, 0, new QTableWidgetItem(query_consulta.value(0).toByteArray().constData()));
        ui->newTableC->setItem(fila, 1, new QTableWidgetItem(query_consulta.value(1).toByteArray().constData()));
        ui->newTableC->setItem(fila, 2, new QTableWidgetItem(query_consulta.value(2).toByteArray().constData()));
        ui->newTableC->setItem(fila, 3, new QTableWidgetItem(query_consulta.value(3).toByteArray().constData()));
        ui->newTableC->setItem(fila, 4, new QTableWidgetItem(query_consulta.value(4).toByteArray().constData()));
        ui->newTableC->setItem(fila, 5, new QTableWidgetItem(query_consulta.value(5).toByteArray().constData()));
        ui->newTableC->setItem(fila, 6, new QTableWidgetItem(query_consulta.value(6).toByteArray().constData()));
        fila++;
    }
    conect.Cerrar();
}

void Gui_Menu_Cliente::on_Agregar_button_clicked()
{
    Gui_Cliente guiC;
    guiC.setModal(true);
    guiC.exec();
    mostrarDatos();
}

void Gui_Menu_Cliente::on_newTableC_itemClicked(QTableWidgetItem *item)
{
    //Almacena el entero de la fila seleccionada, para borrar o modificar
    fila = item->row();

    //Cpaturar datos para poder modificarlo
    QTableWidgetItem *dni = ui->newTableC->item(fila,1);
    QTableWidgetItem *nombre = ui->newTableC->item(fila,2);
    QTableWidgetItem *apellido = ui->newTableC->item(fila,3);
    QTableWidgetItem *direccion = ui->newTableC->item(fila,4);
    QTableWidgetItem *email = ui->newTableC->item(fila,5);
    QTableWidgetItem *ciudadania = ui->newTableC->item(fila,6);

    //Recuperar datos de la tabla a los texedit para modificar
    ui->lineEditDNI->setText(dni->text());
    ui->lineEditNOMBRE->setText(nombre->text());
    ui->lineEditAPELLIDO->setText(apellido->text());
    ui->lineEditDIRECCION->setText(direccion->text());
    ui->lineEditCIUDADANIA->setText(ciudadania->text());
    ui->lineEditEMAIL->setText(email->text());
}

void Gui_Menu_Cliente::on_pushButtoMODIFICAR_clicked()
{
    QMessageBox::StandardButton action;

    Cliente cliente;
    try {
        if(validarDatos()){
            int dni_C = stoi(ui->lineEditDNI->text().toLocal8Bit().data());
            string nombre = ui->lineEditNOMBRE->text().toStdString();
            string apellido = ui->lineEditAPELLIDO->text().toStdString();
            string direccion = ui->lineEditDIRECCION->text().toStdString();
            string ciudadania = ui->lineEditCIUDADANIA->text().toStdString();
            string email = ui->lineEditEMAIL->text().toStdString();

            QString id = ui->newTableC->item(fila,0)->text();
            cliente.setId(id.toInt());
            cliente.setDNI(dni_C);
            cliente.setNombre(nombre); cliente.setApellido(apellido); cliente.setDireccion(direccion);
            cliente.setEmail(email); cliente.setCiudadania(ciudadania);

            //Mensaje de Alerta
            action = QMessageBox::question(this, "Cuidado", "¿Está seguro que desa editar el dato?");
            if(action == QMessageBox::Yes){
                crudC.updateCliente(cliente); //Realizar Cambios
                mostrarDatos();
                QMessageBox::information(this, "Mensaje", "Cambios realizados correctamente.");
            } else{ QMessageBox::information(this,"Mensaje","No se realizó ningun cambio"); }
        }
    } catch (exception  &e) {
        QMessageBox::warning(this, "Advertencia", "Problema al editar, revisa los datos.");
    }

}

void Gui_Menu_Cliente::on_pushButtonELIMINAR_clicked()
{
    QString id = ui->newTableC->item(fila,0)->text();
    QMessageBox::StandardButton action;
    action = QMessageBox::question(this, "Cuidado", "¿Está seguro que desa borrar el dato?");
    if(action == QMessageBox::Yes)
        crudC.deleteCliente(id.toInt());
     mostrarDatos();
}

void Gui_Menu_Cliente::prepararTabla(){
    /*----Preparacion de la tabla----*/
    ui->newTableC->setColumnCount(7);
    QStringList l;
    l<<"ID"<<"DNI"<<"Nombre"<<"Apellido"<<"Direccion"<<"Email"<<"Ciudadania";

    ui->newTableC->setHorizontalHeaderLabels(l);
    ui->newTableC->setColumnWidth(0,80);
    ui->newTableC->setColumnWidth(1,100);
    ui->newTableC->setColumnWidth(2,120);
    ui->newTableC->setColumnWidth(3,150);
    ui->newTableC->setColumnWidth(4,120);
    ui->newTableC->setColumnWidth(5,120);
    ui->newTableC->setColumnWidth(6,120);

    /*----Fin preparacion de la tabla----*/
}

bool Gui_Menu_Cliente::validarDatos()
{

    /*Inicio Ayuda para ingreso de datos*/
        QRegExp exp_dni("[0-9]{8}");
        QRegExp exp_N_A_C("^([A-ZÁÉÍÓÚ]{1}[a-zñáéíóú]+[\\s]*)+$");
        QRegExp exp_email("[\\w]+@{1}[\\w]+\\.[a-z]{2,3}");

        ui->lineEditDNI->setValidator(new QRegExpValidator(exp_dni, this));
        ui->lineEditNOMBRE->setValidator(new QRegExpValidator(exp_N_A_C, this));
        ui->lineEditAPELLIDO->setValidator(new QRegExpValidator(exp_N_A_C, this));
        ui->lineEditCIUDADANIA->setValidator(new QRegExpValidator(exp_N_A_C, this));
        ui->lineEditEMAIL->setValidator(new QRegExpValidator(exp_email, this));
    /*Fin Ayuda*/

        /*Comprobación de ingresos correctos*/
          bool ifDni =  exp_dni.exactMatch(ui->lineEditDNI->text());
          bool ifNombre = exp_N_A_C.exactMatch(ui->lineEditNOMBRE->text());
          bool ifApellido = exp_N_A_C.exactMatch(ui->lineEditAPELLIDO->text());
          bool ifCiudadania = exp_N_A_C.exactMatch(ui->lineEditCIUDADANIA->text());
          bool ifEmail = exp_email.exactMatch(ui->lineEditEMAIL->text());

        if(ifDni == false){
            ui->lineEditDNI->setStyleSheet("border: 1px solid red;");
        }else {
            ui->lineEditDNI->setStyleSheet("border: 1px solid green;");
            ifDni =true;
        }

        if(ifNombre == false){
             ui->lineEditNOMBRE->setStyleSheet("border: 1px solid red;");
        }else {
            ui->lineEditNOMBRE->setStyleSheet("border: 1px solid green;");
            ifNombre = true;
        }

        if(ifApellido == false){
            ui->lineEditAPELLIDO->setStyleSheet("border: 1px solid red;");
        }else {
            ui->lineEditAPELLIDO->setStyleSheet("border: 1px solid green;");
            ifApellido = true;
        }

        if (ui->lineEditDIRECCION->text() !=""){
            ui->lineEditDIRECCION->setStyleSheet("border: 1px solid green;");
        }

        if(ifCiudadania == false){
            ui->lineEditCIUDADANIA->setStyleSheet("border: 1px solid red;");
        }else {
            ui->lineEditCIUDADANIA->setStyleSheet("border: 1px solid green;");
            ifCiudadania = true;
        }

        if(ifEmail == false){
            ui->lineEditEMAIL->setStyleSheet("border: 1px solid red;");
        }else {
            ui->lineEditEMAIL->setStyleSheet("border: 1px solid green;");
            ifEmail = true;
        }

        if(ifDni==true && ifNombre==true && ifApellido==true && ifCiudadania==true && ifEmail==true)
        return true; //Si todos son correctos registra
        else return false; //No registra por almenos un error
}

void Gui_Menu_Cliente::on_lineEdit_buscar_textChanged(const QString &arg1)
{
    ui->newTableC->clear();
    prepararTabla();
    Conexion conect;
        ui->newTableC->setRowCount(0);
        conect.Conectar();
        QSqlQuery query_consulta;

        QString consulta="SELECT idpersona, dni, nombre, apellido, direccion, email, "
                         "ciudadania FROM personas INNER JOIN clientes WHERE idpersona = id_persona AND nombre LIKE '"+arg1+"%'";

        query_consulta.exec(consulta);

        int fila=0;
        ui->newTableC->setRowCount(0);

        while(query_consulta.next()){

            ui->newTableC->insertRow(fila);
            ui->newTableC->setItem(fila, 0, new QTableWidgetItem(query_consulta.value(0).toByteArray().constData()));
            ui->newTableC->setItem(fila, 1, new QTableWidgetItem(query_consulta.value(1).toByteArray().constData()));
            ui->newTableC->setItem(fila, 2, new QTableWidgetItem(query_consulta.value(2).toByteArray().constData()));
            ui->newTableC->setItem(fila, 3, new QTableWidgetItem(query_consulta.value(3).toByteArray().constData()));
            ui->newTableC->setItem(fila, 4, new QTableWidgetItem(query_consulta.value(4).toByteArray().constData()));
            ui->newTableC->setItem(fila, 5, new QTableWidgetItem(query_consulta.value(5).toByteArray().constData()));
            ui->newTableC->setItem(fila, 6, new QTableWidgetItem(query_consulta.value(6).toByteArray().constData()));
            fila++;
        }
        conect.Cerrar();
}

Gui_Menu_Cliente::~Gui_Menu_Cliente()
{
    delete ui;
}
