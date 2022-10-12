#ifndef WRONGCAT_H
#define WRONGCAT_H

#include "Animal.h"
#include "WrongAnimal.h"

class WrongCat : public WrongAnimal
{
    private:
        std::string type;
    public:
        WrongCat();
        WrongCat(const WrongCat & obj);
        WrongCat & operator = (const WrongCat & obj);
        void makeSound()const;
        ~WrongCat();
};






#endif