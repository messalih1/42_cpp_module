#include "ScavTrap.h"
#include "ClapTrap.h"


ScavTrap::ScavTrap():ClapTrap(),hitPoints(100),energyPoints(50),attackDamage(20)
{
    std::cout << "from derived constructor" << std::endl;
    name = "unknow";
}


ScavTrap::ScavTrap(std::string name):ClapTrap(name),hitPoints(100),energyPoints(50),attackDamage(20)
{
    std::cout << "from derived pramterize constructor" << std::endl;
    this->name = name;
}
                                   
ScavTrap::ScavTrap(const ScavTrap & obj)
{
    std::cout << "from derived copy constructor called" << std::endl;
    name = obj.name;
    hitPoints = obj.hitPoints;
    energyPoints = obj.energyPoints;
    attackDamage = obj.attackDamage;
}

ScavTrap & ScavTrap::operator=(const ScavTrap & obj)
{
    std::cout << "from derived Copy assignment operator constructor called" << std::endl;
    if(this != &obj)
    {
        name = obj.name;
        hitPoints = obj.hitPoints;
        energyPoints = obj.energyPoints;
        attackDamage = obj.attackDamage;
    }
    return *this;
}
 

void ScavTrap::attack(const std::string& target)
{
    if(energyPoints > 0 && hitPoints > 0)
    {
        energyPoints--;
        std::cout << "ScavTrap "  <<  name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
        std::cout << "ScavTrap : energy points : " << energyPoints << std::endl;
		std::cout << "ScavTrap : hit points : " << hitPoints << std::endl;
		std::cout << "ScavTrap : attackDamage points = " << attackDamage << std::endl;
    }
    else
        std::cout << "can't do anything." << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}

ScavTrap::~ScavTrap() 
{
    std::cout << "from derived destructor" << std::endl;
}