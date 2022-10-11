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
    std::cout << "base class(Dog): Destructor." << std::endl;
}