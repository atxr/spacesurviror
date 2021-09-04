#ifndef DEF_BATIMENT
#define DEF_BATIMENT

#include "perso.h"
#include <iostream>
#include <string>


class Batiment
{
    public: 
    
    Batiment(std::string nom, int nbDegats, int vie);
     
    void ressourceGenere();
    void recevoireDegats(int nbDegats);
    void attaquer(Perso &cible);
    void amelioration();
    void afficherEtat()const;
    
    private:

    int m_ressource(int bois, int ble, int eau, int pierre, int fer, int cuivre, int petrole);
    int m_vie;
    int m_nbDegats;
    std::string m_nom;
};

#endif