#ifndef ENNEMI_H
#define ENNEMI_H

#include "Perso.h"

struct Map;

class Ennemi : public Perso {
    public:
        Ennemi(std::string, int);
        void update(Map *map);
};

#endif
