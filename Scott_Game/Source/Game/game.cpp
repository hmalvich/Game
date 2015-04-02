#include "../../Headers/Game/game.hpp"

void Game::InitializeGame() {
    // do stuff
}

void Game::MovePlayer(const sf::Vector2f& distance) {
    if (distance.x) {
        _player1.MoveHorizontal(distance.x);
    }
    if (distance.y) {
        _player1.MoveVertical(distance.y);
    }
}

void Game::draw(sf::RenderTarget& target, sf::RenderStates states) const {
    target.draw(_world);
    target.draw(_player1);
}