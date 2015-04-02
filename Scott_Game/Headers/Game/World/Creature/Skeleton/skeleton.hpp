#ifndef SPIRITED_GAME_WORLD_CREATURE_SKELETON_HPP
#define SPIRITED_GAME_WORLD_CREATURE_SKELETON_HPP

    // GAME LIBRARIES
    #include "../creature.hpp"

    class Skeleton : public Creature {

        public:
            Skeleton();

        private:

            void InitializeSkeleton();

            virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
    };


#endif /* SPIRITED_GAME_WORLD_CREATURE_SKELETON_HPP */