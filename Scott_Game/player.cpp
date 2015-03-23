#include "player.hpp"

Player::Player() {
    position = sf::Vector2f(300.f, 300.f);
    avatar = sf::RectangleShape(sf::Vector2f(10.f,10.f));
    avatar.setFillColor(sf::Color::Blue);
    avatar.setPosition(300.f, 300.f);
}

void Player::MoveLeft(sf::Vector2f distance) {
    avatar.move(distance.x * -1, 0.f);
}

void Player::MoveRight(sf::Vector2f distance) {
    avatar.move(distance.x, 0.f);
}

void Player::MoveUp(sf::Vector2f distance) {
    avatar.move(0.f, distance.y * -1);
}

void Player::MoveDown(sf::Vector2f distance) {
    avatar.move(0.f, distance.y);
}

void Player::draw(sf::RenderTarget& target, sf::RenderStates states) const {
    target.draw(avatar);
}