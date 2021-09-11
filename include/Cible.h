#ifndef CIBLE_H
#define CIBLE_H

#include <SFML/Graphics.hpp>

class Cible {
    public:
    Cible(int vie);
    int get_vie();
    void recevoirDegats(int nbDegats);
    bool estVivant();
    float get_position();

    protected:
    int m_vie;
    float m_position;
    sf::RectangleShape *sprite;

};

#endif
