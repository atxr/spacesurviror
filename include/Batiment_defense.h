#ifndef BATIMENT_DEFENSE_H 
#define BATIMENT_DEFENSE_H

#include "Bag.h"
#include "Batiment.h"
#include "Cible.h"
#include "Attaquant.h"
#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>

class Batiment_defense : public Batiment, public Attaquant {
    public :
    Batiment_defense(std::string m_nom, int vie);
};

#endif
