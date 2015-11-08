#ifndef GAMESTATE_HPP_INCLUDED
#define GAMESTATE_HPP_INCLUDED

#include "game.hpp"

class GameState{
public:
    Game* game;
    virtual void update(float dt) = 0;
    virtual void draw(float dt) = 0;
    virtual void onEvent(float dt) = 0;
};

#endif // GAMESTATE_HPP_INCLUDED
