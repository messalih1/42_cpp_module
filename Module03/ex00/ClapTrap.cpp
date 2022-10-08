#include "ClapTrap.h"
#include "ScavTrap.h"

ClapTrap::ClapTrap(std::string n):name(n),hit_points(10),energy_points(10),attack_damage(0)
{
    std::cout << "start ..." << std::endl;
}



// ClapTrap::ClapTrap(string name)
// {
//     std::cout << "start from base class params ..." << std::endl;

// }

ClapTrap::~ClapTrap()
{
    std::cout << "end ..." << std::endl;

}

void ClapTrap::attack(const std::string& target)
{
    hit_points -= attack_damage;

    energy_points--;
    if(energy_points > 0 && hit_points > 0)
    {
        energy_points--;
        std::cout <<  "ClapTrap " << name << " attacks " << target << " , causing "<< attack_damage << " points of damage "<< std::endl;
    }
    
}


void ClapTrap::beRepaired(unsigned int amount)
{
    hit_points += amount;
    
    if(energy_points > 0 && hit_points > 0)
        energy_points--;
    std::cout <<  "ClapTrap be Repaired " << hit_points << std::endl;
        
}

void ClapTrap::takeDamage(unsigned int amount)
{
    attack_damage += amount;
    std::cout << "attack damage increment.." << std::endl;
}
 