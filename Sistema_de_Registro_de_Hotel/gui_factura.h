#ifndef GUI_FACTURA_H
#define GUI_FACTURA_H
#include "cliente.h"
#include <QDialog>
#include <QDate>

namespace Ui {
class gui_factura;
}

class gui_factura : public QDialog
{
    Q_OBJECT

public:
    void setDatosPago();
    explicit gui_factura(QWidget *parent = nullptr);
    ~gui_factura();
    void imprimirFactura();
    void imprimir(int a [], int d);
    void setCliente(Cliente _cliente);
    void setFechas(int _d1, int _m1, int _y1,int _d2, int _m2, int _y2);
    void incializar (int a [], int d);
    int calcularDias(int _d1, int _m1, int _y1,int _d2, int _m2, int _y2);
    QString getFactura();
        QString getNroFactura();

private slots:
    void on_factura_cliente_nombre_linkActivated(const QString &link);

    void on_pushButton_clicked();

private:
    Cliente cliente;
    int d1,m1,y1,d2,m2,y2;
    QDate salida;
    Ui::gui_factura *ui;
    QString NroFactura;
        QString Tfactura;

};

#endif // GUI_FACTURA_H
