#include "gui_indexhabitacion.h"
#include "ui_gui_indexhabitacion.h"
#include "gui_habitacion.h"

#include "ui_gui_habitacion.h"
#include <QStandardItemModel>
#include <QTableWidget>
#include <QTableWidgetItem>

#include "conexion.h"


#include <QtSql>
#include <QtSql/QSqlQuery>
#include <QString>
#include <QtSql/QSqlDatabase>
#include <QStandardItemModel>
#include <QMessageBox>


gui_indexHabitacion::gui_indexHabitacion(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gui_indexHabitacion)
{
    ui->setupUi(this);
    u = 0;
   fila =-1;
   mostrarDatos();
}

void gui_indexHabitacion::mostrarDatos(){
   prepararTabla();

    Conexion conect;
    conect.Conectar();

    QSqlQuery query_consulta;

 QString consulta= "SELECT idhabitacion, numerohab, descripcion, precio, estadoname FROM ((tipohabitacion INNER JOIN habitaciones ON habitaciones.idtipohab = tipohabitacion.idtipohab) INNER JOIN estadohabitacion ON idestadohab = idestado)";
  //QString consulta;
  //consulta.append("SELECT * FROM habitaciones");

 query_consulta.exec(consulta);
    int fila=0;
    ui->tabb->setRowCount(0);

    while(query_consulta.next()){
        ui->tabb->insertRow(fila);
        ui->tabb->setItem(fila, 0, new QTableWidgetItem(query_consulta.value(0).toByteArray().constData()));
        ui->tabb->setItem(fila, 1, new QTableWidgetItem(query_consulta.value(1).toByteArray().constData()));
        ui->tabb->setItem(fila, 2, new QTableWidgetItem(query_consulta.value(2).toByteArray().constData()));
        ui->tabb->setItem(fila, 3, new QTableWidgetItem(query_consulta.value(3).toByteArray().constData()));
        ui->tabb->setItem(fila, 4, new QTableWidgetItem(query_consulta.value(4).toByteArray().constData()));
        ui->tabb->setItem(fila, 5, new QTableWidgetItem(query_consulta.value(5).toByteArray().constData()));
        ui->tabb->setItem(fila, 6, new QTableWidgetItem(query_consulta.value(6).toByteArray().constData()));
        ui->tabb->setItem(fila, 7, new QTableWidgetItem(query_consulta.value(7).toByteArray().constData()));
        fila++;
    }
    conect.Cerrar();

}

void gui_indexHabitacion::prepararTabla(){
    /*----Preparacion de la tabla----*/
      ui->tabb->setColumnCount(5);
      QStringList l;
      l<<"ID Habitacion"<<"N° Habitacion"<<"Descripcion"<<"Precio"<<"Estado";

      ui->tabb->setHorizontalHeaderLabels(l);
      ui->tabb->setColumnWidth(0,120);
      ui->tabb->setColumnWidth(1,120);
      ui->tabb->setColumnWidth(2,120);
      ui->tabb->setColumnWidth(3,150);
      ui->tabb->setColumnWidth(4,150);
      ui->tabb->setColumnWidth(5,150);


      /*----Fin preparacion de la tabla----*/
}



gui_indexHabitacion::~gui_indexHabitacion()
{
    delete ui;
}

void gui_indexHabitacion::on_pushButton_4_clicked()
{
    gui_habitacion guiHA;
         guiHA.setModal(true);
         guiHA.exec();

}

void gui_indexHabitacion::on_pushButton_5_clicked()
{
    close();//Permite cerra la ventana actual abierta
}

void gui_indexHabitacion::on_pushButton_clicked()
{

}

void gui_indexHabitacion::on_pushButton_6_clicked()
{
    ui->tabb->setColumnCount(4);
    QStringList l;
    l<<"Estado"<<"Precio"<<"N°habitacion"<<"N°piso";
    ui->tabb->setHorizontalHeaderLabels(l);

    ui->tabb->setColumnWidth(0,100);
    ui->tabb->setColumnWidth(1,60);
    ui->tabb->setColumnWidth(2,100);
    ui->tabb->setColumnWidth(3,80);

}

void gui_indexHabitacion::on_pushButton_7_clicked()
{
     u++;
     QByteArray d;
     //d.append("USUARIO");
     d.append(QString::number(u));
    //este codigo interta un registro nuevo
    ui->tabb->insertRow(ui->tabb->rowCount());

    ui->tabb->setItem(ui->tabb->rowCount()-1,0,new QTableWidgetItem("Reservado"));
    ui->tabb->setItem(ui->tabb->rowCount()-1,1,new QTableWidgetItem("70 S/."));
    ui->tabb->setItem(ui->tabb->rowCount()-1,2,new QTableWidgetItem("12"));
    ui->tabb->setItem(ui->tabb->rowCount()-1,3,new QTableWidgetItem("2"));

    ui->tabb->setItem(ui->tabb->rowCount()-2,0,new QTableWidgetItem("Libre"));
    ui->tabb->setItem(ui->tabb->rowCount()-2,1,new QTableWidgetItem("50 S/."));
    ui->tabb->setItem(ui->tabb->rowCount()-2,2,new QTableWidgetItem("10"));
    ui->tabb->setItem(ui->tabb->rowCount()-2,3,new QTableWidgetItem("1"));

    ui->tabb->setItem(ui->tabb->rowCount()-3,0,new QTableWidgetItem("Ocupado"));
    ui->tabb->setItem(ui->tabb->rowCount()-3,1,new QTableWidgetItem("70 S/."));
    ui->tabb->setItem(ui->tabb->rowCount()-3,2,new QTableWidgetItem("24"));
    ui->tabb->setItem(ui->tabb->rowCount()-3,3,new QTableWidgetItem("3"));

    ui->tabb->setItem(ui->tabb->rowCount()-4,0,new QTableWidgetItem("Libre"));
    ui->tabb->setItem(ui->tabb->rowCount()-4,1,new QTableWidgetItem("70 S/."));
    ui->tabb->setItem(ui->tabb->rowCount()-4,2,new QTableWidgetItem("18"));
    ui->tabb->setItem(ui->tabb->rowCount()-4,3,new QTableWidgetItem("3"));
}

void gui_indexHabitacion::on_pushButton_3_clicked()
{
    // ui->tabb->removeRow(fila);

       Conexion conect;
       conect.Conectar();
       QSqlQuery query;


         QString id = ui->tabb->item(fila,0)->text();
         QString consulta;
         QMessageBox::StandardButton action;
         action = QMessageBox::question(this, "Cuidado", "¿Está seguro que desa borrar el dato?");
         if(action == QMessageBox::Yes)
             //ui->tabb->removeRow(fila);

           QString consulta; consulta.append("DELETE FROM habitaciones WHERE  idhabitacion = "+id+";");

           query.exec(consulta);


}

void gui_indexHabitacion::on_tabb_itemClicked(QTableWidgetItem *item)
{
    fila = item->row();

    QTableWidgetItem *estado=ui->tabb->item(fila,0);
    QTableWidgetItem *precio=ui->tabb->item(fila,1);
    QTableWidgetItem *nhabitacion=ui->tabb->item(fila,2);
    QTableWidgetItem *npiso=ui->tabb->item(fila,3);

    ui->lineEdit->setText(estado->text());
    ui->lineEdit_2->setText(precio->text());
    ui->lineEdit_3->setText(nhabitacion->text());
    ui->lineEdit_4->setText(npiso->text());
}

void gui_indexHabitacion::on_pushButton_2_clicked()
{
    ui->tabb->setItem(fila,0,new QTableWidgetItem(ui->lineEdit->text()));
    ui->tabb->setItem(fila,1,new QTableWidgetItem(ui->lineEdit_2->text()));
    ui->tabb->setItem(fila,2,new QTableWidgetItem(ui->lineEdit_3->text()));
    ui->tabb->setItem(fila,3,new QTableWidgetItem(ui->lineEdit_4->text()));
    QString idh=ui->lineEdit->text();
    QString idtipo=ui->lineEdit_2->text();
    QString idestado=ui->lineEdit_3->text();
    QString numeroh=ui->lineEdit_4->text();
    QString consulta="update habitaciones SET idtipohab="+idtipo+",idestado="+idestado+",numerohab="+numeroh+" WHERE idhabitacion ="+idh+";";
    /*
    UPDATE agenda
      SET telefono='662142223' , email='albesanch@mimail.com'
      WHERE nombre='Alberto Sanchez'
*/
    prepararTabla();
    Conexion conect;
        conect.Conectar();
        QSqlQuery query_consulta;
        query_consulta.exec(consulta);
}

void gui_indexHabitacion::on_lineEdit_5_textChanged(const QString &arg1)
{  //este metodo permitira hacer la consulta
    ui->tabb->clear();
    prepararTabla();
    Conexion conect;
        ui->tabb->setRowCount(0);
        conect.Conectar();
        QSqlQuery query_consulta;

         QString consulta= "SELECT idhabitacion, numerohab, descripcion, precio, estadoname FROM ((tipohabitacion INNER JOIN habitaciones ON habitaciones.idtipohab = tipohabitacion.idtipohab) INNER JOIN estadohabitacion ON idestadohab = idestado AND estadoname LIKE '"+arg1+"%' )";
        // QString consulta="SELECT idhabitacion, numerohab, descripcion, precio, estadoname  FROM habitaciones INNER JOIN tipohabitacion WHERE idhabitacion = idtipohab AND descripcion LIKE '"+arg1+"%'";

        query_consulta.exec(consulta);

        int fila=0;
        ui->tabb->setRowCount(0);

        while(query_consulta.next()){

            ui->tabb->insertRow(fila);
            ui->tabb->setItem(fila, 0, new QTableWidgetItem(query_consulta.value(0).toByteArray().constData()));
            ui->tabb->setItem(fila, 1, new QTableWidgetItem(query_consulta.value(1).toByteArray().constData()));
            ui->tabb->setItem(fila, 2, new QTableWidgetItem(query_consulta.value(2).toByteArray().constData()));
            ui->tabb->setItem(fila, 3, new QTableWidgetItem(query_consulta.value(3).toByteArray().constData()));
            ui->tabb->setItem(fila, 4, new QTableWidgetItem(query_consulta.value(4).toByteArray().constData()));
            ui->tabb->setItem(fila, 5, new QTableWidgetItem(query_consulta.value(5).toByteArray().constData()));
            ui->tabb->setItem(fila, 6, new QTableWidgetItem(query_consulta.value(6).toByteArray().constData()));
            fila++;
        }
        conect.Cerrar();
}
