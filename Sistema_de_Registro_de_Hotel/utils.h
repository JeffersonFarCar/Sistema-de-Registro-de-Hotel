#ifndef UTILS_H
#define UTILS_H
#include "string"
using namespace std;

class Utils
{
public:
    Utils();
    int getLastId(string tablename, string idcolumname);
};

#endif // UTILS_H