#include "Cible.h"

Cible::Cible(int vie) : m_vie(vie) {}
int Cible::get_vie() { return m_vie; }
void Cible::recevoirDegats(int nbDegats) { m_vie -= nbDegats; }
