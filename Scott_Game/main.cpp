#include "main.hpp"

int main() {
    sf::RenderWindow window(sf::VideoMode(1000, 750), "SFML works!");
    window.setFramerateLimit(60);
    const float moveDistance = 5;

    Player player1;

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
            else if (event.type == sf::Event::KeyPressed) {
                switch (event.key.code) {
                    case sf::Keyboard::Left:
                        player1.MoveLeft(sf::Vector2f(moveDistance, 0.f));
                        break;
                    case sf::Keyboard::Right:
                        player1.MoveRight(sf::Vector2f(moveDistance, 0.f));
                        break;
                    case sf::Keyboard::Down:
                        player1.MoveDown(sf::Vector2f(0.f, moveDistance));
                        break;
                    case sf::Keyboard::Up:
                        player1.MoveUp(sf::Vector2f(0.f, moveDistance));
                        break;
                    default:
                        break;
                               
                }
            }
        }

        window.clear(sf::Color(100,100,100));
        window.draw(player1);
        window.display();
    }

    return 0;
}