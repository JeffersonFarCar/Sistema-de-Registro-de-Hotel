#ifndef REGISTRO_H
#define REGISTRO_H
#include "string"
using namespace std;

class Registro{
private:
    int idRegistro;
    int idCliente;
    int idEmpleado;
    int cantHabitaciones;
    string fechaEntrada;
    string fechaSalida;

public:
    Registro();
    Registro(int _idR, int _idC, int _idE, int _cantH, string _fechE, string _fechS);
    void setIdRegistro(int _idR);
    void setIdCliente(int _idC);
    void setIdEmpleado(int _idE);
    void setCantHab(int _cantH);
    void setFechaEntrada(string _fechE);
    void setFechaSalida(string _fechS);

    int getIdRegistro() const;
    int getIdCliente() const;
    int getIdEmpleado() const;
    int getCantHab() const;
    string getFechaEntrada() const;
    string getFechaSalida() const;
};

#endif // REGISTRO_H
