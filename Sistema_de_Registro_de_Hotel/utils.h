#ifndef UTILS_H
#define UTILS_H
#include "string"
#include <QString>
#include <QStringList>
using namespace std;

class Utils
{
public:
    Utils();
    int getLastId(string tablename, string idcolumname);
    int contar(string tablename, string where, string value); //Este no usen xD
    int _contar (QString tablename, QString clause);
    void updateEstado(QString tablename, QString estado, QString id);
    QStringList getIds(QString idcolumname, QString tablename, QString clause);
};

#endif // UTILS_H
