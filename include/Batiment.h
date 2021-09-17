#ifndef BATIMENT_H
#define BATIMENT_H

#include "Bag.h"
#include "Cible.h"
#include <iostream>
#include <string>

class Batiment : public Cible {
public:
  Batiment(std::string nom, int vie);
  Bag getPrice();

  void amelioration();
  void afficherEtat() const;

protected:
  Bag price;
  std::string m_nom;
};

#endif
