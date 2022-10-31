#include "Zombie.h"

Zombie::Zombie()
{
}

void Zombie::setName( std::string n )
{
    name = n;
}

void Zombie::announce( void )
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{ 
    std::cout << name << " did" << std::endl;
}