#ifndef SPIRITED_GAME_WORLD_TILE_PLAINS_HPP
#define SPIRITED_GAME_WORLD_TILE_PLAINS_HPP

    //GAME LIBRARIES
    #include "tile.hpp"

    class PlainsTile : public Tile {
        public:
            PlainsTile(const sf::Vector2f& dimensions, const sf::Vector2f& position)
                : Tile(dimensions, position, sf::Color(37, 229, 37))
            {}
        private:
            void draw(sf::RenderTarget& target, sf::RenderStates states) const;
    };

#endif /* SPIRITED_GAME_WORLD_TILE_PLAINS_HPP */