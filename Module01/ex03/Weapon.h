#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>
#include <cstring>

class Weapon
{
    private:
        std::string type;
    public:

        Weapon();
        Weapon(std::string str);
        const  std::string & getType();
        void setType(std::string type);
    
    
        ~Weapon();
};








#endif