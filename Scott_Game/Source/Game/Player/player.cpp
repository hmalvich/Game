#include "../../../Headers/Game/Player/player.hpp"

Player::Player() {
    InitializePlayer();
}

void Player::InitializePlayer() {
    _position = sf::Vector2f(300.f, 300.f);
    _avatar = sf::RectangleShape(sf::Vector2f(10.f, 10.f));
    _avatar.setFillColor(sf::Color::Blue);
    _avatar.setPosition(300.f, 300.f);
}

void Player::MoveHorizontal(float distance) {
    _avatar.move(distance, 0.f);
}

void Player::MoveVertical(float distance) {
    _avatar.move(0.f, distance);
}

void Player::draw(sf::RenderTarget& target, sf::RenderStates states) const {
    target.draw(_avatar);
}