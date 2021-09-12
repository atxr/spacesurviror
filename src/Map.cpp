#include "Map.h"

void Map::add_player(Player *player) { m_player = player; }
void Map::add_ennemi(Ennemi *ennemi) { m_ennemi.push_back(ennemi); }
void Map::add_batiment(Batiment *batiment) { m_batiment.push_back(batiment); }


