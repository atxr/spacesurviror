#include "Cible.h"

Cible::Cible(int vie) : m_vie(vie), sprite(new sf::RectangleShape()), m_position(0) {}
int Cible::get_vie() { return m_vie; }
float Cible::get_position() { return m_position; }
void Cible::recevoirDegats(int nbDegats) { m_vie -= nbDegats; }
bool Cible::estVivant()
{
    if (m_vie > 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void Cible::draw(sf::RenderWindow *p_window)
{
    sprite->setPosition(sf::Vector2f(m_position, 400));
    p_window->draw(*sprite);
}

