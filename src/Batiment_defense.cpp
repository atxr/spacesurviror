#include "Batiment_defense.h"

Batiment_defense::Batiment_defense(std::string nom) : Batiment(nom) {}

void Batiment_defense::attaquer(Cible &cible)
{
    cible.recevoirDegats(m_nbDegats);
}
