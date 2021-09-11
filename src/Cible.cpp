#include "Cible.h"

Cible::Cible(int vie) : m_vie(vie) {}
int Cible::get_vie() { return m_vie; }
void Cible::recevoirDegats(int nbDegats) { m_vie -= nbDegats; }
bool Cible::estVivant()
{
    if (m_vie > 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
