#ifndef MAP_H
#define MAP_H

#include "Player.h"
#include "Batiment.h"
#include <iostream>

#include "Ennemi.h"

struct Map {
    void add_player(Player *);
    void add_ennemi(Ennemi *);
    void add_batiment(Batiment *);

    Cible* get_closest_ennemi(float position);
    Cible* get_closest_ami(float position);

    Player* m_player;
    std::vector<Ennemi *> m_ennemi;
    std::vector<Batiment*> m_batiment;
};

#endif

