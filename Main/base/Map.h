//
// Created by kondiiq on 21.07.2020.
//

#ifndef BASE_MAP_H
#define BASE_MAP_H


#include <iostream>
#include <string>
#include <ctime>
#include <experimental/random>

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
    void map_set_false();
    bool is_protagonist(int width, int height);
    bool is_enemy(int width, int height);
    bool is_npc(int width, int height);
    bool is_water(int width, int height);
    int get_row() const;
    int get_column() const;
    int get_rand_row() const;
    int get_rand_col() const;
    int get_pos_x_hero() const;
    int get_pos_y_hero() const;
    bool get_hero_pos(int width, int height) ;
    void move();
    int get_enemies() const;
    bool is_fight(int width, int height);
    bool can_i_trade(int width, int height);
    Status get_status();
//Private//
private:

    //Private structure , enum
    Mockup Field[20][20]{};
    Status alert;

    //Private variables
     int row ;
     int column;
     int enemy;
};

#endif //BASE_MAP_H
