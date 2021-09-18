#include "Bag.h"
#include "Batiment_defense.h"
#include "Batiment_ressource.h"
#include "Player.h"
#include "Ennemi.h"
#include <iostream>

using namespace std;

int main() {
    sf::RenderWindow window(sf::VideoMode(1000, 800), "sfml-app");

    Map map;
    map.add_player(new Player("hans", 30));
    map.add_batiment(new Batiment_ressource("Mine", 400));
    map.add_ennemi(new Ennemi("mechant", 20));
    map.add_batiment(new Batiment_defense("Tourelle", 15));


    while (window.isOpen())
    {
        Player * player = map.get_player();

        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();

            player->update(event, &map);

        }

        window.clear();

        player->draw(&window);

        vector<Ennemi*> ennemi = map.get_ennemi();
        vector<Batiment*> batiment = map.get_batiment();

        for (int i=0; i<ennemi.size(); i++)
        {
            //ennemi[i]->update();
            ennemi[i]->draw(&window);
        }       

        for (int i=0; i<batiment.size(); i++)
        {
            //batiment[i]->update();
            batiment[i]->draw(&window);
        } 

        window.display();
    }

    return 0;
}
