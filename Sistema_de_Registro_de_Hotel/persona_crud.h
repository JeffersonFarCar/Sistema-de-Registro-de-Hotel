#ifndef PERSONA_CRUD_H
#define PERSONA_CRUD_H

#include "persona.h"

class Persona_CRUD
{
public:
    Persona_CRUD();
    void createPersona(Persona _persona);
    Persona readPersona() const;
    void updatePersona(Persona _persona);
    void deletePersona(int _id);
};

#endif // PERSONA_CRUD_H
