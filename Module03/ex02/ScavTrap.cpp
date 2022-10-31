#include "ScavTrap.h"
#include "ClapTrap.h"


ScavTrap::ScavTrap():ClapTrap()
{
    std::cout << "from derived ScavTrap constructor" << std::endl;
    name = "unknow";
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
}


ScavTrap::ScavTrap(std::string name):ClapTrap(name) 
{
    std::cout << "from derived pramterize ScavTrap constructor" << std::endl;
    this->name = name;
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
}
                                   
ScavTrap::ScavTrap(const ScavTrap & obj)
{
    std::cout << "from derived ScavTrap copy constructor called" << std::endl;
    name = obj.name;
    hitPoints = obj.hitPoints;
    energyPoints = obj.energyPoints;
    attackDamage = obj.attackDamage;
}

ScavTrap & ScavTrap::operator=(const ScavTrap & obj)
{
    std::cout << "from derived  ScavTrap Copy assignment operator constructor called" << std::endl;
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
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}

ScavTrap::~ScavTrap() 
{
    std::cout << "from ScavTrap derived destructor" << std::endl;
}