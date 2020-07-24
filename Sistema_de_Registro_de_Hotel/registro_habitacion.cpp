#include "registro_habitacion.h"
#include "ui_registro_habitacion.h"

#include "QDebug"
#include "QSpinBox"

#include "conexion.h"
#include "utils.h"

Registro_habitacion::Registro_habitacion(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Registro_habitacion)
{
    ui->setupUi(this);
    mostrarDatos();
}

void Registro_habitacion::mostrarDatos(){
    Conexion conn;
    conn.Conectar();

    QString queryTH;
    queryTH.append("SELECT * FROM tipohabitacion;");

    ui->RHTableWidget->setColumnCount(2);
    QStringList l;
    l<<"Nombre"<<"Cantidad";
    ui->RHTableWidget->setHorizontalHeaderLabels(l);
    ui->RHTableWidget->setColumnWidth(0,120);
    ui->RHTableWidget->setColumnWidth(1,80);

    QSqlQuery sqlquery;
    sqlquery.prepare(queryTH);
    sqlquery.exec();

    cant = 0;
    ui->RHTableWidget->setRowCount(0);
    while(sqlquery.next()){
        QSpinBox *boxes;
        boxes->setMaximum(10);
        ui->RHTableWidget->insertRow(cant);
        ui->RHTableWidget->setItem(cant, 0, new QTableWidgetItem(sqlquery.value(0).toByteArray().constData()));
        ui->RHTableWidget->setCellWidget(cant, 1, boxes);
        cant++;
    }

    /*
    Utils u;
    QString n = QString::number(1);
    int cantidad = u.contar("habitaciones", "idtipohab", n.toLocal8Bit().constData());
    qDebug()<<cantidad;*/
    conn.Cerrar();
}

void Registro_habitacion::on_AceptarRHButton_clicked()
{
    for(int i=0; i<cant; i++){
        QSpinBox *cant;
        cant = (QSpinBox*)ui->RHTableWidget->cellWidget(i, 1);
        qDebug()<<QString::number(cant->value());
    }
}

void Registro_habitacion::on_CancelarRHButton_clicked()
{
    close();
}

Registro_habitacion::~Registro_habitacion()
{
    delete ui;
}
