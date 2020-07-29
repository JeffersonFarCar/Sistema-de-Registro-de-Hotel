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

    void on_pushButton_5_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_comboBox_currentIndexChanged(int index);

    void on_comboBox_2_currentIndexChanged(int index);

private:
    Ui::gui_habitacion *ui;
    void fillComboBox();
    void fillComboBox1();
    QStringList tipohabitaciones;
    QStringList estados;
    QString idtipohabitacion;
    QString idestado;
};

#endif // GUI_HABITACION_H
