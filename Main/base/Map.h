//
// Created by kondiiq on 21.07.2020.
//

#ifndef BASE_MAP_H
#define BASE_MAP_H

#include "Hero.h"
#include <iostream>
#include <string>
#include <ctime>
#include <experimental/random>

//Var type Status

enum Status {Start, Pause, Stop};

//Structure type Mockup

struct Enemy_pos
{
    int pos_x;
    int pos_y;
};

struct Hero_pos
{
    int pos_x;
    int pos_y;
};

struct NPC_pos
{
    int pos_x;
    int pos_y;
};

struct Mockup
{
bool Protagonist;
bool Enemy;
bool NPC;
bool Water;
};

class Map
{
    //Public//
public:

    //Constructor
    Map();

    //Destructor

    ~Map();

    //Methods

    void set_water();
    void set_enemy();
    void set_npc();
    void set_all();
    void display();
    void map_set_false();
    bool is_protagonist(int width, int height);
    bool is_enemy(int width, int height);
    bool is_npc(int width, int height);
    bool is_water(int width, int height);
    int get_row() const;
    int get_column() const;
    int get_rand_row() const;
    int get_rand_col() const;
    Hero_pos get_hero_pos();
    void move();
    Status get_status();
//Private//
private:

    //Private structure , enum
    Mockup Field[20][20];
    Hero_pos hero_positioner[20][20];
    Enemy_pos enemy_pos[20][20];
    NPC_pos npc_pos[20][20];
    Status alert;

    //Private variables
     int row ;
     int column;

};

#endif //BASE_MAP_H
