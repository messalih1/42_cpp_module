#include "Animal.h"
#include "Dog.h"




Dog::Dog()
{
    cout << "from dog default constructor" << endl;

    Brain *b = new Brain();
    type = "dog";
}

Dog::~Dog()
{
}

string  Dog::getType() const
{
   return type;
}



void  Dog::makeSound()const
{
   cout << "howhow" << endl;
}