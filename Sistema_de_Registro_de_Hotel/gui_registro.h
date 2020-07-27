#ifndef GUI_REGISTRO_H
#define GUI_REGISTRO_H

#include <QDialog>
#include <QStringList>

namespace Ui {
class Gui_Registro;
}

class Gui_Registro : public QDialog
{
    Q_OBJECT

public:
    explicit Gui_Registro(QWidget *parent = nullptr);
    void setHabitacionesSelected(QStringList _habSelec);
    QStringList getHabitacionesSelected() const;
    ~Gui_Registro();

private slots:
    void on_Registrar_button_clicked();

    void on_Cancelar_button_clicked();

    void on_Hab_Reg_Button_clicked();

    void on_Registrar_button_2_clicked();

    void on_Cliente_cmbox_currentIndexChanged(int index);

private:
    Ui::Gui_Registro *ui;
    QStringList clientes_nomape;
    QStringList clientes_id;
    QStringList habitacionesSelected;
    int canthabitaciones;
    void fillComboBox();
};

#endif // GUI_REGISTRO_H
