#ifndef SPIRITED_GAME_WORLD_OBJECT_TREE_HPP
#define SPIRITED_GAME_WORLD_OBJECT_TREE_HPP

    // GAME LIBRARIES
    #include "../object.hpp"

    class Tree : public Object {

        public:
            Tree();

        private:

            void InitializeTree();

            virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
    };

#endif /* SPIRITED_GAME_WORLD_OBJECT_TREE_HPP */