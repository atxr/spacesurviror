#ifndef BATIMENT_H
#define BATIMENT_H

#include "Bag.h"
#include <iostream>
#include <string>

class Perso; // On ne peut pas inclure recursivment Batiment et Perso

class Batiment {
public:
  Batiment(std::string nom);

  void recevoireDegats(int nbDegats);
  void attaquer(Perso &cible);
  void amelioration();
  void afficherEtat() const;

private:
  int m_vie;
  int m_nbDegats;
  std::string m_nom;
};

#endif
