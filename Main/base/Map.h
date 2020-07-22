//
// Created by kondiiq on 21.07.2020.
//

#ifndef BASE_MAP_H
#define BASE_MAP_H

#include <iostream>
#include <string>
#include <ctime>

enum Status {Start, Pause, Stop, None};

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
    void random_field();




private:
    Mockup Field[100][100];
    Status alert;
    unsigned  int row;
    unsigned  int column;

};


#endif //BASE_MAP_H
