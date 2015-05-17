#include "../../../../Headers/Game/World/Tile/plains.hpp"

void PlainsTile::draw(sf::RenderTarget& target, sf::RenderStates states) const {
    target.draw(_tile);
}