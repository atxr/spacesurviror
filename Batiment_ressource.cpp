#include "Batiment_ressource.h"

Batiment_ressource::Batiment_ressource(std::string type)
    : m_production(Bag(type)) {}

Batiment_ressource::generer_ressource()
{
  m_stockage += m_production;
}
