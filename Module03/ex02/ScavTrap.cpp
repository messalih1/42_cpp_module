#include "ClapTrap.h"
#include "ScavTrap.h"

ScavTrap::ScavTrap():ClapTrap()
{
    set__name("name");
    hit__points(100);
    energy__points(50);
    attack__damage(20);
    cout << "start from drived class , default constructor..." << endl;
    
}
ScavTrap::ScavTrap(string n):ClapTrap(n)
{
    hit__points(100);
    energy__points(50);
    attack__damage(20);
    cout << "start from drived class , second  constructor..." << endl;
    
}


ScavTrap::ScavTrap(const ScavTrap &ob) 
{
    cout << "ScavTrap Destructor" << endl;
}

void ScavTrap::guardGate()
{
    cout << "Gate keeper mode." << endl;
}

ScavTrap::~ScavTrap()
{
    cout << "end from drived class..." << endl;
}

void ScavTrap::attack(const std::string& target)
{
    if(get_energyPoints() > 0 && get_hitPoints() > 0)
    {
        energy__points(get_hitPoints() - 1);
        cout <<  "ClapTrap " << getName() << " attacks " << target << " , causing "<< get_attackDamage() << " points of damage "<< endl;
    }
}