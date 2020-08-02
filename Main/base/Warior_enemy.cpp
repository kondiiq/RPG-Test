//
// Created by kondiiq on 02.08.2020.
//

#include "Warior_enemy.h"

Warior_enemy::Warior_enemy()
{
    name = "Warrior";
    level = Hero().get_level() + 5;
    attack = level + 10;
    def = level + 4;
    health = 100;


    std::cout << "Statistics: \n";
    std::cout << " Health: " << get_health() << std::endl;
    std::cout << " Level: " << get_lvl() << std::endl;;
    std::cout << " Name: " << get_name() << std::endl;
    std::cout << " Defense: " << get_def() << std::endl;;
    std::cout << " Attack: " << get_atack() << std::endl;;

}

Warior_enemy::~Warior_enemy()
{}

int Warior_enemy::get_lvl()
{
    return level;
}

std::string Warior_enemy::get_name() const
{
    return name;
}

unsigned short Warior_enemy::get_def() const
{
    return def;
}

unsigned short Warior_enemy::get_atack() const
{
    return attack;
}

unsigned short Warior_enemy::get_health()
{
    return health;
}

void Warior_enemy::move()
{

}

bool Warior_enemy::charge()
{
    float chance{0};
    chance = (attack / 2) / Hero().get_defense() * 0.01 ;

    if(chance > 0.51)
        return true;
    else
        return false;
}

int Warior_enemy::get_bonus()
{
    bonus = std::experimental::randint(0, level -2);

    return bonus;
}