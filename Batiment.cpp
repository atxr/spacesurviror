#include "Batiment.h"
#include "Perso.h"

using namespace std;

Batiment::Batiment(std::string nom) : m_nom(nom) {}
void Batiment::recevoireDegats(int nbDegats) {
  m_vie -= nbDegats;
  if (m_vie < 0) {
    m_vie = 0;
  }
}
void Batiment::attaquer(Perso &cible) { cible.recevoireDegats(m_nbDegats); }
