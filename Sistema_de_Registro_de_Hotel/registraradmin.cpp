#include "registraradmin.h"
#include "ui_registraradmin.h"
#include <QMessageBox>
#include <QRegExpValidator>

RegistrarAdmin::RegistrarAdmin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RegistrarAdmin),
    mAdmin(-1,00000000,"", "", "","","")
{
    ui->setupUi(this);
    this->setFixedSize(QSize(336, 287));
    ui->contraLineEdit->setEchoMode(QLineEdit::Password);
    ui->repiteContraLineEdit->setEchoMode(QLineEdit::Password);
    validarDatos();
}

RegistrarAdmin::~RegistrarAdmin()
{
    delete ui;
}

void RegistrarAdmin::on_buttonBox_accepted()
{    
        QString DNI_str        = ui->lineEdit_DNI->text();
        QString contra_str      = ui->contraLineEdit->text();
        QString repite_contra_str = ui->repiteContraLineEdit->text();
        QString nombre_str     = ui->lineEdit_nombreA->text();
        QString apellido_str   = ui->lineEdit_apellidoA->text();
        QString direccion_str  = ui->lineEdit_direccionA->text();
        QString email_str      = ui->lineEdit_emailA->text();
    if(validarDatos()){
        mAdmin.setId(1);
        mAdmin.setDNI(stoi(DNI_str.toLocal8Bit().data()));
        mAdmin.setNombre(nombre_str.toStdString());
        mAdmin.setApellido(apellido_str.toStdString());
        mAdmin.setDireccion(direccion_str.toStdString());
        mAdmin.setEmail(email_str.toStdString());
        mAdmin.setContrasena(contra_str.toStdString());

        if(mAdmin.getContra() != repite_contra_str.toStdString()){
            QMessageBox::critical(this, "Error", "Las contraseñas no coinciden");
            return;
        }
    }
    accept();
}

void RegistrarAdmin::on_buttonBox_rejected()
{
    reject();
}

bool RegistrarAdmin::validarDatos()
{

    /*Inicio Ayuda para ingreso de datos*/
        QRegExp exp_dni("[0-9]{8}");
        QRegExp exp_N_A("^([A-ZÁÉÍÓÚ]{1}[a-zñáéíóú]+[\\s]*)+$");
        QRegExp exp_email("[\\w]+@{1}[\\w]+\\.[a-z]{2,3}");

        ui->lineEdit_DNI->setValidator(new QRegExpValidator(exp_dni, this));
        ui->lineEdit_nombreA->setValidator(new QRegExpValidator(exp_N_A, this));
        ui->lineEdit_apellidoA->setValidator(new QRegExpValidator(exp_N_A, this));
        ui->lineEdit_emailA->setValidator(new QRegExpValidator(exp_email, this));
    /*Fin Ayuda*/

      /*Comprobación de ingresos correctos*/
        bool ifDni =  exp_dni.exactMatch(ui->lineEdit_DNI->text());
        bool ifNombre = exp_N_A.exactMatch(ui->lineEdit_nombreA->text());
        bool ifApellido = exp_N_A.exactMatch(ui->lineEdit_apellidoA->text());
        bool ifEmail = exp_email.exactMatch(ui->lineEdit_emailA->text());

        if (ui->lineEdit_DNI->text() ==""){
        }else if(ifDni == false){
            ui->lineEdit_DNI->setStyleSheet("border: 1px solid red;");
        }else {
            ui->lineEdit_DNI->setStyleSheet("border: 1px solid green;");
            ifDni = true;
        }

        if (ui->lineEdit_nombreA->text() ==""){
        }else if(ifNombre == false){
             ui->lineEdit_nombreA->setStyleSheet("border: 1px solid red;");
        }else {
            ui->lineEdit_nombreA->setStyleSheet("border: 1px solid green;");
            ifNombre = true;
        }

        if (ui->lineEdit_apellidoA->text() ==""){
        }else if(ifApellido == false){
            ui->lineEdit_apellidoA->setStyleSheet("border: 1px solid red;");
        }else {
            ui->lineEdit_apellidoA->setStyleSheet("border: 1px solid green;");
            ifApellido = true;
        }

        if (ui->lineEdit_direccionA->text() !=""){
            ui->lineEdit_direccionA->setStyleSheet("border: 1px solid green;");
        }

        if (ui->lineEdit_emailA->text() ==""){
        }else if(ifEmail == false){
            ui->lineEdit_emailA->setStyleSheet("border: 1px solid red;");
        }else {
            ui->lineEdit_emailA->setStyleSheet("border: 1px solid green;");
            ifEmail = true;
        }

        if(ifDni==true && ifNombre==true && ifApellido==true && ifEmail==true)
        return true; //Si todos son correctos registra
        else return false; //No registra por almenos un error
}
