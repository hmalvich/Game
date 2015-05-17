#include "../../../../Headers/Game/World/Tile/asphalt.hpp"

void AsphaltTile::draw(sf::RenderTarget& target, sf::RenderStates states) const {
    target.draw(_tile);
}