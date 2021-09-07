#include "Batiment_defense.h"

Batiment_defense::Batiment_defense(std::string type) : Batiment(type)
 {
     if type == "Tourelle"
     {
         m_nbDegats = 5;
     }
 }

void Batiment_defense::attaquer(Cible &cible)
{
    cible.recevoirDegats(m_nbDegats);
}
