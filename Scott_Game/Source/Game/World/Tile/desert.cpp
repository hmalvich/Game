#include "../../../../Headers/Game/World/Tile/desert.hpp"

void DesertTile::draw(sf::RenderTarget& target, sf::RenderStates states) const {
    target.draw(_tile);
}