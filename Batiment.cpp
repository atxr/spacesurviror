#include "Batiment.h"
#include "perso.h"

using namespace std;

Batiment::Batiment(std::string nom, int nbDegats, int vie): 
m_nom(nom), m_nbDegats(nbDegats), m_vie(vie)
{
    
}
void Batiment::recevoireDegats(int nbDegats)
{
    m_vie -= nbDegats;
    if(m_vie < 0)
    {
        m_vie = 0;
    }
}
void Batiment::attaquer(Perso &cible)
{
    cible.recevoireDegats(m_nbDegats);
}
