
#include "Weapon.h"
#include "HumanA.h"
#include "HumanB.h"




void HumanA::attack()
{ 
    
    cout << name << " attacks with their " << wA.getType() << endl;
}

 
HumanA::HumanA(string n,Weapon &obj):name(n),wA(obj)
{
}