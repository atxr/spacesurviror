// perso.h
#ifndef PERSO_H // include guard
#define PERSO_H

#include "Bag.h"
#include <SFML/Graphics.hpp>
#include <iostream>

class Batiment; // On ne peut pas inclure recursivement Batiment et Perso
class Weapon {};

class Perso {
public:
  Perso();
  Perso(std::string name);
  void eat(int bonus_health);
  bool build(Batiment b);
  void gain_xp(int xp);
  void move(float);
  void recevoireDegats(int nbDegats);

private:
  std::string m_name;
  int m_vie;
  float location;
  int level;
  sf::RectangleShape *sprite;
  Bag *bag;
  Weapon *weapon;
  int m_xp;// A été ajouté par Hans (aller voir Perso.cpp pour comprendre)
};

#endif /* PERSO_H */
