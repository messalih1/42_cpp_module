#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>
#include <cstring>


class Zombie
{
    private:
        std::string name;

    public:
        Zombie();
        
        void announce( void );
        void setName(std::string name);
        
        ~Zombie();
};

Zombie* zombieHorde( int N, std::string name );


#endif