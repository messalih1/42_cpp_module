#include "Animal.h"
#include "Dog.h"
#include "Cat.h"




Cat::Cat()
{
    type = "Cat";
    brain = new Brain();
    std::cout << "class(Cat): Default constructor called." << std::endl;
}

Cat::Cat(const Cat & obj)
{
    brain = new Brain();
	*brain = *obj.brain;
    type = obj.type;
    std::cout << "class(Cat): copy constructor called." << std::endl;
}

Cat & Cat::operator=(const Cat & obj)
{
    std::cout << "class(Cat): copy assignement constructor called." << std::endl;

    if(this != &obj)
	{
    	brain = new Brain();
		*brain = *obj.brain;
        type = obj.type;
	}
    return *this;
}


void Cat::makeSound()const
{
    std::cout << "miew miew .." << std::endl;
} 

std::string Cat::getType()const
{
	std::cout << "SSSSS\n";
	return "SSs";
}

Cat::~Cat()
{
    std::cout << "class(Cat): Destructor." << std::endl;
	delete brain;
}