#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(int tipo, QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_Usuarios_button_clicked();
    void on_Registros_button_clicked();
    void on_Habitacions_button_clicked();
    void on_Empleados_button_clicked();
    void on_LogOutPushButton_clicked();

private:
    Ui::MainWindow *ui;
    void nuevoLogin();
};
#endif // MAINWINDOW_H
