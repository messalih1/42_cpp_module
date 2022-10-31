#ifndef WRONGANIMAL_H
#define WRONGANIMAL_H

#include "Animal.h"

class WrongAnimal
{
    private:
        std::string type;
    public:
        WrongAnimal();
        WrongAnimal(const WrongAnimal & obj);
        WrongAnimal & operator = (const WrongAnimal & obj);
        void makeSound()const;
        virtual ~WrongAnimal();
};






#endif