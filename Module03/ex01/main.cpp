#include "ScavTrap.h"
#include "ClapTrap.h"



int main()
{
    ScavTrap scav;
    ClapTrap clap;
    
    scav.attack("target");
    scav.attack("target");
    scav.attack("target");
    scav.attack("target");
    scav.attack("target");
    scav.attack("target");
    scav.attack("target");
    scav.takeDamage(5);
    scav.beRepaired(10);
    scav.guardGate();
}