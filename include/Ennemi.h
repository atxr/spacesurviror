#ifndef ENNEMI_H
#define ENNEMI_H

#include "Perso.h"
#include "Map.h"

float const SPEED = 1;
float const RANGE = 10;

class Ennemi : public Perso {
    public:
        Ennemi(std::string, int);
        void update(Map *map);
};

#endif
