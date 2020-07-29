

#include <QDialog>
#include <QTableWidget>

namespace Ui {
class gui_estado_habitacion;
}

class gui_estado_habitacion : public QDialog
{
    Q_OBJECT

public:
    explicit gui_estado_habitacion(QWidget *parent = nullptr);
    ~gui_estado_habitacion();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_comboBox_currentIndexChanged(int index);

private:
    Ui::gui_estado_habitacion *ui;
    void fillComboBox();
    QStringList estados;
    QString idestado;
};


