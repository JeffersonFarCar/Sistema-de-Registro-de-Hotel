#ifndef UTILS_H
#define UTILS_H
#include "string"
using namespace std;

class Utils
{
public:
    Utils();
    int getLastId(string tablename, string idcolumname);
    int contar(string tablename, string where, string value);
};

#endif // UTILS_H
