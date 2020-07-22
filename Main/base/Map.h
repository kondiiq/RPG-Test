//
// Created by kondiiq on 21.07.2020.
//

#ifndef BASE_MAP_H
#define BASE_MAP_H
#include "Hero.h"
#include <iostream>
#include <string>
#include <ctime>

//Var type Status

enum Status {Start, Pause, Stop};

//Structure type Mockup

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
    void loop_false();
    bool is_protagonist(int width, int height);
    bool is_enemy(int width, int height);
    bool is_npc(int width, int height);
    bool is_water(int width, int height);
    int random_row(int rows);
    int random_col(int col);



//Private//
private:
    //Private structure , enums
    Mockup Field[100][100];
    Status alert;

    //Private variables
    unsigned  int row;
    unsigned  int column;

};


#endif //BASE_MAP_H
