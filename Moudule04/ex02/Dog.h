#ifndef DOG_H
#define DOG_H

#include "Brain.h"

class Dog : public Animal
{
    private:
        Brain *b_dog;
        
    public:
        string getType()const;
        void makeSound() const;
        Dog();
        ~Dog();
};










#endif