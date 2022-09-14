#include "ClapTrap.h"
#include "ScavTrap.h"

ClapTrap::ClapTrap()
{
    cout << "start from base class  ..." << endl;
}

ClapTrap::ClapTrap(string n):name(n),hit_points(100),energy_points(50),attack_damage(10) 
{
    cout << "start ..." << endl;
}

ClapTrap::ClapTrap(const ClapTrap &obj)
{    
    hit_points = obj.hit_points;
    energy_points = obj.energy_points;
    attack_damage = obj.attack_damage;
}


ClapTrap::~ClapTrap()
{
    cout << "end ... from base class" << endl;

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
 