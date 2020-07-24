#ifndef GUI_FACTURA_H
#define GUI_FACTURA_H

#include <QDialog>

namespace Ui {
class gui_factura;
}

class gui_factura : public QDialog
{
    Q_OBJECT

public:
    explicit gui_factura(QWidget *parent = nullptr);
    ~gui_factura();
    void imprimirFactura();

private slots:
    void on_factura_cliente_nombre_linkActivated(const QString &link);

    void on_pushButton_clicked();

private:
    Ui::gui_factura *ui;
};

#endif // GUI_FACTURA_H
