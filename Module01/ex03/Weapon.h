#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>
#include <string>
#include <cstring>
#include <cctype>
#include <iomanip>

 

// #define type string
 

class Weapon
{
    private:
        std::string type;
    
    public:
        const std::string & getType();
        void setType(std::string set);
        Weapon(std::string init);
};



 


















#endif