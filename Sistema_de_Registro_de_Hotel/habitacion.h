#ifndef HABITACION_H
#define HABITACION_H

class Habitacion
{
private:
    int idHabitacion;
    int tipoHabitacion;
    int numeroHabitacion;
    int numeroPiso;
    int estadoHabitacion;

public:
    Habitacion();
    Habitacion(int _idH, int _tipoH, int _numHabi, int _numPiso, int _estadH);
    void setIdHabitacion(int _idH);
    void setTipoHabitacion(int _tipoH);
    void setNumHabitacion(int _numHab);
    void setNumPiso(int _numPiso);
    void setEstadoH(int _estadoH);

    int getIdHabitacion() ;
    int getTipoHabitacion() ;
    int getNumHabitacion() ;
    int getNumPiso() ;
    int getEstadoH();
};

#endif // HABITACION_H
