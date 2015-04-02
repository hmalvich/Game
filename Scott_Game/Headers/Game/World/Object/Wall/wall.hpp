#ifndef SPIRITED_GAME_WORLD_OBJECT_WALL_HPP
#define SPIRITED_GAME_WORLD_OBJECT_WALL_HPP

    // GAME LIBRARIES
    #include "../object.hpp"

    class Wall : public Object {

        public:
            Wall();

        private:

            void InitializeWall();

            virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
    };

#endif /* SPIRITED_GAME_WORLD_OBJECT_WALL_HPP */