#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.h"

class ScavTrap : public ClapTrap
{
    private:
         
    public:
        void attack(const std::string& target);
        ScavTrap();
        ScavTrap(const ScavTrap &obj);
        void guardGate();
        ScavTrap(string start);
        ~ScavTrap();
};
 







#endif