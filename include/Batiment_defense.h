#ifndef BATIMENT_DEFENSE_H 
#define BATIMENT_DEFENSE_H

#include "Bag.h"
#include "Batiment.h"
#include "Cible.h"
#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>

class Batiment_defense : public Batiment
{
    public :
    Batiment_defense(std::string m_nom);
    void attaquer(Cible &cible);
    

    private :
    int m_nbDegats;
};

#endif
