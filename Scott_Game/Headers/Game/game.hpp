#ifndef SPIRITED_GAME_HPP
#define SPIRITED_GAME_HPP

    // GAME LIBRARIES
    #include "Player/player.hpp"
    #include "World/world.hpp"

    class Game : public sf::Drawable, sf::Transformable {
        public:
            Game()
                : _player1(),
                  _world()
            {
                InitializeGame();
            };

            void MovePlayer(const sf::Vector2f& distance);

        private:
            Player _player1;
            World _world;

            void InitializeGame();

            virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
    };
    
#endif /* SPIRITED_GAME_HPP */