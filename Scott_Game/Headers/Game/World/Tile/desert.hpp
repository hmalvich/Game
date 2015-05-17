#ifndef SPIRITED_GAME_WORLD_TILE_DESERT_HPP
#define SPIRITED_GAME_WORLD_TILE_DESERT_HPP

    //GAME LIBRARIES
    #include "tile.hpp"

    class DesertTile : public Tile {
        public:
            DesertTile(const sf::Vector2f& dimensions, const sf::Vector2f& position)
                : Tile(dimensions, position, sf::Color(204, 153, 51))
            {}
        private:
            void draw(sf::RenderTarget& target, sf::RenderStates states) const;
    };

#endif /* SPIRITED_GAME_WORLD_TILE_DESERT_HPP */