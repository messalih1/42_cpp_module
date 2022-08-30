#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>
#include <string>
#include <cstring>
#include <cctype>
#include <iomanip>

using  std::cout;
using  std::endl;
using  std::string;

// #define type string
 

class Weapon
{
    private:
        string type;
    
    public:
        const string & getType();
        void setType(string set);
        Weapon(string init);
        // ~Weapon();
        // const type &getType();
      
};



 


















#endif