#include <SFML/Graphics.hpp>

int main() {
  int height = 900;
  int width = 1800;
  sf::RenderWindow window(sf::VideoMode(width, height), "sfml-app",
                          sf::Style::Close);
  sf::CircleShape shape(100.f);
  shape.setFillColor(sf::Color::Green);
  sf::RectangleShape rect(sf::Vector2f(width, height / 3));
  rect.setOrigin(sf::Vector2f(0, -2 * height / 3));
  rect.setFillColor(sf::Color::Blue);

  while (window.isOpen()) {
    sf::Event event;
    while (window.pollEvent(event)) {
      if (event.type == sf::Event::Closed)
        window.close();
    }

    window.clear();
    window.draw(shape);
    window.draw(rect);
    window.display();
  }

  return 0;
}
