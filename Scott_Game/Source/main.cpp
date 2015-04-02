#include "../Headers/main.hpp"

int main() {
    sf::VideoMode screenDimensions(sf::VideoMode::getDesktopMode());
    sf::RenderWindow window(screenDimensions, "The Game", sf::Style::Fullscreen);
    window.setFramerateLimit(60);
    const float moveDistance = 5;

    Game game;

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
            else if (event.type == sf::Event::KeyPressed) {
                switch (event.key.code) {
                    case sf::Keyboard::Escape:
                        window.close();
                        break;
                    default:
                        break;
                }
            }
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) {
            game.MovePlayer(sf::Vector2f(moveDistance * -1.f, 0.f));
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) {
            game.MovePlayer(sf::Vector2f(moveDistance, 0.f));
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) {
            game.MovePlayer(sf::Vector2f(0.f, moveDistance * -1.f));
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) {
            game.MovePlayer(sf::Vector2f(0.f, moveDistance));
        }



        window.clear(sf::Color(100,100,100));
        window.draw(game);
        window.display();
    }

    return 0;
}