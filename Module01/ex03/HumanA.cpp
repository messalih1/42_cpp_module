#include "HumanA.h"
#include "HumanB.h"
#include "Weapon.h"



HumanA::HumanA()
{
    
}


HumanA::HumanA(std::string n, Weapon  & weapan)
{
    name = n;
    w = &weapan;// assign  object weapon  of Weapan to w of HumanA
}


void HumanA::attack()
{                                                           
    std::cout << name << " attacks with their " << w->getType() << std::endl; 
}

 