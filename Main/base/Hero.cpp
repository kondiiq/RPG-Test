//
// Created by kondiiq on 20.07.2020.
//
#include "Hero.h"

Hero::Hero()
{
    //Declaring extra variable

    std::string first_name, val_sex;
    unsigned int val_att, val_def, val_mana, val_hp;

    //Values to extra my variables

    val_att = {5};
    val_def = {5};
    val_hp = {20};
    val_mana = {20};
    val_sex = {'M'};

    //Start constructor

    std::cout << "Construct Your Protagonist " << std::endl;
    std::cout << "Hello \n Write name of your character :) " << std::endl;
    std::getline(std::cin,first_name);

    //Allocating variables from Header

    name = new std::string;
    sex = new std::string ;
    attack = new unsigned int;
    defense = new unsigned int;
    mana = new unsigned int;
    health_point = new unsigned int;

    //Ptr values is 0

    name = nullptr;
    attack = nullptr;
    defense = nullptr;
    mana = nullptr;
    health_point = nullptr;
    sex = nullptr;

    //Ptr values of extra variables

    name = &first_name;
    attack = &val_att;
    defense = &val_def;
    mana = &val_mana;
    health_point = &val_hp;
    sex = &val_sex;

    //Print statistic of character

    std::cout << "Statistics:\n";
    std::cout << "Name: " << first_name << std::endl;
    std::cout << "Sex: " << val_sex << std::endl;
    std::cout << "Attack : " << val_att << std::endl;
    std::cout << "Defense : " << val_def << std::endl;
    std::cout << "HP : " << val_hp << std::endl;
    std::cout << "MP :" << val_mana << std::endl;
};

Hero::~Hero()
{
    //Deallocating memory

    std::cout << "Destroying the object!" << std::endl;
    delete attack;
    delete defense;
    delete health_point;
    delete mana;
    delete sex;
    delete name;
};