#ifndef GUI_INDEXHABITACION_H
#define GUI_INDEXHABITACION_H

#include <QDialog>

namespace Ui {
class gui_indexHabitacion;
}

class gui_indexHabitacion : public QDialog
{
    Q_OBJECT

public:
    explicit gui_indexHabitacion(QWidget *parent = nullptr);
    ~gui_indexHabitacion();

private slots:
    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_clicked();

private:
    Ui::gui_indexHabitacion *ui;
};

#endif // GUI_INDEXHABITACION_H
