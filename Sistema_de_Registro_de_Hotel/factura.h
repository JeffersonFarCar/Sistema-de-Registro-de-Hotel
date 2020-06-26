#ifndef FACTURA_H
#define FACTURA_H
#include <QDate>

class Factura {
public:
    Factura();
    Factura(int _fac_id, int _empl_id, int _cli_id, QDate _fecha, float _subtotal, float _total);
    ~Factura();
private:
    int factura_id;
    int empleado_id;
    int cliente_id;
    QDate fecha;
    float subtotal;
    float total;
};

#endif

