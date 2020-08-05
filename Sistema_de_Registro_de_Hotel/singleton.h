#ifndef SINGLETON_H
#define SINGLETON_H


class singleton
{
public:
    static singleton* instance();
    void setDNI(int _dni);
    int getDNI();

private:
    static singleton* my_instance;
    int dni;
    singleton();
    ~singleton();
};

#endif // SINGLETON_H
