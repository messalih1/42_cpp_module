#include "Animal.h"
#include "Cat.h"

Cat::Cat()
{
   cout << "from cat default constructor" << endl;

   Brain *b = new Brain();
   
}

Cat::~Cat()
{
}

string  Cat::getType() const
{
   return type;
}

void  Cat::makeSound()const
{
   cout << "miow" << endl;
}