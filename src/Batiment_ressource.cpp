#include "Batiment_ressource.h"

Batiment_ressource::Batiment_ressource(std::string type)
    : Batiment(type, 20), m_production(Bag(type)) 
{
    sprite->setFillColor(sf::Color::Green);
}

void Batiment_ressource::generer_ressource() {
  *m_stockage = m_stockage->add(m_production);
}
