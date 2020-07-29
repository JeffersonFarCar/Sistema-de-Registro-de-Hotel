#include "gui_factura.h"
#include "ui_gui_factura.h"
#include <fstream>
#include <cstring>
#include "conexion.h"
#include <algorithm>
#include <iostream>
#include <QDebug>
#include "QMessageBox"
#include <QDate>
using namespace std;

gui_factura::gui_factura(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gui_factura)
{

    ui->setupUi(this);

}

gui_factura::~gui_factura()
{
    delete ui;
}
void gui_factura::imprimirFactura(){

    //recibe objeto cliente y objeto registro para modificar los datos duros

    ui->factura_cliente_nombre->setText(QString::fromStdString(cliente.getNombre()));
    ui->factura_cliente_apellido->setText(QString::fromStdString(cliente.getApellido()));
    ui->factura_cliente_direccion->setText(QString::fromStdString(cliente.getDireccion()));
    ui->factura_cliente_ciudadania->setText(QString::fromStdString(cliente.getCiudadania()));
    ui->factura_cliente_email->setText(QString::fromStdString(cliente.getEmail()));
    ui->factura_cliente_nro_registro->setText("123546");
    ui->factura_cliente_ingreso->setText(QString::number(d1)+"-"+QString::number(m1)+"-"+QString::number(y1));
    ui->factura_cliente_salida->setText(QString::number(d2)+"-"+QString::number(m2)+"-"+QString::number(y2));
    setDatosPago();


}


void gui_factura::on_factura_cliente_nombre_linkActivated(const QString &link)
{

}
//factura_cliente_nombre

void gui_factura::on_pushButton_clicked()
{



    ofstream f2("facturaN1.txt",ios::out | ios::binary);//f1.open("entrada.dat", ios::binary);
    QString nombre = ui->factura_cliente_nombre->text();
    QString apellido = ui->factura_cliente_apellido->text();
    QString direccion = ui->factura_cliente_direccion->text();
    QString ciudadania = ui->factura_cliente_ciudadania->text();
    QString Nregistro = ui->factura_cliente_nro_registro->text();

    QString ingreso = ui->factura_cliente_ingreso->text();
    QString salida = ui->factura_cliente_salida->text();

    QString TFactura="Factura N1\n"
                     "\nNombre:\t\t"+nombre+
                     "\nApellido:\t\t"+apellido+
                     "\nDirección:\t\t"+direccion+
                     "\nCiudadania:\t\t"+ciudadania+

                     "\nFecha de Ingreso:\t\t"+ingreso+
                     "\nFecha de Salida:\t\t"+salida;
     QMessageBox::information(this, "Mensaje", "Se guardó la factura correctamente");
    f2<<TFactura.toUtf8().constData()<<endl;
}
void gui_factura::setCliente(Cliente _cliente){
    cliente=_cliente;
}
void gui_factura::setFechas(int _d1, int _m1, int _y1,int _d2, int _m2, int _y2){
    d1=_d1;m1=_m1;y1=_y1;
    d2=_d2;m2=_m2;y2=_y2;
    imprimirFactura();

}

void gui_factura::setDatosPago(){
    //int cont,cont2=0;string a2;

    /*ifstream queryF;
    queryF.open("tmp.dat", ios::in);
    if(queryF.is_open()){
        while (!queryF.eof()){cont++;}}
    //int AllIds[cont];
    /*if(queryF.is_open()){
        while (!queryF.eof()){
            queryF>>a2;
            AllIds[cont2]=std::stoi(a2);cont++;
        }
    }*/
    //imprimir(AllIds,cont);
    QString sql;

    Conexion conn;
    conn.Conectar();



    QString a;
    string a2;
    int contador=0, temporal(0);

    ifstream queryF;
    queryF.open("tmp.dat", ios::in);
    if(queryF.is_open()){
        while (!queryF.eof()){
                    contador++;
                    queryF>>a2;}}
    contador--;

    queryF.close();
    queryF.open("tmp.dat", ios::in);
    int ids[contador];
    if(queryF.is_open()){
        while (!queryF.eof()){
                    queryF>>a2;
                    ids[temporal]=stoi(a2);
                    temporal++;
        }}


    sort(ids,ids+contador);
    imprimir(ids,contador);
    QString nombreh;
    QString precioh;
    QString total="";
    int precioTotal=0;
    int totalDias=calcularDias(d1,m1,y1,d2,m2,y2);
    for(int i=0;i<contador;i++){
        sql.append("SELECT*FROM tipohabitacion inner join habitaciones on tipohabitacion.idtipohab=habitaciones.idtipohab where habitaciones.idhabitacion="+QString::number(ids[i])+";");
        QSqlQuery query;
        query.prepare(sql);
        query.exec();
        query.next();
        cliente.setCiudadania(query.value(7).toByteArray().constData());//
        nombreh=query.value(1).toByteArray().constData();
        precioh=query.value(3).toByteArray().constData();
        precioTotal+=precioh.toInt()*totalDias;
        total+=nombreh+"\t\t\t$/"+precioh+".00\n";
        sql.clear();
    }
    ui->factura_habitaciones->setText(total);
    ui->factura_totalDias->setText(QString::number(totalDias));
    ui->factura_preciototal->setText("$/"+QString::number(precioTotal)+".00");
    conn.Cerrar();
    qDebug()<<total;
    qDebug()<<total;
    qDebug()<<total;
    /*int countD=1;
        for(int i=0;i<contador-1;i++){
            if(a[i]==a[i+1]){
                continue;
            }
            countD++;
        }


        int aux5[countD];
            aux5[0]=ids[0];
            int c=1;
            for(int i=1;i<contador;i++){
                if(a[i-1]!=a[i]){
                    aux5[c]=ids[i];
                    c++;
                }

            }
            imprimir(aux5,countD);

            int aux2[countD];//guarda las repeticiones de cada elemento del arreglo de menos a mayor
            incializar(aux2, countD);

            int aux, aux3=0;
            bool aux4=true;
            for(int i=0;i<contador;i++){
                aux=ids[aux3];
                aux2[i]=0;
                aux4=true;

                for(int j=aux3;j<contador;j++){
                    if(aux==a[j]){

                        aux2[i]++;
                    }else if(aux4){
                        aux3=j;
                        aux4=false;
                    }
                }

            }

*/
}
void gui_factura::imprimir(int a [], int d){
                qDebug()<<"imprimetodo";
        for(int i=0;i<d;i++){
            qDebug()<<QString::number(a[i]);
        }
}
void  gui_factura::incializar (int a [], int d){
        for(int i=0;i<d;i++){
            a[i]=0;
        }
}
int gui_factura::calcularDias(int _d1, int _m1, int _y1,int _d2, int _m2, int _y2){
    int a=_y2, m=_m2, d=_d2, a2=_y1, m2=_m1, d2=_d1;
        int dif;
        dif=((a-a2)*12 +(m-m2))*30 +d-d2;
        cout << dif << " dias.\n\n";
        return dif;

}
