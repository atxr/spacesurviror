#ifndef BAG_H
#define BAG_H

#include <iostream>

class Bag {
public:
  Bag(std::string type);

private:
  int wood, food, water;
  int rock, iron, copper, oil;

  // TODO define + for Bags
};

#endif
