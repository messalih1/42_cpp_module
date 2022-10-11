#include "Animal.h"
#include "Dog.h"
#include "Cat.h"




Cat::Cat()
{
    type = "Cat";
    std::cout << "base class(Cat): Default constructor called." << std::endl;
}

Cat::Cat(const Cat & obj)
{
    type = obj.type;
    std::cout << "base class(Cat): copy constructor called." << std::endl;
}

Cat & Cat::operator=(const Cat & obj)
{
    if(this != &obj)
        type = obj.type;
    return *this;
}


void Cat::makeSound()const
{
    std::cout << "miew miew .." << std::endl;
} 


Cat::~Cat()
{
    std::cout << "base class(Cat): Destructor." << std::endl;
}