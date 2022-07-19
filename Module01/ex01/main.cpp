#include <iostream>
#include <string>
#include <cstring>

#include "Zombie.h"



int main()
{ 
    Zombie *zombies;
   
    zombies = zombieHorde( 2 , "name ");

    int i = 0;
    while(i < 2)
    {
        zombies[i].announce();
        i++;
    }
    delete[] zombies;

    return 0;
}