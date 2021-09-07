#include "Bag.h"
#include "Batiment_defense.h"
#include "Batiment_ressource.h"
#include "Player.h"
#include "Ennemi.h"
#include <iostream>

using namespace std;

int main() {
    Player hans("hans", 30);
    Batiment_ressource mine_de_hans("Mine");

    Ennemi ennemi("mechant", 20);
    Batiment_defense tourelle("Tourelle", 15);
    tourelle.attaquer(ennemi);
    ennemi.attaquer(tourelle);
    hans.attaquer(ennemi);

    cout << "Ennemi : " << ennemi.get_vie() << endl;
    cout << "Hans : " << hans.get_vie() << endl;
    cout << "Tourelle : " << tourelle.get_vie() << endl;

  return 0;
}
