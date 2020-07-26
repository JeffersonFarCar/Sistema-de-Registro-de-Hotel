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

//este no funciona bien
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
int Utils::_contar(QString tablename, QString clause){
    int contar = 0;
    Conexion conn;

    QString queryCount;
    queryCount.append("SELECT COUNT(*) FROM "+tablename+" "+clause);

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
 * @brief Utils::updateEstado
 * @param tablename Nombre de la tabla del elemento que queremos actualizar
 * @param estado Nombre del campo estado de la tabla
 * @param id Condicion id
 * Actualiza el estado de un elemento
 */
void Utils::updateEstado(QString tablename, QString estado, QString id){
    Conexion conn;

    QString queryUS;
    queryUS.append("UPDATE "+tablename+" SET "+estado+" WHERE "+id);

    conn.Conectar();
    QSqlQuery count;
    count.prepare(queryUS);
    count.exec();

    conn.Cerrar();
}

QStringList Utils::getIds(QString tablename, QString clause){
    QStringList ids;
    Conexion conn;
    QString queryIds;
    queryIds.append("SELECT idhabitacion FROM "+tablename+" WHERE "+clause);
    conn.Conectar();
    QSqlQuery query;
    query.prepare(queryIds);
    query.exec();
    while(query.next()){
        ids.append(query.value(0).toByteArray().constData());
    }
    return ids;
}
