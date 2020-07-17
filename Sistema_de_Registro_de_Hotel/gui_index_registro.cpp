#include "gui_index_registro.h"
#include "ui_gui_index_registro.h"

#include <QMessageBox>
#include "gui_registro.h"

Gui_Index_Registro::Gui_Index_Registro(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Gui_Index_Registro)
{
    ui->setupUi(this);
    ui->tableListRegistros->setEditTriggers(QAbstractItemView::NoEditTriggers);
    //tableListRegistros

}

Gui_Index_Registro::~Gui_Index_Registro()
{
    delete ui;
}

void Gui_Index_Registro::on_New_Registro_Button_clicked()
{
    Gui_Registro guiR;
    guiR.setModal(true);
    guiR.exec();
}

void Gui_Index_Registro::on_edit_registros_button_clicked()
{

}

void Gui_Index_Registro::on_delete_registros_button_clicked()
{
    QMessageBox::StandardButton action;
    action = QMessageBox::question(this, "Cuidado", "¿Está seguro que desa borrar el dato?");
    if(action == QMessageBox::Yes){
        ui->tableListRegistros->removeRow(f);
    }
}

void Gui_Index_Registro::on_Regresar__clicked()
{
    close();//Permite cerra la ventana actual abierta
}

void Gui_Index_Registro::on_cargarTablaRegistro_clicked()
{
    ui->tableListRegistros->setColumnCount(6);
    QStringList l;
    l<<"ID"<<"Habitacion"<<"Cliente"<<"Cantidad"<<"Ingreso"<<"Salida";
    ui->tableListRegistros->setHorizontalHeaderLabels(l);
    ui->tableListRegistros->setColumnWidth(0,20);
    ui->tableListRegistros->setColumnWidth(1,100);
    ui->tableListRegistros->setColumnWidth(2,100);
    ui->tableListRegistros->setColumnWidth(3,80);
    ui->tableListRegistros->setColumnWidth(4,80);
    ui->tableListRegistros->setColumnWidth(5,80);
    ui->tableListRegistros->setColumnWidth(6,100);
}

void Gui_Index_Registro::on_cargarDatoRegistro_clicked()
{
    ui->tableListRegistros->insertRow(ui->tableListRegistros->rowCount());

    ui->tableListRegistros->setItem(ui->tableListRegistros->rowCount()-1,0,new QTableWidgetItem("0003"));
    ui->tableListRegistros->setItem(ui->tableListRegistros->rowCount()-1,1,new QTableWidgetItem("Simple"));
    ui->tableListRegistros->setItem(ui->tableListRegistros->rowCount()-1,2,new QTableWidgetItem("Pedro"));
    ui->tableListRegistros->setItem(ui->tableListRegistros->rowCount()-1,3,new QTableWidgetItem("1"));
    ui->tableListRegistros->setItem(ui->tableListRegistros->rowCount()-1,4,new QTableWidgetItem("22/02/20"));
    ui->tableListRegistros->setItem(ui->tableListRegistros->rowCount()-1,5,new QTableWidgetItem("13/03/20"));
}

void Gui_Index_Registro::on_tableListRegistros_itemClicked(QTableWidgetItem *item)
{
    f = item->row();
}
