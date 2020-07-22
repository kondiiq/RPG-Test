//
// Created by kondiiq on 20.07.2020.
//
#include "Hero.h"

Hero::Hero()
{

    //Start constructor
    experience = 0;
    needed_exp = 20;

    std::cout << "Construct Your Protagonist " << std::endl;
    std::cout << "Hello \n Write name of your character :) " << std::endl;
    std::getline(std::cin, name);
    for(size_t gender = 0; gender <= 1 ; gender++)
    {
        std::getline(std::cin, sex);

        if(sex[0] == 'M' || sex[0] == 'm' || sex[0] == 'W' || sex[0] == 'w')
        {
            gender = 1;
            if(sex[0] == 'M' || sex[0] == 'm')
            {
               sex = "Male";
            }
            else
            {
                sex = "Female";
            }

        }
        else
        {
            gender = 0;
        }
    }
    attack = {5};
    defense = {5};
    mana = {20};
    health_point = {0};
    get_stats();

   if(experience == needed_exp)
   {
       level_up();
   }
   else
   {}
};

Hero::~Hero()
{
    //Deallocating memory

    std::cout << "Destroying the object!" << std::endl;

};

int Hero::get_attack() const
{
    return attack;
}

int Hero::get_defense() const
{
    return defense;
}

int Hero::get_health() const
{
    return health_point;
}

int Hero::get_mana() const
{
    return mana;
}
std::string Hero::get_name()
{
    return name;
}

std::string Hero::get_sex()
{
    return sex;
}

void Hero::get_stats()
{
    std::cout << "Name: " << get_name() << std::endl;
    std::cout << "Gender: " << get_sex() << std::endl;
    std::cout << "Stats :\n";
    std::cout << "Attack: " << get_attack() << std::endl;
    std::cout << "Defense: " << get_defense() << std::endl;
    std::cout << "HP: " << get_health() << std::endl;
    std::cout << "SP(Mana) : " << get_mana() << std::endl;
}

int Hero::plus_hp()
{
    health_point += 20;
    return health_point;
}

int Hero::plus_attack()
{
    attack += 1;
    return attack;
}

int Hero::plus_defense()
{
    defense += 1;
    return defense;
}

int Hero::plus_mp()
{
    mana += 5;
    return mana;
}

void Hero::level_up()
{
    int choise{};

    std::cout << "Choose attribute to improve: \n 1.Attack\n 2.Defense\n 3.Health points\n 4.Spell magic(Mana): \n";
    for(size_t choose = 0; choose < 10; choose++)
    {

        std::cin >> choise;

        if( choise > 0 && choise < 10)
        {
            switch(choise)
            {
                case 1:
                {
                    plus_attack();
                    break;
                }
                case 2:
                {
                    plus_defense();
                    break;
                }
                case  3:
                {
                    plus_hp();
                    break;
                }
                case  4:
                {
                    plus_mp();
                    break;
                }
                default:
                {
                    std::cout << "Sorry I cannot find this option\n";
                }
            }
        }
        else
        {
            choose --;
        }
        get_stats();

        experience = 0;
        needed_exp *= 2;
    }


}