#include "ClapTrap.h"
#include "ScavTrap.h"

ScavTrap::ScavTrap():ClapTrap()
{
    cout << "start from drived class , default constructor..." << endl;
}

 

ScavTrap::ScavTrap(string n):ClapTrap(n)   
{

}

ScavTrap::ScavTrap(const ClapTrap &ob) 
{
    ob.hit_points = 10;
}

ScavTrap::~ScavTrap()
{
    cout << "end from drived class..." << endl;
}