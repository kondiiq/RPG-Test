//
// Created by kondiiq on 20.07.2020.
//

#ifndef BASE_HERO_H
#define BASE_HERO_H

#include <iostream>
#include <string>
#include <ctime>
#include "Map.h"

enum Heal
{
     full_strenght, hurt, injured, dead
};


class Hero

{
// Public available methods

public:
    Hero();
    ~Hero();

    //Methods

    int get_attack() const;
    int get_defense() const;
    int get_mana() const;
    int get_health() const;
    unsigned int get_level() const;
    int plus_attack();
    int plus_defense();
    int plus_hp();
    int plus_mp();
    std::string get_name() const;
    std::string get_sex() const;
    void get_stats() ;
    void level_up();
    Heal get_heal() const;
//Private available variables and methods

private:

    //Variables

    unsigned int experience;
    unsigned int needed_exp;
    unsigned short int attack;
    unsigned short int defense;
    unsigned short int mana;
    unsigned short int health_point;
    unsigned short int level;
    Heal heal;
    std::string sex;
    std::string name;

};

#endif //BASE_HERO_H
