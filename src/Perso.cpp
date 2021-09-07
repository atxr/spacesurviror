#include "Perso.h"

Perso::Perso() : m_name("perso"){};
Perso::Perso(std::string name) : m_name(name){};

void Perso::recevoireDegats(int nbDegats) { m_vie -= nbDegats; }
void Perso::eat(int bonus_health) 
{
    m_vie += bonus_health;
    if (m_vie > MAX_VIE)
    {
        m_vie = MAX_VIE;//Permet de ne pas dépacer les PV fixer au perso qui est pour l'instant à 20   
    }
} 
void Perso::gain_xp(int xp)//Système d'XP
{
    m_level += xp;
    if (m_xp == 20)
    {
        m_level += 1;
    }
    if (m_level == 1) {};//Bonus selon les levels à regarder ensemble et à revenir plus tard
}    
