#ifndef GUI_CLIENTE_H
#define GUI_CLIENTE_H

#include <QDialog>

namespace Ui {
class Gui_Cliente;
}

class Gui_Cliente : public QDialog
{
    Q_OBJECT

public:
    explicit Gui_Cliente(QWidget *parent = nullptr);

    bool validarDatos();
    ~Gui_Cliente();
private slots:
    void on_groupBox_clicked();

    void on_Aceptar_button_clicked();

    void on_Cancel_button_clicked();

private:
    Ui::Gui_Cliente *ui;
};

#endif // GUI_CLIENTE_H
