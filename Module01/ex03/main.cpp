
#include "Weapon.h"
#include "HumanA.h"
#include "HumanB.h"

 
int main()
{
    {
        Weapon club = Weapon("crude spiked club");
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
    }
                         
   {
        Weapon club = Weapon("crude spiked club");
        HumanB jim("Jim");
        jim.setWeapon(club);// we define reference becuase in the exircise forbdin use pointer in this case
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
   }
}