#ifndef SPIRITED_GAME_WORLD_TILE_FOREST_HPP
#define SPIRITED_GAME_WORLD_TILE_FOREST_HPP

    //GAME LIBRARIES
    #include "tile.hpp"

    class ForestTile : public Tile {
        public:
            ForestTile(const sf::Vector2f& dimensions, const sf::Vector2f& position)
                : Tile(dimensions, position, sf::Color(4, 80, 11))
            {}
        private:
            void draw(sf::RenderTarget& target, sf::RenderStates states) const;
    };

#endif /* SPIRITED_GAME_WORLD_TILE_FOREST_HPP */