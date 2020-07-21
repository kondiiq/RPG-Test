//
// Created by kondiiq on 21.07.2020.
//

#include "Map.h"
Map::Map()
{
    //row = new unsigned short int;
    //column = new unsigned short int;
    row = 50;
    column = 50;
    Mock[row][column];
    loop_false();
    display();
}

void Map::display()
{
    std::string view = "";
    for(size_t width = 0 ; width < row; ++width)
    {
        for(size_t height = 0 ;height < column; ++column)
        {
            view += "[";
            if(Mock[width][height].Protagonist)
            {
                view += "P";
            }
            else if(Mock[width][height].Enemy)
            {
                view += "E";
            }
            else if(Mock[width][height].NPC)
            {
                view += "N";
            }
            else if(Mock[width][height].Water)
            {
                view += "W";
            }
            else if(Mock[width][height].Tree)
            {
                view += "T";
            }
            else
            {
                view += "-";
            }
            view += "]";
        }
    }
    std::cout << view;
}

Map::~Map()
{
//    delete row;
//    delete column;
}

void Map::loop_false()
{
    for(size_t width = 0 ; width < row; ++width)
    {
        for(size_t height = 0; height < column; ++height)
        {
            Mock[width][height].Protagonist = false;
            Mock[width][height].Enemy = false;
            Mock[width][height].NPC = false;
            Mock[width][height].Water = false;
            Mock[width][height].Tree = false;
        }
    }
}

bool Map::is_enemy(int width, int height)
{
    if(Mock[width][height].Enemy)
        return true;
    else
        return false;
}

bool Map::is_npc(int width, int height)
{
    if(Mock[width][height].NPC)
        return true;
    else
        return false;
}

bool Map::is_protagonist(int width, int height)
{
    if(Mock[width][height].Protagonist)
        return true;
    else
        return false;
}

void Map::is_someone(int width, int height)
{
    std::cout << "NPC: " << is_npc(width, height) << std::endl;
    std::cout << "Enemy: " << is_enemy(width, height) << std::endl;
    std::cout << "Me :" << is_protagonist(width, height) << std::endl;
}