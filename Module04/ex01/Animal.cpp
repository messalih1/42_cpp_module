#include "Animal.h"




Animal::Animal()
{
    type = "Animal";
    std::cout << "Default constructor called of base class (Animal)." << std::endl;
}

Animal::Animal(const Animal & obj)
{ 
    type = obj.type;
    std::cout << "copy constructor called of base class (Animal)." << std::endl;
}

Animal & Animal::operator=(const Animal & obj)
{
    std::cout << "Copy assignment operator called of base class (Animal)." << std::endl;

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
    std::cout << "Destructor of base class (Animal)." << std::endl;
}
 
