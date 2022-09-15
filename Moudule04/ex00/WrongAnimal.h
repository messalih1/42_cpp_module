#ifndef WRONGANIMAL_H
#define WRONGANIMAL_H

#include <iostream>

using std::cout;
using std::endl;
using std::string;

class WrongAnimal
{
	protected:
		string	type;
	public:
		WrongAnimal();
		~WrongAnimal();
		string	getType()const;
		void	makeSound()const;
};

#endif