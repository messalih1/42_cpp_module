
#include "Weapon.h"


 

Weapon::Weapon(std::string *init) 
{
    if(init)
        type = *init;
    else
        type = "";

}

Weapon::Weapon(std::string init) 
{
    type = init;
}

const std::string& Weapon::getType()
{
    return type;
}

void Weapon::setType(std::string t)
{
    type = t;
}
