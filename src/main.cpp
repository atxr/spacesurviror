#include "Bag.h"
#include "Batiment_defense.h"
#include "Batiment_ressource.h"
#include "Player.h"
#include "Ennemi.h"
#include <iostream>

using namespace std;

struct Map {
    vector<Player*> player;
    vector<Ennemi*> ennemi;
    vector<Batiment_defense*> batiment_defense;
    vector<Batiment_ressource*> batiment_ressource;
};

int main() {
    Map map;
    map.player.push_back(new Player("hans", 30));
    map.batiment_ressource.push_back(new Batiment_ressource("Mine"));
    map.ennemi.push_back(new Ennemi("mechant", 20));
    map.batiment_defense.push_back(new Batiment_defense("Tourelle", 15));

    map.batiment_defense[0]->attaquer(*map.ennemi[0]);
    map.player[0]->attaquer(*map.ennemi[0]);
    map.ennemi[0]->attaquer(*map.batiment_defense[0]);

  return 0;
}
