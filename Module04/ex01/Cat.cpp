#include "Animal.h"
#include "Dog.h"
#include "Cat.h"




Cat::Cat()
{
    type = "Cat";
    std::cout << "class(Cat): Default constructor called." << std::endl;
    brain = new  Brain();

}

Cat::Cat(const Cat & obj)
{
    type = obj.type;
    brain = new  Brain();
    *brain = *obj.brain;
    std::cout << "class(Cat): copy constructor called." << std::endl;
}

Cat & Cat::operator=(const Cat & obj)
{
    std::cout << "class(Cat): copy assignment constructor called." << std::endl;

    // brain = new  Brain();
    if(this != &obj)
    {
        type = obj.type;
        *brain = *obj.brain;
    }
    return *this;
}


void Cat::makeSound()const
{
    std::cout << "miew miew .." << std::endl;
} 


Cat::~Cat()
{
    std::cout << "class(Cat): Destructor." << std::endl;
    // delete brain;
}