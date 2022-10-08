#ifndef HUMANAB_H
#define HUMANAB_H

#include "Weapon.h"

class HumanB
{
    private:
        Weapon *w;
        std::string name;
    public:
        HumanB();
        HumanB(std::string str);
        void setWeapon(Weapon &weapon);
        void attack();
        
};












#endif