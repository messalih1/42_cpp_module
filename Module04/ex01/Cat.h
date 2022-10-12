#ifndef CAT_H
#define CAT_H

#include "Animal.h"
#include "Brain.h"
 
class Cat : public Animal
{
    private:
        Brain *brain;
    public:
        Cat();
        Cat(const Cat & obj);
        Cat & operator = (const Cat & obj);
        void makeSound()const;
        ~Cat();
};



#endif