#include <iostream>
#include "Hero.h"
#include "Map.h"
#include <ctime>
#include <string>

using namespace std;

int main()
{
    srand(time(nullptr));
    Map mak;
    mak.move();
    mak.display();
    return 0;
}
