//
// Created by kondiiq on 20.07.2020.
//
#include "Hero.h"

Hero::Hero()
{

    //Start constructor

    std::cout << "Construct Your Protagonist " << std::endl;
    std::cout << "Hello \n Write name of your character :) " << std::endl;
    std::getline(std::cin, name);

    while(sex.length() > 1 && sex[0] == 'M' or sex[0] == 'm' or sex[0] == 'W' or sex[0] == 'w' )
    {
        std::getline(std::cin, sex);
    }
    if(sex[0] == 'M' or sex[0] == 'm')
    {
        sex = "Male";
    }
    else
    {
        sex = "Female";
    }

    attack = {5};
    defense = {5};
    mana = {20};
    health_point = {50};


    //Print statistic of character
    get_stats();
};

Hero::~Hero()
{
    //Deallocating memory

    std::cout << "Destroying the object!" << std::endl;

};

int Hero::get_attack()
{
    return attack;
}

int Hero::get_defense()
{
    return defense;
}

int Hero::get_health()
{
    return health_point;
}

int Hero::get_mana()
{
    return mana;
}
std::string Hero::get_name()
{
    return name;
}
std::string Hero::get_sex()
{
    return sex;
}
void Hero::get_stats()
{
    std::cout << "Name: " << get_name() << std::endl;
    std::cout << "Gender: " << get_sex() << std::endl;
    std::cout << "Stats :\n";
    std::cout << "Attack: " << get_attack() << std::endl;
    std::cout << "Defense: " << get_defense() << std::endl;
    std::cout << "HP: " << get_health() << std::endl;
    std::cout << "SP(Mana) : " << get_mana() << std::endl;
}

int Hero::plus_hp()
{
    health_point += 20;
    return health_point;
}

int Hero::plus_attack()
{
    attack += 3;
    return attack;
}

int Hero::plus_defense()
{
    defense += 3;
    return defense;
}

int Hero::plus_mp()
{
    mana += 5;
    return mana;
}