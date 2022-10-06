
#include "Weapon.h"





const std::string& Weapon::getType()
{
    return type;
}


void Weapon::setType(std::string t)
{
    type = t;
}

Weapon::Weapon(std::string init):type(init)
{
}
 