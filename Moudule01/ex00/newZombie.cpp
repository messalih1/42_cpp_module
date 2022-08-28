#include "Zombie.h"


Zombie*  newZombie( std::string name )
{
    Zombie *z = new Zombie();// instance

    z->init_values(name);
    return z;
}