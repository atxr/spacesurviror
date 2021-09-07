#include "Player.h"

Player::Player(std::string nom, int vie) : Perso(nom, vie) {}

void Player::eat(int bonus_health) 
{
    m_vie += bonus_health;
    if (m_vie > MAX_VIE)
    {
        m_vie = MAX_VIE;//Permet de ne pas dépacer les PV fixer au perso qui est pour l'instant à 20   
    }
} 

void Player::gain_xp(int xp)//Système d'XP
{
    m_level += xp;
    if (m_xp == 20)
    {
        m_level += 1;
    }
    if (m_level == 1) {};//Bonus selon les levels à regarder ensemble et à revenir plus tard
} 
