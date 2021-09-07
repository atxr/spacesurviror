#ifndef BATIMENT_H
#define BATIMENT_H

#include "Bag.h"
#include "Cible.h"
#include <iostream>
#include <string>

class Perso; // On ne peut pas inclure recursivment Batiment et Perso

class Batiment : public Cible {
public:
  Batiment(std::string nom, int vie);

  void amelioration();
  void afficherEtat() const;

protected:
  std::string m_nom;
};

#endif
