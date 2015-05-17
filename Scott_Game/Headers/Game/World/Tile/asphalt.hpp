#ifndef SPIRITED_GAME_WORLD_TILE_ASPHALT_HPP
#define SPIRITED_GAME_WORLD_TILE_ASPHALT_HPP

    //GAME LIBRARIES
    #include "tile.hpp"

    class AsphaltTile : public Tile {
        public:
            AsphaltTile(const sf::Vector2f& dimensions, const sf::Vector2f& position)
                : Tile(dimensions, position, sf::Color::Black)
            {}
        private:
            void draw(sf::RenderTarget& target, sf::RenderStates states) const;
    };

#endif /* SPIRITED_GAME_WORLD_TILE_ASPHALT_HPP */