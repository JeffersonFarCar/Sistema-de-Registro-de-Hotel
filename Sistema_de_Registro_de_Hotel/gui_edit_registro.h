#ifndef GUI_EDIT_REGISTRO_H
#define GUI_EDIT_REGISTRO_H

#include <QDialog>
#include <QStringList>

namespace Ui {
class GUI_Edit_Registro;
}

class GUI_Edit_Registro : public QDialog
{
    Q_OBJECT

public:
    explicit GUI_Edit_Registro(QWidget *parent = nullptr);
    void setEditRegistro(int _id);
    ~GUI_Edit_Registro();

private slots:
    void on_Editar_Button_clicked();

    void on_Cancelar_button_clicked();

    void on_habit_Edit_Button_clicked();

private:
    Ui::GUI_Edit_Registro *ui;
    QStringList habitacionesOri;
    int idRegistroEdit;
    void cargarDatos();
};

#endif // GUI_EDIT_REGISTRO_H
