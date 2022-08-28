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


Zombie* zombieHorde( int N, std::string name );











#endif