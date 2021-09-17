#include "Map.h"

Map::Map() : Map(new Player("Player", 30)) {}
Map::Map(Player *player) : m_player(player) {}

Player* Map::get_player() { return m_player; }
std::vector<Ennemi*> Map::get_ennemi() { return m_ennemi; }
std::vector<Batiment*> Map::get_batiment() { return m_batiment; }

void Map::add_player(Player *player) { m_player = player; }
void Map::add_ennemi(Ennemi *ennemi) { m_ennemi.push_back(ennemi); }
void Map::add_batiment(Batiment *batiment) { m_batiment.push_back(batiment); }

float fabs(float x)
{
    if (x>0) {
        return x;
    } else {
        return -x;
    }
}

Cible* Map::get_closest_ennemi(float position)
{
    if (m_ennemi.size() == 0)
    {
        return nullptr;
    }

    Cible *cible = m_ennemi[0];
    float d = -1;
    for (int i=0; i<m_ennemi.size(); i++)
    {
        if (d == -1 || fabs(position - m_ennemi[i]->get_position()) < d)
        {
            cible = m_ennemi[i];
            d = fabs(position - cible->get_position());
        }
    }

    return cible;
}

Cible* Map::get_closest_ami(float position)
{
    if (m_batiment.size() == 0)
    {
        return m_player;
    }

    Cible *cible = m_batiment[0];
    float d = -1;
    for (int i=0; i<m_batiment.size(); i++)
    {
        if (d == -1 || fabs(position - m_batiment[i]->get_position()) < d)
        {
            cible = m_batiment[i];
            d = fabs(position - cible->get_position());
        }
    }
    
    if (d < fabs(m_player->get_position() - position)) {
        return cible;
    } else {
        return m_player;
    }
}

