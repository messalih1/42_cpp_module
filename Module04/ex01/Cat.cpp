#include "Animal.h"
#include "Dog.h"
#include "Cat.h"




Cat::Cat()
{
    type = "Cat";
    brain = new Brain();// will call default constructor
    std::cout << "Default constructor called of class Cat." << std::endl;
}

Cat::Cat(const Cat & obj)
{
    brain = new Brain();
	*brain = *obj.brain;
    type = obj.type;
    std::cout << "copy constructor called  of class Cat." << std::endl;
}

Cat & Cat::operator=(const Cat & obj)
{
    std::cout << "copy assignement constructor called of class Cat." << std::endl;

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


Cat::~Cat()
{
    std::cout << "Destructor of class Cat." << std::endl;
	delete brain;
}