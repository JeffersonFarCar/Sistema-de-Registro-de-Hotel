#include "singleton.h"

singleton::singleton() { }
singleton::~singleton() { }
singleton* singleton::my_instance = 0;
singleton* singleton::instance(){
    if(!my_instance){
        my_instance = new singleton();
    }
    return my_instance;
}

void singleton::setDNI(int _dni){
    dni = _dni;
}

int singleton::getDNI(){
    return dni;
}
