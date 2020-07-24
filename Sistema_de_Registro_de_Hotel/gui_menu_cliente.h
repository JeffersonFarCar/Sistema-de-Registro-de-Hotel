#ifndef GUI_MENU_CLIENTE_H
#define GUI_MENU_CLIENTE_H

#include <QDialog>
#include <QTableWidget>
//#include "cliente.h"

namespace Ui {
class Gui_Menu_Cliente;
}

class Gui_Menu_Cliente : public QDialog
{
    Q_OBJECT

public:
    explicit Gui_Menu_Cliente(QWidget *parent = nullptr);
    void mostrarDatos();
    void prepararTabla();
    ~Gui_Menu_Cliente();

private slots:


    void on_pushButtonELIMINAR_clicked();

    void on_tablaMenuC_itemClicked(QTableWidgetItem *item);

    void on_pushButtoMODIFICAR_clicked();

    void on_Agregar_button_clicked();

    void on_lineEdit_buscar_textChanged(const QString &arg1);

private:
    Ui::Gui_Menu_Cliente *ui;
    int fila;
};

#endif // GUI_MENU_CLIENTE_H
