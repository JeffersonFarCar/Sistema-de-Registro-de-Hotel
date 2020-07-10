#ifndef GUI_INDEX_REGISTRO_H
#define GUI_INDEX_REGISTRO_H

#include <QDialog>

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

    void on_view_registros_button_clicked();

    void on_edit_registros_button_clicked();

    void on_delete_registros_button_clicked();

    void on_Regresar__clicked();

private:
    Ui::Gui_Index_Registro *ui;
};

#endif // GUI_INDEX_REGISTRO_H
