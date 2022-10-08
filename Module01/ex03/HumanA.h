#ifndef HUMANAA_H
#define HUMANAA_H

#include "HumanB.h"
#include "Weapon.h"
class HumanA
{
    private:
        Weapon *w;
        std::string name;
    public:
        HumanA();
        HumanA(std::string name, Weapon & w);

        void attack();
        
};












#endif