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


string  WrongCat::getType()const
{
    return type;
}


void  WrongCat::makeSound()const
{
   cout << "WrongCat ooooo" << endl;
}