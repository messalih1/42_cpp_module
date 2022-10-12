#include "WrongAnimal.h"
#include "WrongCat.h"
 



WrongCat::WrongCat()
{
    type = "WrongCat";
    std::cout << "base class(WrongCat): Default constructor called." << std::endl;
}

WrongCat::WrongCat(const WrongCat & obj)
{
    type = obj.type;
    std::cout << "base class(WrongCat): copy constructor called." << std::endl;
}

WrongCat & WrongCat::operator=(const WrongCat & obj)
{
    if(this != &obj)
        type = obj.type;
    return *this;
}


void WrongCat::makeSound()const
{
    std::cout << "miew miew............." << std::endl;
} 

WrongCat::~WrongCat()
{
    std::cout << "class(WrongCat): Destructor." << std::endl;
}