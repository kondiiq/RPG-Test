//
// Created by kondiiq on 21.07.2020.
//

#ifndef BASE_MAP_H
#define BASE_MAP_H

#include <iostream>
#include <string>

struct Mockup
{
bool Protagonist;
bool Enemy;
bool NPC;
bool Tree;
bool Water;
};

class Map {
public:
    Map();
    ~Map();
    Mockup Mock[100][100];
    int get_protagonist_pos();
    int get_enemy_pos();
    int get_npc_pos();
    int get_water_pos();
    void set_all();
    void display();
    void loop_false();
    bool is_protagonist(int width, int height);
    bool is_enemy(int width, int height);
    bool is_npc(int width, int height);
    void is_someone(int width, int height);



private:
    unsigned  int row;
    unsigned  int column;

};


#endif //BASE_MAP_H
