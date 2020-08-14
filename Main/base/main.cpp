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
    Hero* pioter = new Hero;
    Map* mak = new Map;
    Archer_enemy* windu = new Archer_enemy;
    Warior_enemy* cody = new Warior_enemy;
    Game plejka(*mak, *pioter);




    mak->move();


    delete pioter;
    delete  mak;
    delete  windu;
    delete cody;

    return 0;
}
