#include "Batiment_ressource.h"

Batiment_ressource::Batiment_ressource(std::string type)
    : m_production(Bag(type)) {}
