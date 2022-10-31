#include "Zombie.h"



Zombie* zombieHorde( int N, std::string name )
{
    int i;

    Zombie *zombie_horde  = new Zombie[N];

    i = 0;
    while (i < N)
    {
        zombie_horde[i].setName(name);
        i++;
    }
    return zombie_horde;
}