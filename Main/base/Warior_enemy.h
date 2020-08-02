//
// Created by kondiiq on 02.08.2020.
//

#ifndef BASE_WARIOR_ENEMY_H
#define BASE_WARIOR_ENEMY_H
#include "Enemy.h"
#include "Map.h"
#include "Hero.h"
#include <iostream>
#include <ctime>
#include <string>


class Warior_enemy : public Enemy{


public:

    Warior_enemy();
    ~Warior_enemy();
    unsigned short int get_atack() const override;
    unsigned short int get_def() const override;
    int get_lvl();
    unsigned short int get_health();
    std::string get_name() const;
    void move();
    bool charge();
    int get_bonus() ;
private:

    std::string name;
    unsigned short int attack;
    unsigned short int def;
    int level;
    unsigned short int health;
    int bonus;
};


#endif //BASE_WARIOR_ENEMY_H
