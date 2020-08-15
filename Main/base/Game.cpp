//
// Created by kondiiq on 14.08.2020.
//

#include "Game.h"

Game::Game(Map &map, Hero &hero)
:Map(map), Hero(hero)
{
  map.map_set_false();
  map.set_all();

}

Game::~Game()
{}

void Game::play()
{}