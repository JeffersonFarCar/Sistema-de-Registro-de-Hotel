#ifndef GUI_INDEX_REGISTRO_H
#define GUI_INDEX_REGISTRO_H

#include <QDialog>
#include <QTableWidget>

namespace Ui {
class Gui_Index_Registro;
}

class Gui_Index_Registro : public QDialog
{
    Q_OBJECT

public:
    explicit Gui_Index_Registro(QWidget *parent = nullptr);
    ~Gui_Index_Registro();

private slots:
    void on_New_Registro_Button_clicked();

    void on_edit_registros_button_clicked();

    void on_delete_registros_button_clicked();

    void on_Regresar__clicked();

    void on_tableListRegistros_itemClicked(QTableWidgetItem *item);

private:
    Ui::Gui_Index_Registro *ui;
    int f;
    void prepararTabla();
    void cargarTabla();
    void mostrarDatos();
};

#endif // GUI_INDEX_REGISTRO_H
