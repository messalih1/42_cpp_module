#include "Animal.h"
#include "Dog.h"


Dog::Dog()
{
    type = "Dog";
    brain = new Brain();
    std::cout << "class(Dog): Default constructor called." << std::endl;
}

Dog::Dog(const Dog & obj)
{
    type = obj.type;
    brain = new Brain();
	*brain = *obj.brain;
    std::cout << "class(Dog): copy constructor called." << std::endl;
}

Dog & Dog::operator=(const Dog & obj)
{
    std::cout << "class(Dog): copy assignement constructor called." << std::endl;

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
    std::cout << "class(Dog): Destructor." << std::endl;
}