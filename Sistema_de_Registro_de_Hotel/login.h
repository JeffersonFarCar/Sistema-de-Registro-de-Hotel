#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>

namespace Ui {
class Login;
}

class Login : public QDialog
{
    Q_OBJECT

public:
    enum Tipo
    {
        USUARIO, ADMINISTRADOR
    };
    explicit Login(QWidget *parent = nullptr);
    ~Login();
    int getTipo() const{return mTipo; }
    int getUsuarioLog();
private slots:
    void on_buttonBox_accepted();
    void on_buttonBox_rejected();
    void on_registrarAdminPushButton_clicked();
private:
    void compruebaAdmin();
    Ui::Login *ui;
    int mTipo;
    int dniUserLog;
};

#endif // LOGIN_H
