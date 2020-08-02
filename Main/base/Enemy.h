//
// Created by kondiiq on 25.07.2020.
//

#ifndef BASE_ENEMY_H
#define BASE_ENEMY_H

#include <iostream>
#include <string>


class Enemy
{
public:
    Enemy();
    ~Enemy();
    virtual unsigned short int get_atack() const  = 0;
    virtual unsigned short int get_def() const  = 0;
};

#endif //BASE_ENEMY_H
