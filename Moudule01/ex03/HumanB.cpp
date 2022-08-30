
#include "Weapon.h"
// #include "HumanA.h"
#include "HumanB.h"


HumanB::HumanB(string n):name(n)
{
}

void HumanB::setWeapon(Weapon &obj) // here referance like we use pointer
{
    wB = &obj;// we assign address of alias of obj
}
 
void HumanB::attack()
{ 
    cout << name << " attacks with their " << wB->getType() << endl;
}



