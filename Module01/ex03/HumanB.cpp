#include "Weapon.h"
#include "HumanB.h"


HumanB::HumanB(std::string n):name(n)
{
}

void HumanB::setWeapon(Weapon &obj) 
{
    wB = &obj;
}
 
void HumanB::attack()
{ 
    std::cout << name << " attacks with their " << wB->getType() << std::endl;
}
