#ifndef INDEX_REGISTRO_H
#define INDEX_REGISTRO_H

#include <QDialog>

namespace Ui {
class Index_Registro;
}

class Index_Registro : public QDialog
{
    Q_OBJECT

public:
    explicit Index_Registro(QWidget *parent = nullptr);
    ~Index_Registro();

private:
    Ui::Index_Registro *ui;
};

#endif // INDEX_REGISTRO_H
