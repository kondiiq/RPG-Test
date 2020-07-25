//
// Created by kondiiq on 25.07.2020.
//

#ifndef BASE_ENEMY_H
#define BASE_ENEMY_H

#include <iostream>
#include <string>
#include "Map.h"
#include "Hero.h"

class Enemy : public Map, public Hero
{

private:

    unsigned short int attack ;
    unsigned short int defense;
    unsigned int level;
    unsigned short int health_point;

public:

    Enemy();
    unsigned int get_position_x();
    unsigned int get_position_y();
    virtual unsigned short int get_attack()  = 0;
    virtual unsigned short int get_defense()  = 0;
    unsigned int get_level() const;
    unsigned short int get_hp() const;
    void attacking();
    void defensing();
    void move();
};


#endif //BASE_ENEMY_H
