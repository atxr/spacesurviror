#ifndef BATIMENT_RESSOURCE_H // include guard
#define BATIMENT_RESSOURCE_H

#include "Bag.h"
#include "Batiment.h"
#include <SFML/Graphics.hpp>
#include <iostream>

class Batiment_ressource : public Batiment {
public:
  Batiment_ressource(std::string type);
  void generer_ressource(); // m_stockage = m_production + m_stockage

private:
  Bag *m_stockage;
  Bag m_production;
};

#endif
