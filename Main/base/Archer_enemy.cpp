//
// Created by kondiiq on 26.07.2020.
//

#include "Archer_enemy.h"

Archer_enemy::Archer_enemy()

{
    name = "Archer";
    level = Hero().get_level() + 3;
    attack = get_atack() + level + 7;
    defense = get_def() + level + 1;
    archer_weapon = Bow;
    get_name();
    get_weapon();
    get_lvl();
}

Archer_enemy::~Archer_enemy()
{
    std::cout << "Objecct deleted\n;";
}

Weapon Archer_enemy::get_weapon() const
{
    return  archer_weapon;
}

unsigned short Archer_enemy::get_def() const
{
    return defense;
}

unsigned short Archer_enemy::get_atack() const
{
    return attack;
}

unsigned short Archer_enemy::get_lvl() const
{
    return level;
}

std::string Archer_enemy::get_name() const
{
    return name;
}

void Archer_enemy::move()
{

}
