#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>

#include <cstring>

using std::cout;
using std::endl;
using std::string;

class ClapTrap
{
    private:
        string name;
        int hit_points;
        int energy_points;
        int attack_damage;
    
    public:

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        ClapTrap();
        ClapTrap(const ClapTrap &obj);
        ClapTrap(string name);
        ~ClapTrap();
};













#endif