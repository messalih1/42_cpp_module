#include "HumanA.h"
#include "HumanB.h"
#include "Weapon.h"







HumanB::HumanB()
{
}

HumanB::HumanB(std::string str)
{
    name = str;
}


void HumanB::setWeapon(Weapon &weapon)
{
    w = &weapon;
}

void HumanB::attack()
{                                                           
    std::cout << name << " attacks with their " << w->getType() << std::endl; 
}

// HumanB::~HumanB()
// {
// }
