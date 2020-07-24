#ifndef GUI_ESTADO_HABITACION_H
#define GUI_ESTADO_HABITACION_H

#include <QDialog>
#include <QTableWidget>
namespace Ui {
class gui_estado_habitacion;
}

class gui_estado_habitacion : public QDialog
{
    Q_OBJECT

public:
    explicit gui_estado_habitacion(QWidget *parent = nullptr);
    ~gui_estado_habitacion();

private slots:
    void on_pushButton_clicked();

private:
    Ui::gui_estado_habitacion *ui;
};

#endif // GUI_ESTADO_HABITACION_H
