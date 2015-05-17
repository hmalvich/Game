#include "../../../Headers/Game/World/world.hpp"

World::World() {
    InitializeWorld();
}

void World::InitializeWorld() {
    std::mt19937 engine(1337);
    std::uniform_int_distribution<int> tile_type(0, 3);

    int width = 1920;
    int height = 1080;
    int blockSize = 20;
    int numBlocksX = width / blockSize;
    int numBlocksY = height / blockSize;

    for (int i = 0; i < numBlocksX; ++i) {
        for (int j = 0; j < numBlocksY; ++j) {
            int tileType = tile_type(engine);
            switch (tileType) {
                case 0:
                    _tiles.push_back(AsphaltTile(sf::Vector2f(20.f, 20.f), sf::Vector2f(i * 20.f, j * 20.f)));
                    break;
                case 1:
                    _tiles.push_back(DesertTile(sf::Vector2f(20.f, 20.f), sf::Vector2f(i * 20.f, j * 20.f)));
                    break;
                case 2:
                    _tiles.push_back(ForestTile(sf::Vector2f(20.f, 20.f), sf::Vector2f(i * 20.f, j * 20.f)));
                    break;
                case 3:
                    _tiles.push_back(PlainsTile(sf::Vector2f(20.f, 20.f), sf::Vector2f(i * 20.f, j * 20.f)));
                    break;
                default:
                    break;
            }
        }
    }
}

void World::draw(sf::RenderTarget& target, sf::RenderStates states) const {
    for (const Creature& creature : _creatures) {
        target.draw(creature);
    }

    for (const Object& object : _objects) {
        target.draw(object);
    }

    for (const Tile& tile : _tiles) {
        target.draw(tile);
    }
}