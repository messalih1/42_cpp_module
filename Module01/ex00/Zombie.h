#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>
#include <string>
#include <cstring>
#include <cctype>

 


class Zombie
{
    std::string name;

    public:
        void announce( void );
        void setName(std::string name);
        Zombie();
        ~Zombie();
};


Zombie*  newZombie( std::string name );
void  randomChump( std::string name );

#endif