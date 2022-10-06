#include "Weapon.h"
#include "HumanA.h"
#include "HumanB.h"



HumanA::HumanA(std::string n,Weapon &obj):name(n),wA(obj)
{
}

void HumanA::attack()
{ 
    std::cout << name << " attacks with their " << wA.getType() << std::endl;
}

 