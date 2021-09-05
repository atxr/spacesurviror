#ifndef BAG_H
#define BAG_H

#include <iostream>

class Bag {
public:
  Bag();
  Bag(std::string type);

  // Definition de l'operateur + pour la classe Bag
  Bag operator+(const Bag &b) {
    Bag bag;
    bag.wood = this->wood + b.wood;
    bag.wood = this->food + b.food;
    bag.wood = this->iron + b.iron;
    bag.wood = this->rock + b.rock;
    bag.wood = this->copper + b.copper;
    bag.wood = this->oil + b.oil;
    return bag;
  }

private:
  int wood, food, water;
  int rock, iron, copper, oil;
};

#endif
