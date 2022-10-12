#ifndef DOG_H
#define DOG_H

#include "Animal.h"
#include "Brain.h"

class Dog: public Animal
{
    private:
        Brain *brain;
    public:
        Dog();
        Dog(const Dog & obj);
        Dog & operator = (const Dog & obj);
        void makeSound()const;
        ~Dog();
};




#endif