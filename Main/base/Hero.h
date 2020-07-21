//
// Created by kondiiq on 20.07.2020.
//

#ifndef BASE_HERO_H
#define BASE_HERO_H

#include <iostream>
#include <string>
#include <ctime>


class Hero
{

// Public available methods

public:

   Hero();
    ~Hero();
    int get_attack() const;
    int get_defense() const;
    int get_mana() const;
    int get_health() const;
    int plus_attack();
    int plus_defense();
    int plus_hp();
    int plus_mp();
    std::string get_name();
    std::string get_sex();
    void get_stats();
    void level_up();
//Private available variables and methods

private:

    unsigned short int attack;
    unsigned short int defense;
    unsigned short int mana;
    unsigned short int health_point;
    std::string  sex;
    std::string name;

};

#endif //BASE_HERO_H
