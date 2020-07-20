//
// Created by kondiiq on 20.07.2020.
//

#ifndef BASE_HERO_H
#define BASE_HERO_H

#include <iostream>
#include <string>
#include <time.h>
#include <ctime>

class Hero
{

// Public available methods

public:

   Hero();
    ~Hero();
    int get_attack();
    int get_defense();
    int get_mana();
    int get_health();
    int plus_attack();
    int plus_defense();
    int plus_hp();
    int plus_mp();
    void get_stats();


//Private available variables and methods

private:

    unsigned int* attack;
    unsigned int* defense;
    unsigned int* mana;
    unsigned int* health_point;
    std::string*  sex;
    std::string *name;

};

#endif //BASE_HERO_H
