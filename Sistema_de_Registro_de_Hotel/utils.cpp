#include "utils.h"

#include "conexion.h"
#include <QtSql>

Utils::Utils()
{

}

/**
 * @brief Utils::getLastId
 * @param tablename Nombre de la tabla de la BD
 * @param idcolumname Nombre de la columna ID de la tabla
 * @return El último id del registro de la BD de la tabla seleccionada
 */
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

int Utils::contar(string tablename, string where, string value){
    int contar = 0;
    Conexion conn;

    QString queryCount;
    queryCount.append("SELECT COUNT(*) FROM "+QString::fromStdString(tablename)+
                     " WHERE "+QString::fromStdString(where)+" = "+QString::fromStdString(value)+";");

    conn.Conectar();

    QSqlQuery count;
    count.prepare(queryCount);
    count.exec();

    while(count.next()){
        contar = count.value(0).toInt();
    }

    conn.Cerrar();

    return contar;
}

/**
 * @brief Utils::_contar
 * @param tablename Nombre de la tabla dentro de la BD
 * @param clause Condicion WHERE de la consulta
 * @return La respuesta de la consulta COUNT
 */
int Utils::_contar(string tablename, string clause){
    int contar = 0;
    Conexion conn;

    QString queryCount;
    queryCount.append("SELECT COUNT(*) FROM "+QString::fromStdString(tablename)+" "+QString::fromStdString(clause));

    conn.Conectar();

    QSqlQuery count;
    count.prepare(queryCount);
    count.exec();

    while(count.next()){
        contar = count.value(0).toInt();
    }

    conn.Cerrar();

    return contar;
}
