//
// Created by kondiiq on 21.07.2020.
//

#include "Map.h"
Map::Map()
{
    alert = None;
    row = 10;
    column = 10;
    loop_false();
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
                display =+ "N";
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
            Field[width][height].Protagonist = true;
            Field[width][height].Enemy = true;
            Field[width][height].NPC = true;
            Field[width][height].Water = true;
            Field[width][height].Tree = true;
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

void Map::is_someone(int width, int height)
{
    std::cout << "For fiedl : X" << width << " Y " << height <<" \n ";
    std::cout << "NPC: " << is_npc(width, height) << std::endl;
    std::cout << "Enemy: " << is_enemy(width, height) << std::endl;
    std::cout << "Me :" << is_protagonist(width, height) << std::endl;
}

