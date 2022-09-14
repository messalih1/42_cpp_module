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
        void set__name(string name);
        void hit__points(int hit_points);
        void energy__points(int energy_points);
        void attack__damage(int attack_damage);
        string getName();
        int get_hitPoints();
        int get_energyPoints();
        int get_attackDamage();
        ClapTrap();
        ClapTrap(const ClapTrap &obj);
        ClapTrap(string name);
        ~ClapTrap();
};













#endif