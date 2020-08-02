//
// Created by kondiiq on 26.07.2020.
//

#ifndef BASE_ARCHER_ENEMY_H
#define BASE_ARCHER_ENEMY_H

#include "Enemy.h"
#include "Hero.h"
#include <iostream>
#include <string>

enum Weapon {Bow, Knife, Sword};

class Archer_enemy : public Enemy{

public:
    explicit Archer_enemy();
    ~Archer_enemy();
    unsigned short int get_atack() const override;
    unsigned short int get_def() const override;
    unsigned short int get_lvl() const;
    std::string get_name() const;
    Weapon get_weapon() const;
    bool aggression();
    void move();

private:

    std::string name;
    unsigned short int level;
    unsigned short int attack;
    unsigned short int defense;
    Weapon archer_weapon;

};


#endif //BASE_ARCHER_ENEMY_H
