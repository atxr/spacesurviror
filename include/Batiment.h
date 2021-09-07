#ifndef BATIMENT_H
#define BATIMENT_H

#include "Bag.h"
#include <iostream>
#include <string>

class Perso; // On ne peut pas inclure recursivment Batiment et Perso

class Batiment {
public:
  Batiment(std::string nom);

  void amelioration();
  void afficherEtat() const;

protected:
  std::string m_nom;
};

#endif
