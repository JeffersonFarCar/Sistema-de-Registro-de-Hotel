#include "estadohab.h"

EstadoHab::EstadoHab()
{

}

EstadoHab::EstadoHab(int _idEstadoH, string _descripcion){
    idEstadoH = -_idEstadoH;
    descripcion = _descripcion;
}

void EstadoHab::setDescripcion(string _descripcion){
    descripcion = _descripcion;
}
void EstadoHab::setIdEstado(int _idEstadoH){
    idEstadoH = _idEstadoH;
}

string EstadoHab::getDescripcion() const{
    return descripcion;
}
int EstadoHab::getIdEstado() const{
    return idEstadoH;
}
