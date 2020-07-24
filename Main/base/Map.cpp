//
// Created by kondiiq on 21.07.2020.
//


#include "Map.h"


Map::Map()
{
    alert = Stop;
    row = 20;
    column = 20;
    map_set_false();
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
            else
                display += "-";

            if(is_enemy(width, height))
                display += "E";
            else
                display += "-";

            if(is_npc(width, height))
                display += "N";
            else
                display += "-";

            if(is_water(width, height))
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

void Map::map_set_false()
{
    for(size_t width = 0 ; width < row; ++width)
    {
        for(size_t height = 0; height < column; ++height)
        {
            Field[width][height].Protagonist = false;
            Field[width][height].Enemy = false;
            Field[width][height].NPC = false;
            Field[width][height].Water = false;
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
    int width, height;
    double count {0.1 * (get_row() * get_column())};
    int counter = int(count);



    Field[0][0].Water = false;
    Field[0][1].Water = false;
    Field[1][0].Water = false;
    Field[1][1].Water = false;

    for(size_t i = 0; i < counter; ++i)
    {
        width = get_rand_row();
        height = get_rand_col();
        if(!Field[width][height].Water && !Field[width][height].Protagonist && !Field[width][height].NPC && !Field[width][height].Enemy)
        {
            std::cout<<"Row: " << width << "Column: "<< height << std::endl;
            Field[width][height].Water = true;
        }
        else
            {
            i = i-1;
            }
    }
}

void Map::set_npc()
{
    int width , height;
    unsigned short int npc = 15;


    Field[0][0].NPC = false;

    for(size_t i = 0; i < npc; ++i)
    {
        width = get_rand_row();
        height = get_rand_col();
        if(!Field[width][height].Water && !Field[width][height].NPC)
        {
            Field[width][height].NPC = true;
        }
        else
        {
            i = i-1;
        }
    }
}

void Map::set_enemy()
{
    int width, height;
    double count = 0.3 * (get_column() * get_row());
    int enemy = int(count);


    Field[0][0].Enemy = false;

    for (size_t i = 0; i < enemy; ++i)
    {
        width = get_rand_row();
        height = get_rand_col();
        if (!Field[width][height].Water && !Field[width][height].NPC && !Field[width][height].Enemy)
        {
            Field[width][height].Enemy = true;
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
    Field[get_row() - 1][get_column() - 2].Protagonist = true;
}

int Map::get_row() const
{
    return row;
}

int Map::get_column() const
{
    return column;
}

int Map::get_rand_col() const
{
    return std::experimental::randint(0, get_column()) ;
}

int Map::get_rand_row() const
{
   return std::experimental::randint(0, get_row());
}
