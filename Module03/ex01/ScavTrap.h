#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.h"

class ScavTrap : public ClapTrap
{
    
    public:
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap & obj);
        ScavTrap & operator = (const ScavTrap &obj);
        void guardGate();
        void attack(const std::string& target);// you must redifne the func to reimplement in derived 
        ~ScavTrap();
};












#endif