#ifndef BRAIN_H
#define BRAIN_H

#include "Animal.h"


class Brain
{
    private:
        std::string  ideas[100];
    public:
        Brain();
        Brain(const Brain & obj);
        Brain & operator = (const Brain & obj);
		void settter(std::string ideas[], int size);
        ~Brain();
};







#endif