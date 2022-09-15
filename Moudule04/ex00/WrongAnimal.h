#ifndef WRONGANIMAL_H
#define WRONGANIMAL_H

#include <iostream>

#include <cstring>

using std::cout;
using std::endl;
using std::string;

#include "WrongAnimal.h"

class WrongAnimal 
{
    protected:
        string type;
    public:
        virtual  string  getType()const;
        virtual void makeSound()const;
        WrongAnimal(/* args */);
        ~WrongAnimal();
};









#endif