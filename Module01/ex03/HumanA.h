#ifndef HUMANA_H
#define HUMANA_H


#include "Weapon.h"



class HumanA
{
    
    std::string name;
    Weapon &wA;

    public:
        void attack();
        HumanA(std::string n,Weapon &obj);

        // ~HumanA();
};















#endif