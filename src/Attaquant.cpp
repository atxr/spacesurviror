#include "Attaquant.h"

Attaquant::Attaquant() : m_degats(1) {}
Attaquant::Attaquant(int degats) : m_degats(degats) {}

void Attaquant::attaquer(Cible* cible)
{
    cible->recevoirDegats(m_degats);
}
