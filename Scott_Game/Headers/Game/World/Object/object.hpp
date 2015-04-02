#ifndef SPIRITED_GAME_WORLD_OBJECT_HPP
#define SPIRITED_GAME_WORLD_OBJECT_HPP

    // SFML LIBRARIES
    #include <SFML/Graphics/Sprite.hpp>
    #include <SFML/Graphics/Texture.hpp>
    #include <SFML/Graphics/RenderTarget.hpp>

    class Object : public sf::Drawable, sf::Transformable {

        public:
            Object();

        private:
            sf::Sprite _sprite;
            sf::Texture _texture;

            void InitializeObject();

            virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const = 0;
    };
    
#endif /* SPIRITED_GAME_WORLD_OBJECT_HPP */