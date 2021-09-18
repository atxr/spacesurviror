#include "Player.h"

Player::Player(std::string nom, int vie) : Perso(nom, vie), m_speed(20) {
    sprite->setFillColor(sf::Color::Blue);
}

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

void Player::update(sf::Event event, Map* map)
{
    if (event.type == sf::Event::KeyPressed)
    {
        switch (event.key.code)
        {
            case(sf::Keyboard::Right):
            case(sf::Keyboard::D):
                std::cout << "RIGHT" << std::endl;
                move(m_speed);
                break;

            case(sf::Keyboard::A):
            case(sf::Keyboard::Left):
                std::cout << "LEFT" << std::endl;
                move(-m_speed);
                break;

            case(sf::Keyboard::F):
                std::cout<< "Ferme construite" << std::endl;
                build(map, new Batiment_ressource("Ferme", get_position()));
                break;  

            default:
                break;
        }
    }
}

bool Player::buy(Bag price) 
{
    bool r = true;
    for (int i=0; i<BAG_SIZE; i++)
    {
        r = r && price.at(i) <= bag->at(i);
    }
    if (r) {
        *bag = bag->rmv(price); 
    }
    return r;
}

bool Player::build(Map *map, Batiment *batiment)
{
    bool r = buy(batiment->getPrice());
    if (r) {
        map->add_batiment(batiment);
    }
    return r;
}
