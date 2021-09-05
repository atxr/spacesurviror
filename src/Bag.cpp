#include "Bag.h"

Bag::Bag() : wood(0), food(0), rock(0), iron(0), copper(0), oil(0){};

Bag::Bag(std::string type) {
  *this = Bag();
  if (type == "ferme") {
    this->food = 5;
  } else if (type == "mine") {
    this->rock = 3;
  }
  // TODO FINISH HERE
}
