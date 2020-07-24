#ifndef REGISTRO_HABITACION_H
#define REGISTRO_HABITACION_H

#include <QDialog>
#include <QTableWidget>

namespace Ui {
class Registro_habitacion;
}

class Registro_habitacion : public QDialog
{
    Q_OBJECT

public:
    explicit Registro_habitacion(QWidget *parent = nullptr);
    void mostrarDatos();
    ~Registro_habitacion();

private slots:
    void on_AceptarRHButton_clicked();

    void on_CancelarRHButton_clicked();

private:
    Ui::Registro_habitacion *ui;
    int cant;
};

#endif // REGISTRO_HABITACION_H
