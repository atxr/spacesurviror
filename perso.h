// perso.h
#ifndef PERSO_H // include guard
#define PERSO_H

#include <SFML/Graphics.hpp>
#include <iostream>

struct Bag {
  int wood, food, water;
  int rock, iron, copper, oil;
};

class Building {};
class Weapon {};

class Perso {
public:
  Perso();
  void eat(int bonus_health);
  bool build(Building b);
  void gain_xp(int xp);
  void move(float);
  void recevoireDegats(int nbDegats);

private:
  std::string name;
  int health;
  float location;
  int level;
  sf::RectangleShape *sprite;
  Bag *bag;
  Weapon *weapon;
};

#endif /* PERSO_H */
