#include "ClapTrap.h"
#include "ScavTrap.h"

ClapTrap::ClapTrap(string n):name(n),hit_points(10),energy_points(10),attack_damage(0)
{
    cout << "start ..." << endl;
}

{
    cout << "start ..." << endl;
}

// ClapTrap::ClapTrap(string name)
// {
//     cout << "start from base class params ..." << endl;

// }

ClapTrap::~ClapTrap()
{
    cout << "end ..." << endl;

}

void ClapTrap::attack(const std::string& target)
{
    hit_points -= attack_damage;

    energy_points--;
    if(energy_points > 0 && hit_points > 0)
    {
        energy_points--;
        cout <<  "ClapTrap " << name << " attacks " << target << " , causing "<< attack_damage << " points of damage "<< endl;
    }
    
}


void ClapTrap::beRepaired(unsigned int amount)
{
    hit_points += amount;
    
    if(energy_points > 0 && hit_points > 0)
        energy_points--;
    cout <<  "ClapTrap be Repaired " << hit_points << endl;
        
}

void ClapTrap::takeDamage(unsigned int amount)
{
    attack_damage += amount;
    cout << "attack damage increment.." << endl;
}
 