#include "Batiment_defense.h"

Batiment_defense::Batiment_defense(std::string type, int vie) : Batiment(type, vie)
 {
     if (type == "Tourelle")
     {
         m_degats = 5;
         sprite->setFillColor(sf::Color::Yellow);
     }
 }

