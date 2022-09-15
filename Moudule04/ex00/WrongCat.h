#ifndef WRONGCAT_H
#define WRONGCAT_H

#include "WrongAnimal.h"

class WrongCat: public WrongAnimal
{
	public:
		WrongCat();
		~WrongCat();
		void	makeSound()const;
        string getType()const;
};

#endif