#include "game.hpp"
#include "gamestate.hpp"

int Game::run(){
    sf::Clock clock;
    float dt
    while(window.isOpen()){
        dt = clock.restart().asSeconds();
        currentState->update(dt);
        currentState->draw(dt);
        window.display();
        currentState->onEvent(dt);
    }
    return 0;
}

Game::Game(){
    window.create(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), "title", sf::Style::Close);
    window.setFramerateLimit(60);
}
