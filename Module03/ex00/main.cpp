#include "ClapTrap.h"



int main()
{
    ClapTrap clap;
    clap.attack("abduh");
    clap.attack("abduh");
    clap.attack("abduh");
    clap.attack("abduh");
    clap.attack("abduh");
    clap.attack("abduh");
    clap.attack("abduh");
    clap.attack("abduh");
    clap.attack("abduh");
    clap.attack("abduh");
 
    clap.beRepaired(50);


    ClapTrap c("test");
    c.attack("target");
    c.attack("target");
    c.attack("target");
    c.beRepaired(50);


}