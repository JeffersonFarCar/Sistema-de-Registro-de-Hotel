#ifndef REGISTRO_H
#define REGISTRO_H
#include <QDate>

class Registro{
private:
    int idRegistro;
    int idCliente;
    int idHabitacion;
    int cantPersonas;
    QDate fechaEntrada;
    QDate fechaSalida;

public:
    Registro();
    Registro(int _idR, int _idC, int _idH, int _cant, QDate _fechE, QDate _fechS);
    void setIdRegistro(int _idR);
    void setIdCliente(int _idC);
    void setIdHabitacion(int _idH);
    void setCantPersonas(int _cant);
    void setFechaEntrada(QDate _fechE);
    void setFechaSalida(QDate _fechS);

    int getIdRegistro() const;
    int getIdCliente() const;
    int getIdHabitacion() const;
    int getCantPersonas() const;
    QDate getFechaEntrada() const;
    QDate getFechaSalida() const;
};

#endif // REGISTRO_H
