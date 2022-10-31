#include "Brain.h"




Brain::Brain() 
{
    ideas = new std::string[100];   
    
    for (size_t i = 0; i < 100; i++)
        ideas[i] = "test ";
       
    std::cout << "class(Brain): Default constructor called." << std::endl;
}
 
Brain::Brain(const Brain & obj)
{
    std::cout << "class(Brain): copy constructor called." << std::endl;
    ideas = new std::string[100];   
    
    for (size_t i = 0; i < 100; i++)
        this->ideas[i] = obj.ideas[i];// assign value o pointed variable deep copy
}

Brain & Brain::operator=(const Brain & obj)
{
    std::cout << "class(Brain): Copy assignment operator called." << std::endl;
    
    if(this != &obj)
    {
        for (size_t i = 0; i < 100; i++)
            this->ideas[i] = obj.ideas[i];
    }
    return *this;
}
 
void Brain::getValues()
{
    for (size_t i = 0; i < 100; i++)
        std::cout << this->ideas[i] << std::endl;
}

Brain::~Brain()
{
    std::cout << "class(Brain): Destructor." << std::endl;
    delete[] ideas;
}