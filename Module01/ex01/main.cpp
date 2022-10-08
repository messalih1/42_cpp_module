#include "Zombie.h"


int main()
{
    Zombie *hordeOfZombies;

    hordeOfZombies = zombieHorde(5,"zombie");

    for(int i =0;i < 5; i++)
        hordeOfZombies[i].announce();

    delete[] hordeOfZombies;
}