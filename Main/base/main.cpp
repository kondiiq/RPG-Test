#include <iostream>
#include "Hero.h"
#include "Map.h"
#include <ctime>
#include <string>


using namespace std;

int main()
{
    cout << "Start\n";
    srand(time(nullptr));
    Hero* pioter = new Hero;
    Map* mak = new Map;
    mak->move();
    mak->display();

    delete pioter;
    delete  mak;
    return 0;
}
