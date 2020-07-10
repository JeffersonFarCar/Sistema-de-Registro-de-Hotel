#ifndef GUI_HABITACION_H
#define GUI_HABITACION_H

#include <QDialog>

namespace Ui {
class gui_habitacion;
}

class gui_habitacion : public QDialog
{
    Q_OBJECT

public:
    explicit gui_habitacion(QWidget *parent = nullptr);
    ~gui_habitacion();

private slots:
    void on_groupBox_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::gui_habitacion *ui;
};

#endif // GUI_HABITACION_H
