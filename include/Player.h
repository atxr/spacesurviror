#ifndef PLAYER_H
#define PLAYER_H

#include "Perso.h"
#include "Batiment.h"
#include "Map.h"

class Map;

class Player : public Perso {
public:
    Player(std::string, int);
    void eat(int bonus_health);
    bool build(Map* m, Batiment* b);
    void gain_xp(int xp);
    void update(sf::Event event);
    bool buy(Bag price);

private:
    int m_level;
    Bag *bag;
    int m_xp;// A été ajouté par Hans (aller voir Perso.cpp pour comprendre)
    float m_speed;
};

#endif
