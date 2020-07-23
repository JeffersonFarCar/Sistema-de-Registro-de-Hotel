#ifndef CLIENTE_CRUD_H
#define CLIENTE_CRUD_H

#include "cliente.h"

class Cliente_CRUD
{
public:
    Cliente_CRUD();
    void createCliente(Cliente _cliente);
    Cliente readCliente() const;
    void updateCliente(Cliente _cliente);
    void deleteCliente(int _id);
};

#endif // CLIENTE_CRUD_H
