#ifndef SPIRITED_GAME_WORLD_TILE_HPP
#define SPIRITED_GAME_WORLD_TILE_HPP

    //SFML Libraries
    #include <SFML/Graphics/RectangleShape.hpp>
    #include <SFML/Graphics/RenderTarget.hpp>

    class Tile : public sf::Drawable, sf::Transformable {
        public:
            Tile() {
                createDefaultTile();
            }
            Tile(const sf::Vector2f& dimensions, const sf::Vector2f& position, const sf::Color& color)
                : _tile(dimensions) {
                createCustomTile(position, color);
            }

        protected:
            sf::RectangleShape _tile;

            void createDefaultTile();
            void createCustomTile(const sf::Vector2f& position, const sf::Color& color);
            virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
    };

#endif /* SPIRITED_GAME_WORLD_TILE_HPP */