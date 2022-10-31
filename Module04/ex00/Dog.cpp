#include "Animal.h"
#include "Dog.h"


Dog::Dog()
{
    type = "Dog";
    std::cout << "base class(Dog): Default constructor called." << std::endl;
}

Dog::Dog(const Dog & obj)
{
    type = obj.type;
    std::cout << "base class(Dog): copy constructor called." << std::endl;
}

Dog & Dog::operator=(const Dog & obj)
{
    std::cout << "base class(Dog): Copy assignment operator called.." << std::endl;
    if(this != &obj)
        type = obj.type;
    return *this;
}


void Dog::makeSound()const
{
    std::cout << "how how .." << std::endl;
} 


Dog::~Dog()
{
    std::cout << "class(Dog): Destructor." << std::endl;
}