#include "Batiment_defense"

Batiment_defense::Batiment_defense(std::string nom) : 
m_nom(nom)
{}

void attaquer(Cible &cible)
{
    cible.recevoirDegats(nbDegats);
}