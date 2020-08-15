//
// Created by kondiiq on 14.08.2020.
//

#ifndef BASE_GAME_H
#define BASE_GAME_H

#include"Map.h"
#include"Hero.h"
#include"Warior_enemy.h"
#include"Archer_enemy.h"
#include<iostream>
#include<string>
#include<ctime>
#include<vector>


class Game :public Map, public Hero
{
public:

    Game(Map &map, Hero &hero);
    ~Game();
    void play();

};

#endif //BASE_GAME_H
