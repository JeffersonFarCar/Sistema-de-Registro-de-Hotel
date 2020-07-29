#ifndef GUI_TIPO_HABITACION_H
#define GUI_TIPO_HABITACION_H

#include <QDialog>

namespace Ui {
class gui_tipo_habitacion;
}

class gui_tipo_habitacion : public QDialog
{
    Q_OBJECT

public:
    explicit gui_tipo_habitacion(QWidget *parent = nullptr);
    ~gui_tipo_habitacion();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::gui_tipo_habitacion *ui;
};

#endif // GUI_TIPO_HABITACION_H
