#include "ClapTrap.h"
#include "FragTrap.h"





FragTrap::FragTrap():ClapTrap()
{
    set__name("FragTrap");
    hit__points(100);
    energy__points(100);
    attack__damage(30);
    cout << "satrt from FragTrap default constructor." << endl;
}


FragTrap::FragTrap(string n):ClapTrap(n)
{ 
    hit__points(100);
    energy__points(100);
    attack__damage(30);
    cout << "satrt from FragTrap params constructor." << endl;
}

FragTrap::~FragTrap()
{
    cout << "end from FragTrap default destructor." << endl;

}



void FragTrap::highFivesGuys()
{
    cout << "a positive high fives request" << endl;
}

void FragTrap::attack(const std::string& target)
{
    if(get_energyPoints() > 0 && get_hitPoints() > 0)
    {
        energy__points(get_hitPoints() - 1);
        cout <<  "ClapTrap " << getName() << " attacks " << target << " , causing "<< get_attackDamage() << " points of damage "<< endl;
    }
}