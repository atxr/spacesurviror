#include "Bag.h"

Bag::Bag(std::string type) {
  wood = 0;
  food = 0;
  rock = 0;
  iron = 0;
  copper = 0;
  oil = 0;
  if (type == "ferme") {
    food = 5;
  } else if (type == "mine") {
    rock = 3;
  }
  // TODO FINISH HERE
}
