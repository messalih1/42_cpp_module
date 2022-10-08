#include "WrongAnimal.h"
#include "WrongCat.h"





WrongAnimal::WrongAnimal()
{
    cout << "from WrongAnimal default constructor" << endl;
    type = "WrongAnimal";
}

WrongAnimal::~WrongAnimal()
{
}

 



string  WrongAnimal::getType()const
{
    return type;
}


void  WrongAnimal::makeSound()const
{
   cout << "WrongAnimal ooooo" << endl;
}