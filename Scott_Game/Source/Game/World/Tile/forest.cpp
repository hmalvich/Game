#include "../../../../Headers/Game/World/Tile/forest.hpp"

void ForestTile::draw(sf::RenderTarget& target, sf::RenderStates states) const {
    target.draw(_tile);
}