// perso.h
#ifndef PERSO_H // include guard
#define PERSO_H

#include "Bag.h"
#include "Cible.h"
#include "Attaquant.h"
#include <iostream>

static int const MAX_VIE = 20;

class Weapon;

class Perso : public Cible, public Attaquant {
public:
    Perso();
    Perso(std::string name, int vie);
    void move(float);

private:
    std::string m_name;
    int m_level;
    Bag *bag;
    int m_xp;// A été ajouté par Hans (aller voir Perso.cpp pour comprendre)
    Weapon *weapon;
    int m_nbDegats;
};

#endif /* PERSO_H */


//class Perso {
//    truc de base des perso
//};
//
//class Ennemi : public Perso {
//    en plus boucle de jeu IA 
//    void update();
//};
//
//class Gentil : public Perso {
//    en plus construction batiement gain xp potion de vie ...
//};

