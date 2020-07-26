#include "registro_habitacion.h"
#include "ui_registro_habitacion.h"

#include <QDebug>
#include <QMessageBox>
#include <QStringList>

#include "conexion.h"
#include "utils.h"
#include "registro_habitacion_crud.h"

/**
 * @brief Registro_habitacion::Registro_habitacion
 * @param parent
 * Constructor de la clase
 */
Registro_habitacion::Registro_habitacion(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Registro_habitacion)
{
    this->setFixedSize(QSize(546, 385));
    ui->setupUi(this);
    mostrarDatos();
}

/**
 * @brief Registro_habitacion::~Registro_habitacion
 * Destructor de la clase
 */
Registro_habitacion::~Registro_habitacion()
{
    delete ui;
}

/**
 * @brief Registro_habitacion::mostrarDatos
 * Permite visualizar los datos en la vista
 */
void Registro_habitacion::mostrarDatos(){
    prepararTabla();
    llenarTabla();
}

/**
 * @brief Registro_habitacion::prepararTabla
 * Asigna cabeceras a la tabla
 */
void Registro_habitacion::prepararTabla(){
    /*----Preparacion de la tabla1----*/
    ui->RHTableWidget->setColumnCount(5);
    QStringList l;
    l<<"ID"<<"Tipo"<<"Descripcion"<<"Precio"<<"Disponibles";

    ui->RHTableWidget->setHorizontalHeaderLabels(l);
    ui->RHTableWidget->setColumnWidth(0,50);
    ui->RHTableWidget->setColumnWidth(1,70);
    ui->RHTableWidget->setColumnWidth(2,200);
    ui->RHTableWidget->setColumnWidth(3,70);
    ui->RHTableWidget->setColumnWidth(4,70);
    /*----Fin preparacion de la tabla1----*/


    /*----Preparacion de la tabla2----*/
    ui->THtableWidget->setColumnCount(2);
    QStringList l2;
    l2<<"ID"<<"Número Habitación";

    ui->THtableWidget->setHorizontalHeaderLabels(l2);
    ui->THtableWidget->setColumnWidth(0,50);
    ui->THtableWidget->setColumnWidth(1,120);
    /*----Fin preparacion de la tabla2----*/
}

/**
 * @brief Registro_habitacion::llenarTabla
 * Se encarga de mostrar los datos en la tabla
 */
void Registro_habitacion::llenarTabla(){
    QStringList cantidades = habitacionesXtipo();

    Conexion conn;
    conn.Conectar();

    QString queryTH;
    queryTH.append("SELECT * FROM tipohabitacion;");

    QSqlQuery sqlquery;
    sqlquery.prepare(queryTH);
    sqlquery.exec();

    int cant = 0;
    ui->RHTableWidget->setRowCount(0);
    while(sqlquery.next()){
        ui->RHTableWidget->insertRow(cant);
        ui->RHTableWidget->setItem(cant, 0, new QTableWidgetItem(sqlquery.value(0).toByteArray().constData()));
        ui->RHTableWidget->setItem(cant, 1, new QTableWidgetItem(sqlquery.value(1).toByteArray().constData()));
        ui->RHTableWidget->setItem(cant, 2, new QTableWidgetItem(sqlquery.value(2).toByteArray().constData()));
        ui->RHTableWidget->setItem(cant, 3, new QTableWidgetItem(sqlquery.value(4).toByteArray().constData()));
        ui->RHTableWidget->setItem(cant, 4, new QTableWidgetItem(cantidades.at(cant)));
        cant++;
    }
    conn.Cerrar();
}

/**
 * @brief Registro_habitacion::habitacionesXtipo
 * @return Un arreglo con la cantidad de habitaciones por tipo
 */
QStringList Registro_habitacion::habitacionesXtipo(){
    Utils u;
    int total = u._contar("tipohabitacion", "");
    QStringList cantidades;
    int aux = 0;
    for (int i=1; i<=total; i++){
        aux = u._contar("habitaciones", "WHERE idestado = 1 AND idtipohab = "+QString::number(i));
        cantidades.append(QString::number(aux));
    }
    return cantidades;
}

/**
 * @brief Registro_habitacion::on_RHTableWidget_itemClicked
 * @param item
 * Permite ver las habitaciones disponibles
 */
void Registro_habitacion::on_RHTableWidget_itemClicked(QTableWidgetItem *item)
{
    ui->THtableWidget->clear();
    prepararTabla();
    Conexion conn;
    conn.Conectar();

    fTH = item->row();

    QString queryTH;
    queryTH.append("SELECT * FROM habitaciones WHERE idestado = 1 AND idtipohab = "+QString::number(fTH+1));

    QSqlQuery sqlquery;
    sqlquery.prepare(queryTH);
    sqlquery.exec();

    int cant = 0;
    ui->THtableWidget->setRowCount(0);
    while(sqlquery.next()){
        ui->THtableWidget->insertRow(cant);
        ui->THtableWidget->setItem(cant, 0, new QTableWidgetItem(sqlquery.value(0).toByteArray().constData()));
        ui->THtableWidget->setItem(cant, 1, new QTableWidgetItem(sqlquery.value(3).toByteArray().constData()));
        cant++;
    }
    conn.Cerrar();

}

/**
 * @brief Registro_habitacion::on_SHlistWidget_itemDoubleClicked
 * @param item Es el item de la lista de habitaciones seleccionadas
 * Al hacer doble click se elimina el elemento
 */
void Registro_habitacion::on_SHlistWidget_itemDoubleClicked(QListWidgetItem *item)
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::warning(this, "Quitar Habitación", "¿Desea quitar esta habitación?",
                                    QMessageBox::Yes|QMessageBox::No);
    if(reply == QMessageBox::Yes){
        habitacionesSelected.removeAt(ui->SHlistWidget->row(item));
        ui->SHlistWidget->takeItem(ui->SHlistWidget->row(item));
    }
}

/**
 * @brief Registro_habitacion::on_THtableWidget_itemClicked
 * @param item Es el item seleccionado de la tabla
 * Permite agregar las habitaciones que se desea
 */
void Registro_habitacion::on_THtableWidget_itemClicked(QTableWidgetItem *item)
{
    int fila = item->row();
    try {
        QString habitacion = ui->THtableWidget->item(fila, 0)->text();
        if(habitacionesSelected.indexOf(habitacion) == -1){
            habitacionesSelected.append(habitacion);
            ui->SHlistWidget->addItem(ui->RHTableWidget->item(fTH, 1)->text()+" N°"+ui->THtableWidget->item(fila, 1)->text());
        }else
            throw invalid_argument("Esta habitación ya fue elegida.");
    } catch (invalid_argument const &e) {
        QMessageBox::warning(this, "Dato Repetido", "Ya fue agregado este dato.");
    }
}


QStringList Registro_habitacion::getHabitacionesSelected() const{
    return habitacionesSelected;
}
/*
void Registro_habitacion::setHabitacionesSelected(QStringList _habSelec){
    habitacionesSelected = _habSelec;
}
*/
void Registro_habitacion::setIdRegistro(int _idR){
    idRegistro = _idR;
}

/**
 * @brief Registro_habitacion::on_AceptarRHButton_clicked
 * Guarda los datos de habitaciones y registro en la BD
 */
void Registro_habitacion::on_AceptarRHButton_clicked()
{
    Utils u;
    QString id = QString::number(idRegistro);
    QString str;
    int i=0;
    if(!habitacionesSelected.isEmpty()){
        for(i=0; i<habitacionesSelected.size()-1; i++){
            str += "("+id+", "+habitacionesSelected.at(i)+"), ";
            u.updateEstado("habitaciones", "idestado = 2", "idhabitacion = "+habitacionesSelected.at(i));
        }
        str += "("+id+", "+habitacionesSelected.at(i)+")";
        u.updateEstado("habitaciones", "idestado = 2", "idhabitacion = "+habitacionesSelected.at(i));

        Registro_Habitacion_CRUD rhcrud;
        rhcrud.CreateRegistro_Habitacion("registro_habitacion", str);
        close();
    }else{
        QMessageBox::information(this, "Cuidado!", "No hay habitaciones seleccionadas.");
    }
}

/**
 * @brief Registro_habitacion::on_CancelarRHButton_clicked
 * Se cancela el registro y se cierra la vista
 */
void Registro_habitacion::on_CancelarRHButton_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Salir", "¿Esta seguro de salir?",
                                    QMessageBox::Yes|QMessageBox::No);
    if(reply == QMessageBox::Yes){
        habitacionesSelected.clear();
        close();
    }
}
