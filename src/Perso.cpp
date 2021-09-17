#include "Perso.h"

Perso::Perso() : Cible(20), m_name("perso") {};
Perso::Perso(std::string name, int vie) : 
    Cible(vie), m_name(name)
{
    sprite->setSize(sf::Vector2f(30,80));
}

void Perso::move(float speed)
{
    m_position += speed;
    std::cout << m_position << std::endl;
}

void Perso::attaquer(Cible *cible)
{
    cible->recevoirDegats(m_nbDegats);
}

