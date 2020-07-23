#include "utils.h"

#include "conexion.h"
#include <QtSql>

Utils::Utils()
{

}

int Utils::getLastId(string tablename, string idcolumname){
    int lastId = 0;
    Conexion conn;

    QString getlastId;
    getlastId.append("SELECT * FROM "+QString::fromStdString(tablename)+" ORDER BY "+QString::fromStdString(idcolumname)+" DESC LIMIT 1;");

    conn.Conectar();

    QSqlQuery getId;
    getId.prepare(getlastId);
    getId.exec();

    while(getId.next()){
        lastId = getId.value(0).toInt();
    }

    conn.Cerrar();

    return lastId;
}
