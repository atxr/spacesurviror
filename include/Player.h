#ifndef PLAYER_H
#define PLAYER_H

#include "Perso.h"

class Player : public Perso {
public:
    Player(std::string, int);
    void eat(int bonus_health);
    bool build(Batiment b);
    void gain_xp(int xp);

private:
    int m_level;
    Bag *bag;
    int m_xp;// A été ajouté par Hans (aller voir Perso.cpp pour comprendre)
 
};

#endif
