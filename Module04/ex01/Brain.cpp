#include "Brain.h"




Brain::Brain() 
{
    ideas = new std::string[100];   
    
    for (size_t i = 0; i < 100; i++)
        ideas[i] = "test ";
       
    std::cout << "Default constructor called of class Brain." << std::endl;
}
 
Brain::Brain(const Brain & obj)
{
    std::cout << "copy constructor called of class Brain." << std::endl;
    ideas = new std::string[100];   
    
    for (size_t i = 0; i < 100; i++)
        this->ideas[i] = obj.ideas[i];// ideas is pointor
}

Brain & Brain::operator=(const Brain & obj)
{
    std::cout << "Copy assignment operator called of class Brain." << std::endl;
    
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
    std::cout << "Destructor of class Brain." << std::endl;
    
    delete[] ideas;
}