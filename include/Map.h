#ifndef MAP_H
#define MAP_H

#include "Batiment.h"
#include <iostream>

#include "Player.h"
#include "Ennemi.h"
class Player;
class Ennemi;

struct Map {
    Map();
    Map(Player *player);

    Player* get_player();
    std::vector<Ennemi*> get_ennemi();
    std::vector<Batiment*> get_batiment();

    void add_player(Player *);
    void add_ennemi(Ennemi *);
    void add_batiment(Batiment *);

    Cible* get_closest_ennemi(float position);
    Cible* get_closest_ami(float position);

private:
    Player* m_player;
    std::vector<Ennemi *> m_ennemi;
    std::vector<Batiment*> m_batiment;
};

#endif

