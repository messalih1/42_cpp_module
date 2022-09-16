#ifndef ANIMAL_H
#define ANIMAL_H



#include <iostream>

#include <cstring>

using std::cout;
using std::endl;
using std::string;



class Animal
{
    protected:
        string type;

    public:
        virtual  string  getType()const = 0;
        virtual void makeSound()const = 0;
        Animal();
        ~Animal();
};







#endif