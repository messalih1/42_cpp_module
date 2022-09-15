#include "Animal.h"


Animal::Animal(/* args */)
{
    cout << "from animal default constructor" << endl;
    type = "animal";
}

Animal::~Animal()
{
}



string  Animal::getType()const
{
    return type;
}


void  Animal::makeSound()const
{
   cout << "ooooo" << endl;
}