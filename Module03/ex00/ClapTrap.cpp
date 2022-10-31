#include "ClapTrap.h"


ClapTrap::ClapTrap():hitPoints(10),energyPoints(10),attackDamage(0)
{
    std::cout << "Default constructor called" << std::endl;
    name = "unknow";
}

ClapTrap::ClapTrap(const ClapTrap & obj)
{
    std::cout << "copy constructor called" << std::endl;
    name = obj.name;
    hitPoints = obj.hitPoints;
    energyPoints = obj.energyPoints;
    attackDamage = obj.attackDamage;
}

ClapTrap & ClapTrap::operator=(const ClapTrap & obj)
{
    std::cout << "Copy assignment operator constructor called" << std::endl;
    if(this != &obj)
    {
        name = obj.name;
        hitPoints = obj.hitPoints;
        energyPoints = obj.energyPoints;
        attackDamage = obj.attackDamage;
    }
    return *this;
}

ClapTrap::ClapTrap(std::string name):hitPoints(10),energyPoints(10),attackDamage(0)
{
    std::cout << "constructor with params" << std::endl;
    this->name = name; 
}

void ClapTrap::attack(const std::string& target)
{
    if(energyPoints > 0 && hitPoints > 0)
    {
        energyPoints--;
        std::cout << "ClapTrap "  <<  name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if(hitPoints > 0)
    {
        hitPoints -= amount;
        if(hitPoints < 0)
            hitPoints = 0;
        else
            std::cout << "ClapTrap "  << name << " lost " << amount  << " of points." << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if(energyPoints > 0 && hitPoints > 0)
    {
        hitPoints += amount;
        energyPoints--;
        std::cout << "ClapTrap "  << name << " be Repaired " << amount  << " of points." << std::endl;
    }
}


ClapTrap::~ClapTrap()
{
    std::cout << "destructor called" << std::endl;
}