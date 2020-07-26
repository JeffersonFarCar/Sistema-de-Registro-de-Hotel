#ifndef REGISTRO_HABITACION_H
#define REGISTRO_HABITACION_H

#include <QDialog>
#include <QTableWidget>
#include <QListWidget>

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

    void on_RHTableWidget_itemClicked(QTableWidgetItem *item);

    void on_SHlistWidget_itemDoubleClicked(QListWidgetItem *item);

    void on_THtableWidget_itemClicked(QTableWidgetItem *item);

private:
    Ui::Registro_habitacion *ui;
    int fTH;
    void prepararTabla();
    void llenarTabla();
    QStringList habitacionesXtipo();
    QStringList habitacionesSelected;
};

#endif // REGISTRO_HABITACION_H
