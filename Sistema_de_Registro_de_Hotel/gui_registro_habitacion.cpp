#include "gui_registro_habitacion.h"
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
 * Asigna cabeceras a las tablas
 */
void Registro_habitacion::prepararTabla(){
    /*----Preparacion de la tabla1----*/
    ui->TiposHTableWidget->setColumnCount(5);
    QStringList l;
    l<<"ID"<<"Tipo"<<"Descripcion"<<"Precio"<<"Disponibles";

    ui->TiposHTableWidget->setHorizontalHeaderLabels(l);
    ui->TiposHTableWidget->setColumnWidth(0,50);
    ui->TiposHTableWidget->setColumnWidth(1,70);
    ui->TiposHTableWidget->setColumnWidth(2,200);
    ui->TiposHTableWidget->setColumnWidth(3,70);
    ui->TiposHTableWidget->setColumnWidth(4,70);
    /*----Fin preparacion de la tabla1----*/


    /*----Preparacion de la tabla2----*/
    ui->HabitacionesTableWidget->setColumnCount(3);
    QStringList l2;
    l2<<"ID"<<"Tipo"<<"N° Habitación";

    ui->HabitacionesTableWidget->setHorizontalHeaderLabels(l2);
    ui->HabitacionesTableWidget->setColumnWidth(0,50);
    ui->HabitacionesTableWidget->setColumnWidth(1,70);
    ui->HabitacionesTableWidget->setColumnWidth(2,80);
    /*----Fin preparacion de la tabla2----*/
}

/**
 * @brief Registro_habitacion::llenarTabla
 * Se encarga de mostrar los datos de tipos de habitación en la tabla
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
    ui->TiposHTableWidget->setRowCount(0);
    while(sqlquery.next()){
        ui->TiposHTableWidget->insertRow(cant);
        ui->TiposHTableWidget->setItem(cant, 0, new QTableWidgetItem(sqlquery.value(0).toByteArray().constData()));
        ui->TiposHTableWidget->setItem(cant, 1, new QTableWidgetItem(sqlquery.value(1).toByteArray().constData()));
        ui->TiposHTableWidget->setItem(cant, 2, new QTableWidgetItem(sqlquery.value(2).toByteArray().constData()));
        ui->TiposHTableWidget->setItem(cant, 3, new QTableWidgetItem(sqlquery.value(3).toByteArray().constData()));
        ui->TiposHTableWidget->setItem(cant, 4, new QTableWidgetItem(cantidades.at(cant)));
        cant++;
    }
    conn.Cerrar();
}

/**
 * @brief Registro_habitacion::llenarTablaHabitaciones
 * @param id El id del tipo de habitacion
 * Muestra todas las habitaciones disponibles del tipo de habitación seleccionado
 */
void Registro_habitacion::llenarTablaHabitaciones(QString id){
    Conexion conn;
    conn.Conectar();

    QString queryTH;
    queryTH.append("SELECT idhabitacion, nombretipo, numerohab FROM habitaciones INNER JOIN tipohabitacion ON "
                   "habitaciones.idtipohab = tipohabitacion.idtipohab "
                   "WHERE idestado = 1 AND habitaciones.idtipohab = "+id);

    QSqlQuery sqlquery;
    sqlquery.prepare(queryTH);
    sqlquery.exec();

    int cant = 0;
    ui->HabitacionesTableWidget->setRowCount(0);
    while(sqlquery.next()){
        if(habitacionesSelected.indexOf(sqlquery.value(0).toByteArray().constData()) == -1){
            ui->HabitacionesTableWidget->insertRow(cant);
            ui->HabitacionesTableWidget->setItem(cant, 0, new QTableWidgetItem(sqlquery.value(0).toByteArray().constData()));
            ui->HabitacionesTableWidget->setItem(cant, 1, new QTableWidgetItem(sqlquery.value(1).toByteArray().constData()));
            ui->HabitacionesTableWidget->setItem(cant, 2, new QTableWidgetItem(sqlquery.value(2).toByteArray().constData()));
            cant++;
        }
    }
    conn.Cerrar();
}

/**
 * @brief Registro_habitacion::on_TiposHTableWidget_itemClicked
 * @param item
 * Permite ver las habitaciones disponibles
 */
void Registro_habitacion::on_TiposHTableWidget_itemClicked(QTableWidgetItem *item)
{
    ui->HabitacionesTableWidget->clear();
    prepararTabla();
    fTH = item->row(); //fila del tipo de habitacion
    llenarTablaHabitaciones(QString::number(item->row()+1));

}

/**
 * @brief Registro_habitacion::on_SeleaccionadaslistWidget_itemDoubleClicked
 * @param item Es el item de la lista de habitaciones seleccionadas
 * Al hacer doble click se elimina la habitación seleccionada
 */
void Registro_habitacion::on_SeleaccionadaslistWidget_itemDoubleClicked(QListWidgetItem *item)
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::warning(this, "Quitar Habitación", "¿Desea quitar esta habitación?",
                                    QMessageBox::Yes|QMessageBox::No);
    if(reply == QMessageBox::Yes){
        Utils u;
        u.updateEstado("habitaciones", "idestado = 1", "idhabitacion = "+habitacionesSelected.at(ui->SeleaccionadaslistWidget->row(item)));

        Registro_Habitacion_CRUD rhcrud;
        QString str = QString::number(idRegistro)+" AND idhabitacion = "+habitacionesSelected.at(ui->SeleaccionadaslistWidget->row(item));
        rhcrud.DeleteRegistro_Habitacion(str);

        habitacionesSelected.removeAt(ui->SeleaccionadaslistWidget->row(item));
        ui->SeleaccionadaslistWidget->takeItem(ui->SeleaccionadaslistWidget->row(item));

        mostrarDatos();
        llenarTablaHabitaciones(QString::number(fTH+1));
    }
}

/**
 * @brief Registro_habitacion::on_HabitacionesTableWidget_itemClicked
 * @param item Es el item seleccionado de la tabla
 * Permite agregar las habitaciones que se seleccionen
 */
void Registro_habitacion::on_HabitacionesTableWidget_itemClicked(QTableWidgetItem *item)
{
    int fila = item->row();
    try {
        QString habitacion = ui->HabitacionesTableWidget->item(fila, 0)->text();
        if(habitacionesSelected.indexOf(habitacion) == -1){
            Utils u;
            u.updateEstado("habitaciones", "idestado = 2", "idhabitacion = "+habitacion);

            habitacionesSelected.append(habitacion);
            ui->SeleaccionadaslistWidget->addItem(ui->TiposHTableWidget->item(fTH, 1)->text()+" N°"+ui->HabitacionesTableWidget->item(fila, 2)->text());

            Registro_Habitacion_CRUD rhcrud;
            QString str = "("+QString::number(idRegistro)+", "+habitacion+")";
            rhcrud.CreateRegistro_Habitacion("registro_habitacion", str);

            ui->HabitacionesTableWidget->removeRow(fila);
            mostrarDatos();
        }else
            throw invalid_argument("Esta habitación ya fue elegida.");
    } catch (invalid_argument const &e) {
        QMessageBox::warning(this, "Dato Repetido", "Ya fue agregado este dato.");
    }
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
 * @brief Registro_habitacion::habitacionesXRegistro
 * Muestra las habitaciones seleccionadas por registro
 */
void Registro_habitacion::habitacionesXRegistro(){
    Conexion conn;
    conn.Conectar();
    QString query = "SELECT * FROM habitaciones INNER JOIN registro_habitacion ON "
                    "habitaciones.idhabitacion = registro_habitacion.idhabitacion "
                    "WHERE idregistro = "+QString::number(idRegistro);
    QSqlQuery sql;
    sql.prepare(query);
    sql.exec();
    while(sql.next()){
        habitacionesSelected.append(sql.value(0).toByteArray().constData());
        int f = ((QString)sql.value(1).toByteArray().constData()).toInt();
        ui->SeleaccionadaslistWidget->addItem(ui->TiposHTableWidget->item(f-1, 1)->text()+" N°"+sql.value(3).toByteArray());
    }
    conn.Cerrar();
}

QStringList Registro_habitacion::getHabitacionesSelected() const{
    return habitacionesSelected;
}

/**
 * @brief Registro_habitacion::setIdRegistro
 * @param _idR Es el id del registro actual
 */
void Registro_habitacion::setIdRegistro(int _idR){
    idRegistro = _idR;
    habitacionesXRegistro();
}

/**
 * @brief Registro_habitacion::on_AceptarRHButton_clicked
 * Verifica si se han seleccionado habitaciones
 */
void Registro_habitacion::on_AceptarRHButton_clicked()
{
    if(!habitacionesSelected.isEmpty()){
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
        close();
    }
}
