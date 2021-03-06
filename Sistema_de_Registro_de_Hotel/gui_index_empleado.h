#ifndef GUI_INDEX_EMPLEADO_H
#define GUI_INDEX_EMPLEADO_H

#include <QDialog>
#include <QTableWidgetItem>


namespace Ui {
class Gui_Index_Empleado;
}

class Gui_Index_Empleado : public QDialog
{
    Q_OBJECT

public:
    explicit Gui_Index_Empleado(QWidget *parent = nullptr);
    void mostrarDatos();
    void prepararTabla();
    bool validarDatos();
    ~Gui_Index_Empleado();

private slots:
    void on_Cancelar_button_clicked();

    void on_Nuevo_Button_clicked();

    void on_delete_empleado_button_clicked();

    void on_tableWidget_itemClicked(QTableWidgetItem *item);

    void on_edit_empleado_button_clicked();

    void on_lineEdit_buscarEmpleado_textChanged(const QString &arg1);

private:
    Ui::Gui_Index_Empleado *ui;
    int u;
    int f;
};

#endif // GUI_INDEX_EMPLEADO_H






