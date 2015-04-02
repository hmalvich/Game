#ifndef SPIRITED_GAME_WORLD_CREATURE_HPP
#define SPIRITED_GAME_WORLD_CREATURE_HPP

    // SFML LIBRARIES
    #include <SFML/Graphics/Sprite.hpp>
    #include <SFML/Graphics/Texture.hpp>
    #include <SFML/Graphics/RenderTarget.hpp>

    class Creature : public sf::Drawable, sf::Transformable {

        public:
            Creature();

        private:
            sf::Sprite _sprite;
            sf::Texture _texture;

            void InitializeCreature();
    
            virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const = 0;
    };


#endif /* SPIRITED_GAME_WORLD_CREATURE_HPP */