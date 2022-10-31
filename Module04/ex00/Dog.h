#ifndef DOG_H
#define DOG_H

#include "Animal.h"
 

class Dog: public Animal
{
    public:
        Dog();
        Dog(const Dog & obj);
        Dog & operator = (const Dog & obj);
        void makeSound()const;
        ~Dog();
};




#endif