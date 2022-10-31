#include "Animal.h"
#include "Dog.h"


Dog::Dog()
{
    type = "Dog";
    brain = new Brain();// will call default constructor
    std::cout << "Default constructor called of class Dog." << std::endl;
}

Dog::Dog(const Dog & obj)
{
    type = obj.type;
    brain = new Brain();
	*brain = *obj.brain;
    std::cout << "copy constructor called of class Dog." << std::endl;
}

Dog & Dog::operator=(const Dog & obj)
{
    std::cout << "copy assignement constructor called of class Dog." << std::endl;

    if(this != &obj)
	{
    	brain = new Brain();
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
	delete brain;
    std::cout << "Destructor of class Dog." << std::endl;
}