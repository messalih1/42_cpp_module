#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include "ClapTrap.h"


class FragTrap : public ClapTrap
{
    public:
        FragTrap();
        FragTrap(std::string name);
        FragTrap(const FragTrap & obj);
        FragTrap & operator = (const FragTrap &obj);
        void attack(const std::string& target);// you must redifne the func to reimplement in derived 
        void highFivesGuys(void);
        ~FragTrap();
};












#endif