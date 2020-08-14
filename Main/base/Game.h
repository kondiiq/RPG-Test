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


class Game : public Map, public Hero, public Warior_enemy, public Archer_enemy
{

public:

    Map *map = new Map;
    Hero *hero = new Hero;
    Warior_enemy *warrior = new Warior_enemy;
    Archer_enemy *archer = new Archer_enemy;

    Game(Map *map, Hero *hero);
    ~Game();
    void play();

};

#endif //BASE_GAME_H
