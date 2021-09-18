#ifndef ATTAQUANT_H
#define ATTAQUANT_H

#include "Cible.h"

class Attaquant
{
public:
    Attaquant();
    Attaquant(int);
    void attaquer(Cible *cible);

protected:
    int m_degats;
};

#endif
