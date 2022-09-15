#ifndef WRONGCAT_H
#define WRONGCAT_H

#include "WrongAnimal.h"
// #include "WrongCat.h"


class WrongCat: public WrongAnimal
{
    private:
        /* data */
    public:
        string  getType()const;
        void makeSound()const;
        WrongCat();
        ~WrongCat();
};








#endif