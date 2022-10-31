#include "Animal.h"




Animal::Animal()
{
    type = "Animal";
    std::cout << "base class: Default constructor called." << std::endl;
}

Animal::Animal(const Animal & obj)
{
    type = obj.type;
    std::cout << "base class: copy constructor called." << std::endl;
}

Animal & Animal::operator=(const Animal & obj)
{
    std::cout << "base class: Copy assignment operator called." << std::endl;
    if(this != &obj)
        type = obj.type;
    return *this;
}


std::string Animal::getType()const
{
    return type;
} 


void Animal::makeSound()const
{
    std::cout << "ahoo.." << std::endl;
} 

Animal::~Animal()
{
    std::cout << "base class: Destructor." << std::endl;
}