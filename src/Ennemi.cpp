#include "Ennemi.h"

Ennemi::Ennemi(std::string nom, int vie) : Perso(nom, vie) {}
void Ennemi::update(Map *map)
{
    Cible *cible = map->get_closest_ami(get_position());
    float distance = cible->get_position() - get_position();
   
    if (distance > 0) {
        move(-SPEED);
    } else {
        move(SPEED);
    } 

    if (distance <= RANGE)
    { 
        attaquer(cible);
    }
}
