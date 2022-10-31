#include "ClapTrap.h"



int main()
{
    ClapTrap clap;
    
    clap.attack("target 1");
    clap.takeDamage(10);
    clap.takeDamage(10);
    clap.beRepaired(20);   
    clap.beRepaired(20);
    clap.attack("target 1");

    std::cout << "==========================================" << std::endl;

    ClapTrap clapp("abduh");
    clapp.attack("enemy");
    clapp.beRepaired(20);   
    clapp.takeDamage(10);
    clapp.attack("enemy");
    clapp.attack("enemy");
    clapp.attack("enemy");
    clapp.attack("enemy");
    clapp.attack("enemy");
    clapp.attack("enemy");
    clapp.attack("enemy");

}