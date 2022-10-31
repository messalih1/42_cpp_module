#include "ScavTrap.h"
#include "FragTrap.h"
#include "ClapTrap.h"


FragTrap::FragTrap():ClapTrap() 
{
    std::cout << "from derived FragTrap default constructor" << std::endl;
    name = "unknow";
    hitPoints = 100;
    energyPoints = 100;
    attackDamage = 30;
}


FragTrap::FragTrap(std::string name):ClapTrap(name) 
{
    std::cout << "from derived FragTrap pramterize constructor" << std::endl;
    this->name = name;
    hitPoints = 100;
    energyPoints = 100;
    attackDamage = 30;
}
                                   
FragTrap::FragTrap(const FragTrap & obj)
{
    std::cout << "from derived FragTrap copy constructor called" << std::endl;
    name = obj.name;
    hitPoints = obj.hitPoints;
    energyPoints = obj.energyPoints;
    attackDamage = obj.attackDamage;
}

FragTrap & FragTrap::operator=(const FragTrap & obj)
{
    std::cout << "from derived FragTrap Copy assignment operator constructor called" << std::endl;
    if(this != &obj)
    {
        name = obj.name;
        hitPoints = obj.hitPoints;
        energyPoints = obj.energyPoints;
        attackDamage = obj.attackDamage;
    }
    return *this;
}
 

void FragTrap::attack(const std::string& target)
{
    if(energyPoints > 0 && hitPoints > 0)
    {
        energyPoints--;
        std::cout << "FragTrap "  <<  name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
        std::cout << "FragTrap : energy points : " << energyPoints << std::endl;
		std::cout << "FragTrap : hit points : " << hitPoints << std::endl;
		std::cout << "FragTrap : attackDamage points = " << attackDamage << std::endl;
    }
}


void FragTrap::highFivesGuys()
{
    std::cout << "positive high fives request" << std::endl;
}

FragTrap::~FragTrap() 
{
    std::cout << "from FragTrap derived destructor" << std::endl;
}

