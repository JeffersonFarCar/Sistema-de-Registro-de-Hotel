#ifndef GUI_EMPLEADO_H
#define GUI_EMPLEADO_H

#include <QDialog>

namespace Ui {
class Gui_Empleado;
}

class Gui_Empleado : public QDialog
{
    Q_OBJECT

public:
    explicit Gui_Empleado(QWidget *parent = nullptr);
    ~Gui_Empleado();

private:
    Ui::Gui_Empleado *ui;
};

#endif // GUI_EMPLEADO_H