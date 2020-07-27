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
    void setHabitacionesSelected(QStringList _habSelec);
    QStringList getHabitacionesSelected() const;
    void setIdRegistro(int _idR);
    ~Registro_habitacion();

private slots:
    void on_AceptarRHButton_clicked();

    void on_CancelarRHButton_clicked();

    void on_TiposHTableWidget_itemClicked(QTableWidgetItem *item);

    void on_SeleaccionadaslistWidget_itemDoubleClicked(QListWidgetItem *item);

    void on_HabitacionesTableWidget_itemClicked(QTableWidgetItem *item);

private:
    Ui::Registro_habitacion *ui;
    int fTH;
    int idRegistro;
    QStringList habitacionesSelected;
    void prepararTabla();
    void llenarTabla();
    void llenarTablaHabitaciones(QString id);
    void habitacionesXRegistro();
    QStringList habitacionesXtipo();
};

#endif // REGISTRO_HABITACION_H