
#include "Weapon.h"





const string& Weapon::getType()
{
    return type;
}


void Weapon::setType(string t)
{
    type = t;
}

Weapon::Weapon(string init):type(init)
{
}

// Weapon::~Weapon()
// {
// }