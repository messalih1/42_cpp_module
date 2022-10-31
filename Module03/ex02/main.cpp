#include "ScavTrap.h"
#include "ClapTrap.h"
#include "FragTrap.h"



int main()
{
    ClapTrap clap;
    FragTrap frag;
    ScavTrap scav;

    clap.attack("target 1");
    clap.attack("target 1");
    clap.attack("target 1");
    scav.attack("target 2");
    scav.attack("target 2");
    scav.attack("target 2");
    frag.attack("target 3");
    frag.attack("target 3");
    frag.attack("target 3");
    scav.beRepaired(10);
    frag.highFivesGuys();
     
}