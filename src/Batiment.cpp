#include "Batiment.h"
#include "Perso.h"

using namespace std;

Batiment::Batiment(std::string nom, int vie) : 
    Cible(vie), m_nom(nom) 
{ 
    sprite->setSize(sf::Vector2f(40,100)); }

Bag Batiment::getPrice() { return price; }
