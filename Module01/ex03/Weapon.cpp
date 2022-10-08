#include "HumanA.h"
#include "HumanB.h"
#include "Weapon.h"



Weapon::Weapon()
{
}

Weapon::Weapon(std::string str)
{
    type = str;
}


void Weapon::setType(std::string t)
{
    type = t;
}

const  std::string & Weapon::getType()
{
    return type;// return the actual variable type, not need to create another one
}






Weapon::~Weapon()
{
}