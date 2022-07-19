#include <iostream>
#include <string>
#include <cstring>


#include "Zombie.h"

void Zombie::announce()
{
    std::cout << name << ": BraiiiiiiinnnzzzZ...\n" ;
}

void Zombie::setName(std::string n)
{
    name = n;
}

Zombie::Zombie() 
{
    
}

Zombie::~Zombie()
{
    std::cout << name << " is detroyed." << std::endl;
}