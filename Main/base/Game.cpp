//
// Created by kondiiq on 14.08.2020.
//

#include "Game.h"

Game::Game(Map &map, Hero &hero)
:Map(*map), Hero(*hero)
{

}

Game::~Game()
{
    if(map -> get_status() == Stop)
    {
        std::cout << "Initializing end game" << std::endl;

        delete map;
        delete hero;
        delete warrior;
        delete archer;

        std::cout << "Objects has been destroyed!! \n" << std::endl;
    }

    else{}

}

void Game::play()
{
    while(hero -> get_health() > 0 || map -> get_status() == Start) // Main loop of game
{

}
    if(map -> get_status() == Pause)
{

}

}