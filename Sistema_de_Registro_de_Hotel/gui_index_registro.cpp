#include "gui_index_registro.h"
#include "ui_gui_index_registro.h"

#include <QMessageBox>
#include "gui_registro.h"

Gui_Index_Registro::Gui_Index_Registro(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Gui_Index_Registro)
{
    ui->setupUi(this);

    for (int i=0; i<20; i++){
        QString str = "Registro #"+QVariant(i).toString();
        ui->list_Registros->addItem(str);
    }
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

void Gui_Index_Registro::on_view_registros_button_clicked()
{

}

void Gui_Index_Registro::on_edit_registros_button_clicked()
{

}

void Gui_Index_Registro::on_delete_registros_button_clicked()
{
    QMessageBox::StandardButton action;
    action = QMessageBox::question(this, "Cuidado", "¿Está seguro que desa borrar el dato?");
    if(action == QMessageBox::Yes)
        delete ui->list_Registros->currentItem();

}

void Gui_Index_Registro::on_Regresar__clicked()
{
    close();//Permite cerra la ventana actual abierta
}
