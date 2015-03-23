#include <SFML/Graphics/RectangleShape.hpp>
#include <SFML/Graphics/RenderTarget.hpp>

class Player : public sf::Drawable, sf::Transformable {
    public:
        Player();
        void MoveLeft(sf::Vector2f distance);
        void MoveRight(sf::Vector2f distance);
        void MoveUp(sf::Vector2f distance);
        void MoveDown(sf::Vector2f distance);

    private:
        sf::Vector2f position;
        sf::RectangleShape avatar;

        virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
};