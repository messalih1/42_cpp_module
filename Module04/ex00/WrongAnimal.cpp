#include "WrongAnimal.h"




WrongAnimal::WrongAnimal()
{
    type = "WrongAnimal";
    std::cout << "base class(WrongAnimal): Default constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal & obj)
{
    type = obj.type;
    std::cout << "base class(WrongAnimal): copy constructor called." << std::endl;
}

WrongAnimal & WrongAnimal::operator=(const WrongAnimal & obj)
{
    std::cout << "base class(WrongAnimal): Copy assignment operator called." << std::endl;
    if(this != &obj)
        type = obj.type;
    return *this;
}


void WrongAnimal::makeSound()const
{
    std::cout << "............." << std::endl;
} 

WrongAnimal::~WrongAnimal()
{
    std::cout << "class(WrongAnimal): Destructor." << std::endl;
}