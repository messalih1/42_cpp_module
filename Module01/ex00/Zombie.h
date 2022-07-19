#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>
#include <string>
#include <cstring>
 
#include "Zombie.h"
 



class Zombie
{
    private:
        std::string name;
   

    public:
        void announce( void );
        void setName(std::string name);
        Zombie();
        ~Zombie();
};




#endif