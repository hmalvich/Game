#ifndef SPIRITED_GAME_PLAYER_HPP
#define SPIRITED_GAME_PLAYER_HPP

    // SFML LIBRARIES
    #include <SFML/Graphics/Sprite.hpp>
    #include <SFML/Graphics/Texture.hpp>
    #include <SFML/Graphics/RenderTarget.hpp>

    // TEMPORARY LIBRARIES
    #include <SFML/Graphics/RectangleShape.hpp>

    class Player : public sf::Drawable, sf::Transformable {
        public:
            Player();
            void MoveHorizontal(float distance);
            void MoveVertical(float distance);

        private:
            sf::Vector2f _position;
            sf::RectangleShape _avatar;

            void InitializePlayer();

            virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
    };

#endif /* SPIRITED_GAME_PLAYER_HPP */