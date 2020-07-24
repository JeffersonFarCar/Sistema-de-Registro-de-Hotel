#ifndef GUI_REGISTRO_H
#define GUI_REGISTRO_H

#include <QDialog>

namespace Ui {
class Gui_Registro;
}

class Gui_Registro : public QDialog
{
    Q_OBJECT

public:
    explicit Gui_Registro(QWidget *parent = nullptr);
    ~Gui_Registro();

private slots:
    void on_Registrar_button_clicked();

    void on_Cancelar_button_clicked();

    void on_pushButton_clicked();

    void on_LineEdite_NomCliente_textChanged(const QString &arg1);

    void on_Registrar_button_2_clicked();

private:
    Ui::Gui_Registro *ui;
};

#endif // GUI_REGISTRO_H
