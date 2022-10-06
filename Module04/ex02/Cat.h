#ifndef CAT_H
#define CAT_H
#include "Brain.h"


class Cat : public Animal
{
    private:
        Brain *b_cat;

    public:
        
        string getType()const;
        void makeSound() const;
        Cat(/* args */);
        ~Cat();
};











#endif