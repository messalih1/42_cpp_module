#include "Brain.h"




Brain::Brain()
{
    std::cout << "class(Brain): Default constructor called." << std::endl;
}

Brain::Brain(const Brain & obj)
{
     
    std::cout << "class(Brain): copy constructor called." << std::endl;
}

Brain & Brain::operator=(const Brain & obj)
{
    return *this;
}

void Brain::settter(std::string ideas[],int size)
{
	for(int i = 0; i < size ; i++)
		this->ideas[i] = ideas[i];
	for(int i = 0; i < size ; i++)
		std::cout << this->ideas[i] << std::endl;
}
 

Brain::~Brain()
{
    std::cout << "class(Brain): Destructor." << std::endl;
}