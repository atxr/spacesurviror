#include "Ennemi.h"

Ennemi::Ennemi(std::string nom, int vie) : Perso(nom, vie) {}
void Ennemi::update()
{
    int distance_Player = setPosition() - Player.setPosition;
    int distance_Batiment = setPosition() - Batiment.setPosition;
    
    while (Player.estVivant(true))
    {
        if (distance_Batiment > distance_Player)  
        {
            Ennemi.move;
            if (distance_Player <= 8)
           { 
               attaquer(Player);
           }
        }   
        else 
        {
            move;
            if (distance_Batiment <= 8)
           {
               attaquer(Batiment);
           }
        }
    }
}
