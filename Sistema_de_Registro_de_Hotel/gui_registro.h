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

private:
    Ui::Gui_Registro *ui;
};

#endif // GUI_REGISTRO_H
