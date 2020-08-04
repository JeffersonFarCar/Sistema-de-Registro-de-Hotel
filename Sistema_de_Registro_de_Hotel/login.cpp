#include "login.h"
#include "ui_login.h"
#include "registraradmin.h"
#include "persona_crud.h"
#include "empleado.h"
#include "conexion.h"
#include <QSqlQuery>
#include <QMessageBox>
#include <QRegExpValidator>

Login::Login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
    this->setFixedSize(QSize(410,197));
    ui->contraLineEdit->setEchoMode(QLineEdit::Password);
    compruebaAdmin();
    ui->usuarioNormalRadioButton->setChecked(true);
    /*Inicio Ayuda para ingreso de datos*/
            QRegExp exp_dni("[0-9]{8}");
            ui->usuarioLineEdit->setValidator(new QRegExpValidator(exp_dni, this));
        /*Fin Ayuda*/
}

Login::~Login()
{
    delete ui;
}

void Login::on_buttonBox_accepted()
{
    Conexion conn;
    QString DNI_str = ui->usuarioLineEdit->text();
    QString contra_str = ui->contraLineEdit->text();
    int cantidad;
    bool esUsuario;
    conn.Conectar();
    if(ui->usuarioNormalRadioButton->isChecked()){
        QSqlQuery query_consulta;
        QString consulta="SELECT count(*) FROM personas INNER JOIN empleados WHERE dni = "+DNI_str+" AND contra = '"+ contra_str+"';";
        query_consulta.exec(consulta);
        query_consulta.next();
        cantidad = query_consulta.value(0).toInt();
       if(cantidad == 0){
          QMessageBox::warning(this, "Aviso","Usuario y contraseña incorrectos");
           return;
        }
        esUsuario = true;
    }else{
        QSqlQuery query_consulta;
        QString consulta="SELECT count(*) FROM personas INNER JOIN administrador WHERE dni = "+DNI_str+" AND contrasena = '"+ contra_str+"';";
        query_consulta.exec(consulta);
        query_consulta.next();
        cantidad = query_consulta.value(0).toInt();
        if(cantidad == 0){
            QMessageBox::warning(this, "Aviso","Usuario y contraseña incorrectos");
            return;
        }
        esUsuario = false;
    }
    if(esUsuario){
       mTipo = USUARIO;
    }else{
       mTipo = ADMINISTRADOR;
    }
    conn.Cerrar();
    accept();
}

void Login::on_buttonBox_rejected()
{
    reject();
}

void Login::on_registrarAdminPushButton_clicked()
{
    Persona_CRUD pcrud;
    Conexion conn;
    RegistrarAdmin d(this);
    if (d.exec() == QDialog::Rejected){
        return;
    }
    auto admin = d.getAdmin();
    conn.Conectar();
    QSqlQuery q;
    QString contra=QString::fromLocal8Bit(admin.getContra().c_str());
    q.exec(QString("INSERT INTO administrador (id_persona, contrasena) VALUES ("+QString::number(admin.getId())+", '"+contra+"');"));
    compruebaAdmin();
    pcrud.createPersona(admin);
    conn.Cerrar();
}

void Login::compruebaAdmin()
{
    Conexion conn;
    conn.Conectar();
    QSqlQuery q;
    q.exec("SELECT count(*) FROM administrador;");
    q.next();
    const int cantidadAdmins = q.value(0).toInt();
    if(cantidadAdmins != 1){
        ui-> registrarAdminPushButton->setEnabled(true);
    }
    else{
         ui-> registrarAdminPushButton->setEnabled(false);
    }
    conn.Cerrar();
}

