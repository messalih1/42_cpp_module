#ifndef BRAIN_H
#define BRAIN_H

#include "Animal.h"


class Brain
{
    private:
        std::string  *ideas;
    public:
        Brain();
        Brain(const Brain & obj);
        Brain & operator = (const Brain & obj);
        void getValues();
        ~Brain();
};







#endif