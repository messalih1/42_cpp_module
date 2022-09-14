#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.h"

class ScavTrap : public ClapTrap
{
    private:
         
    public:
        ScavTrap();
        ScavTrap(const ClapTrap &obj);
        ScavTrap(string start);
        ~ScavTrap();
};
 







#endif