//
// Created by kondiiq on 25.07.2020.
//

#include "Enemy.h"
Enemy::Enemy()
{}

unsigned int Enemy::get_level() const
{
    return level;
}

unsigned short Enemy::get_defense()
{
    return defense;
}

unsigned short Enemy::get_attack()
{
    return attack;
}

unsigned short Enemy::get_hp() const
{
    return health_point;
}

unsigned int Enemy::get_position_x() {
    unsigned int width{};
    for(size_t i = 0; i < get_row(); ++i )
    {
        for(size_t j = 0; j < get_column(); ++j)
        {
            Map::is_enemy(i, j);
            width = i;

        }
    }
    return width;
}

unsigned int Enemy::get_position_y()
{
    unsigned int height {};
    for(size_t i = 0; i < get_row(); ++i)
    {
        for(size_t j = 0; j <get_column(); ++j)
        {
            Map::is_enemy(i , j);
            height = j;
        }
    }
    return height;
}
