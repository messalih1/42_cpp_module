#include "WrongAnimal.h"
#include "WrongCat.h"





WrongCat::WrongCat()
{
    cout << "from WrongCat default constructor" << endl;
    type = "WrongCat";
}

WrongCat::~WrongCat()
{
}


 
 



string  WrongAnimal::getType()const
{
    return type;
}


void  WrongAnimal::makeSound()const
{
   cout << "WrongCat ooooo" << endl;
}