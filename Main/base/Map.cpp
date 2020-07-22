//
// Created by kondiiq on 21.07.2020.
//


#include "Map.h"


Map::Map()
{
    alert = Stop;
    row = 10;
    column = 10;
    loop_false();
    set_all();
    display();
}

void Map::display()
{
    std::string display{};
    for(size_t width = 0; width < row; ++width)
    {
        for(size_t height = 0; height < row; ++height)
        {
            display += "[";

            if(is_protagonist(width, height))
                display += "H";
            else if(is_enemy(width, height))
                display += "E";
            else if(is_npc(width, height))
                display += "N";
            else if(is_water(width, height))
                display += "W";
            else
                display += "-";

            display += "]";
        }
        display += "\n";
    }
    std::cout << display;
}

Map::~Map()
{
    std::cout << "Object has been destroyed\n";
}

void Map::loop_false()
{
    for(size_t width = 0 ; width < row; ++width)
    {
        for(size_t height = 0; height < column; ++height)
        {
            Field[width][height].Protagonist = false;
            Field[width][height].Enemy = false;
            Field[width][height].NPC = false;
            Field[width][height].Water = false;
           // std::cout << "X: " << width << "Y: " << height << "\n";
        }
    }
}

bool Map::is_enemy(int width, int height)
{
    if(Field[width][height].Enemy)
        return true;
    else
        return false;
}

bool Map::is_npc(int width, int height)
{
    if(Field[width][height].NPC)
        return true;
    else
        return false;
}

bool Map::is_protagonist(int width, int height)
{
    if(Field[width][height].Protagonist)
        return true;
    else
        return false;
}


bool Map::is_water(int width, int height)
{
    if(Field[width][height].Water)
        return true;
    else
        return false;
}

void Map::set_water()
{
    int width{} , height{};
    double count {0.1 * (width * column)};
    int counter = {int(count)};

    width = random_row(row);
    height = random_col(column);

    Field[0][0].Water = false;
    Field[0][1].Water = false;
    Field[1][0].Water = false;
    
    for(size_t i = 0; i < counter; ++i)
    {
        if(!Field[width][height].Water && !Field[width][height].Protagonist && !Field[width][height].NPC && !Field[width][height].Enemy)
        {
            Field[width][height].Water;
        }
        else
            {
            i = i-1;
            }
    }
}

void Map::set_npc()
{
    int width{} , height{};
    unsigned short int npc = {15};

    width = random_row(row);
    height = random_col(column);
    Field[0][0].NPC = false;

    for(size_t i = 0; i < npc; ++i)
    {
        if(!Field[width][height].Water && !Field[width][height].NPC)
        {
            Field[width][height].NPC;
        }
        else
        {
            i = i-1;
        }
    }
}

void Map::set_enemy()
{
    int width{}, height{};
    double count{0.3 * (width * column)};
    int enemy = int(count);

    width = random_row(row);
    height = random_col(column);
    Field[0][0].Enemy = false;

    for (size_t i = 0; i < enemy; ++i)
    {
        if (!Field[width][height].Water && !Field[width][height].NPC && !Field[width][height].Enemy)
        {
            Field[width][height].Enemy;
        }
        else
        {
            i = i - 1;
        }
    }
}

void Map::set_all()
{
    set_water();
    set_npc();
    set_enemy();
    Field[0][0].Protagonist = true;
}

int Map::random_col(int col)
{
    col = rand() % column;
    return col;
}

int Map::random_row(int rows)
{
    rows = rand() % row;
    return rows;
}