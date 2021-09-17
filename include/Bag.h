#ifndef BAG_H
#define BAG_H

#include <iostream>

int const WOOD = 0;
int const FOOD = 1;
int const ROCK = 2;
int const IRON = 3;
int const COPPER = 4;
int const OIL = 5;
int const BAG_SIZE = 6;

class Bag {
public:
  Bag();
  Bag(std::string type);
  const int at(int i);
  void set(int i, int v);

  // Definition de l'operateur + pour la classe Bag
  Bag add(Bag b);
  Bag rmv(Bag b);

private:
  int bag[BAG_SIZE];
};

#endif
