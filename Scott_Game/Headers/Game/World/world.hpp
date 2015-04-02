#ifndef SPIRITED_GAME_WORLD_HPP
#define SPIRITED_GAME_WORLD_HPP

    // STANDARD LIBRARIES
    #include <vector>

    // SFML LIBRARIES
    #include <SFML/Graphics/Sprite.hpp>
    #include <SFML/Graphics/Texture.hpp>
    #include <SFML/Graphics/RenderTarget.hpp>

    // GAME LIBRARIES
        // CREATURES
        #include "Creature/Skeleton/skeleton.hpp"

        // OBJECTS
        #include "Object/Tree/tree.hpp"
        #include "Object/Wall/wall.hpp"

    class World : public sf::Drawable, sf::Transformable {

        public:
            World();

        private:
            std::vector<Creature> _creatures;
            std::vector<Object> _objects;
            
            void InitializeWorld();

            virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
    };
    
#endif /* SPIRITED_GAME_WORLD_HPP */