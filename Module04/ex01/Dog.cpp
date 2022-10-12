#include "Animal.h"
#include "Dog.h"


Dog::Dog()
{
    type = "Dog";
    
    std::cout << "class(Dog): Default constructor called." << std::endl;

    brain = new  Brain();
    
}

Dog::Dog(const Dog & obj)
{
    type = obj.type;
    brain = new  Brain();

    *brain = *obj.brain;

    std::cout << "class(Dog): copy constructor called." << std::endl;
}

Dog & Dog::operator=(const Dog & obj)
{
    // brain = new  Brain();
    std::cout << "class(Dog): copy assignment constructor called." << std::endl;

    if(this != &obj)
    {
        *brain = *obj.brain;

        type = obj.type;
    }
    return *this;
}


void Dog::makeSound()const
{
    std::cout << "how how .." << std::endl;
} 


Dog::~Dog()
{
    std::cout << "class(Dog): Destructor." << std::endl;
    // delete brain;
}