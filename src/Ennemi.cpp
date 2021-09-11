#include "Ennemi.h"

Ennemi::Ennemi(std::string nom, int vie) : Perso(nom, vie) {}
void Ennemi::update(Map *map)
{
    float distance_Player = get_position() - map->player[0].get_position();
    float distance_Batiment = get_position() - map->batiment_defense[0].get_position();
    
    if (distance_Batiment > distance_Player)  
    {
        if (distance_Player>0) {
            move(-0.1);
        } else {
            move(0.1);
        } 

        if (distance_Player <= 8)
       { 
           attaquer(map->player[0]);
       }
    }   
    else 
    {
        if (distance_Player>0) {
            move(-0.1);
        } else {
            move(0.1);
        } 

        if (distance_Batiment <= 8)
        {
           attaquer(map->Batiment[0]);
        }
    }
}
