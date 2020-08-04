#ifndef REGISTRARADMIN_H
#define REGISTRARADMIN_H

#include <QDialog>
#include "administrador.h"

namespace Ui {
class RegistrarAdmin;
}

class RegistrarAdmin : public QDialog
{
    Q_OBJECT

public:
    explicit RegistrarAdmin(QWidget *parent = nullptr);
    ~RegistrarAdmin();
    bool validarDatos();
    Administrador getAdmin() const {return mAdmin;}

private slots:
    void on_buttonBox_accepted();
    void on_buttonBox_rejected();

private:
    Ui::RegistrarAdmin *ui;
    Administrador mAdmin;
};

#endif // REGISTRARADMIN_H
