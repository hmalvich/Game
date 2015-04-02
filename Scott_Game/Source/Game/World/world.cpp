#include "../../../Headers/Game/World/world.hpp"

World::World() {
    InitializeWorld();
}

void World::InitializeWorld() {
    // do stuff
}

void World::draw(sf::RenderTarget& target, sf::RenderStates states) const {
    for (const Creature& creature : _creatures) {
        target.draw(creature);
    }

    for (const Object& object : _objects) {
        target.draw(object);
    }
}