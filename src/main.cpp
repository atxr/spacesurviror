#include "Bag.h"
#include "Batiment_defense.h"
#include "Batiment_ressource.h"
#include "Player.h"
#include "Ennemi.h"
#include <iostream>

using namespace std;

int main() {
    Map map;
    map.add_player(new Player("hans", 30));
    map.add_batiment(new Batiment_ressource("Mine"));
    map.add_ennemi(new Ennemi("mechant", 20));
    map.add_batiment(new Batiment_defense("Tourelle", 15));
    return 0;
}
