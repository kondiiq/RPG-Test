#include <iostream>
#include "Hero.h"
#include "Map.h"
#include <ctime>
#include <string>
#include "Archer_enemy.h"
#include "Warior_enemy.h"
#include "Game.h"

using namespace std;


int main()
{

    cout << "Start\n";
    srand(time(nullptr));

    Hero *pioter = new Hero;
//    Map *mak = new Map;

//    auto * windu = new Archer_enemy;
//    auto * cody = new Warior_enemy;
//    Game game(Map &mak, Hero &pioter);

    delete pioter;
//    delete  windu;
//    delete cody;
//    delete mak;


    return 0;
}
