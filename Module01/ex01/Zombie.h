#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>
#include <string>
#include <cstring>
#include <cctype>
#include <iomanip>



class Zombie
{
    std::string name;

    public:
        void announce( void );
        void setName(std::string name);
        Zombie();
        ~Zombie();
};


Zombie* zombieHorde( int N, std::string name );











#endif