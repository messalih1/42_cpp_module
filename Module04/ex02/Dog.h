#ifndef DOG_H
#define DOG_H

#include "Animal.h"
#include "Brain.h"
 

class Dog: public Animal
{
    private:
        Brain *brain;// will call default constructor
    public:
        Dog();
        Dog(const Dog & obj);
        Dog & operator = (const Dog & obj);
        void makeSound()const;
		std::string getType() const; 
        ~Dog();
};




#endif