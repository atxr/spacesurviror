#include "Perso.h"

Perso::Perso() : Cible(20), m_name("perso") {};
Perso::Perso(std::string name, int vie) : Cible(vie), m_name(name){};

void Perso::attaquer(Cible &cible)
{
    cible.recevoirDegats(m_nbDegats);
}

