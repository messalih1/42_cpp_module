#include "Zombie.h"


void Zombie::init_values( std::string n )
{
    name = n;
}

void Zombie::announce( void )
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}



Zombie::Zombie(/* args */)
{
}

Zombie::~Zombie()
{ 
    std::cout << name << " did" << std::endl;
}