#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>
#include <string>
#include <cstring>
#include <cctype>

using std::string;



class Zombie
{
    string name;

    public:
        void announce( void );
        void init_values(std::string name);
        Zombie(/* args */);
        ~Zombie();
};



Zombie*  newZombie( std::string name );
void  randomChump( std::string name );










#endif