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
    ~Gui_Cliente();

private:
    Ui::Gui_Cliente *ui;
};

#endif // GUI_CLIENTE_H
