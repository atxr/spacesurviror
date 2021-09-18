#include "Batiment_ressource.h"

Batiment_ressource::Batiment_ressource(std::string type, float position)
    : Batiment(type, 20), m_production(Bag(type)) 
{
    m_position = position;
    sprite->setFillColor(sf::Color::Green);
}

void Batiment_ressource::generer_ressource() {
  *m_stockage = m_stockage->add(m_production);
}
