#include "factura.h"
#include <iostream>

Factura::Factura()
{

}

Factura::Factura(int _fac_id, int _empl_id, int _cli_id, QDate _fecha, float _subtotal, float _total){
    /*se inicializa la fantura con los datos del
    empleado y del cliente  */
    factura_id = _fac_id;
    empleado_id = _empl_id;
    cliente_id = _cli_id;
    fecha = _fecha;
    subtotal = _subtotal;
    total = _total;
}

Factura::~Factura() {}
