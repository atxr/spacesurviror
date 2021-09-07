// perso.h
#ifndef PERSO_H // include guard
#define PERSO_H

#include "Bag.h"
#include <SFML/Graphics.hpp>
#include <iostream>

static int const MAX_VIE = 20;

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
  void attaquer(Perso &cible);

private:
  std::string m_name;
  int m_vie;
  float location;
  int m_level;
  sf::RectangleShape *sprite;
  Bag *bag;
  Weapon *weapon;
  int m_xp;// A été ajouté par Hans (aller voir Perso.cpp pour comprendre)
};

#endif /* PERSO_H */


//class Perso {
//    truc de base des perso
//};
//
//class Ennemi : public Perso {
//    en plus boucle de jeu IA 
//    void update();
//};
//
//class Gentil : public Perso {
//    en plus construction batiement gain xp potion de vie ...
//};

