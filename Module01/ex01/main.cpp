#include "Zombie.h"
 


int main()
{ 
    int i;

    Zombie *zombie_horde;
   
    zombie_horde = zombieHorde(5,"zombies");

    i = 0;
    while (i < 5)
        zombie_horde[i++].announce();

    delete[] zombie_horde; 
}