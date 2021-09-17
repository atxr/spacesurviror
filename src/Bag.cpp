#include "Bag.h"

Bag::Bag() {};

Bag::Bag(std::string type) {
  if (type == "Ferme") {
    bag[FOOD] = 5;
  } else if (type == "Mine") {
    bag[ROCK] = 3;
  }
  // TODO FINISH HERE
}

const int Bag::at(int i) { return bag[i]; }
void Bag::set(int i, int v) { bag[i] = v; }

Bag Bag::add(Bag b) 
{
    Bag tmp;
    for (int i=0; i<BAG_SIZE; i++)
    {
        tmp.set(i, bag[i] + b.at(i));
    }
    return tmp;
}

Bag Bag::rmv(Bag b) 
{
    Bag tmp;
    for (int i=0; i<BAG_SIZE; i++)
    {
        tmp.set(i, bag[i] - b.at(i));
    }
    return tmp;
}
