#include "Animal.h"




Animal::Animal()
{
    type = "Animal";
    std::cout << "base class: Default constructor implemented." << std::endl;
}

Animal::Animal(const Animal & obj)
{ 
    type = obj.type;
    std::cout << "base class: copy constructor implemented." << std::endl;
}

Animal & Animal::operator=(const Animal & obj)
{
    std::cout << "base class: Copy assignment operator implemented." << std::endl;

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
    std::cout << "base class: Destructor implemented." << std::endl;
}
 
