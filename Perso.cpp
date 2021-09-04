#include "Perso.h"

Perso::Perso() : m_name("perso"){};
Perso::Perso(std::string name) : m_name(name){};

void Perso::recevoireDegats(int nbDegats) { m_vie -= nbDegats; }
