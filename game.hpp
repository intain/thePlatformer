#ifndef GAME_HPP_INCLUDED
#define GAME_HPP_INCLUDED

#include <SFML/Graphics.hpp>

class GameState;

class Game{
public:
    sf::RenderWindow window;
    GameState* currentState;
    int run();
    Game();
};

#endif // GAME_HPP_INCLUDED
