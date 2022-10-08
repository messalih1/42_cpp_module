#include "Zombie.h"


Zombie::Zombie()
{
}


void Zombie::announce( void )
{
    std::cout << name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string n)
{
    name = n;
}


Zombie::~Zombie()
{
    std::cout << "delete .." << std::endl;
}