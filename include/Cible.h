#ifndef CIBLE_H
#define CIBLE_H

#include <SFML/Graphics.hpp>

class Cible {
    public:
    void recevoirDegats(int nbDegats);

    protected:
    int m_vie;
    float location;
    sf::RectangleShape *sprite;

};

#endif
