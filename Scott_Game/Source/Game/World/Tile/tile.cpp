#include "../../../../Headers/Game/World/Tile/tile.hpp"

void Tile::createDefaultTile() {
    _tile.setPosition(0.f, 0.f);
    _tile.setFillColor(sf::Color::Red);
}

void Tile::createCustomTile(const sf::Vector2f& position, const sf::Color& color) {
    _tile.setPosition(position);
    _tile.setFillColor(color);
}

void Tile::draw(sf::RenderTarget& target, sf::RenderStates states) const {
    target.draw(_tile);
};