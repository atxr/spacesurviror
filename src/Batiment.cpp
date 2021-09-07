#include "Batiment.h"
#include "Perso.h"

using namespace std;

Batiment::Batiment(std::string nom, int vie) : Cible(vie), m_nom(nom) {}
