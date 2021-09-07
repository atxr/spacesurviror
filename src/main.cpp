#include "Bag.h"
#include "Batiment.h"
#include "Batiment_ressource.h"
#include "Perso.h"
#include <iostream>

using namespace std;

int main() {
  Perso alex;
  Perso hans;

  Batiment_ressource ferme_de_alex("ferme");
  Batiment_ressource mine_de_hans("mine");

  //  Ennemi ennemi;
  //  Batiment_defense tourelle("Tourelle");
  //
  //  tourelle.attaquer(&ennemi);
  //  ennemi.attaquer(&tourelle);
  //  hans.attaquer(&ennemi);
  //  ennemi.attaquer(&alex);

  return 0;
}
