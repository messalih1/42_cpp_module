#ifndef HUMANA_H
#define HUMANA_H


#include "Weapon.h"

/*

Now, create two classes: HumanA and HumanB. They both have a Weapon and a
name. They also have a member function attack() that displays (of course, without the
angle brackets):

*/

class HumanA
{
    
    string name;
    Weapon &wA;

    public:
        void attack();
        HumanA(string n,Weapon &obj);

        // ~HumanA();
};















#endif