#ifndef HUMANB_H
#define HUMANB_H


#include "Weapon.h"
#include "HumanA.h"
#include "HumanB.h"
#include <iostream>
#include <string>
#include <cstring>
#include <cctype>
#include <iomanip>
 
class HumanB
{
    std::string name;
    Weapon *wB;
    
    public:
        void attack();
        void setWeapon(Weapon &obj);
        HumanB(std::string n);
 };


 
 














#endif