#include "Animal.h"
#include "Dog.h"
#include "Cat.h"
#include "Brain.h"


void f(void) {
	system("leaks program");
}
 

int main()
{
	atexit(f);
	Brain brain;

	std::string ideas[100] = 
	{
		"string 1",
		"string 2",
		"string 3",
		"string 4",
		"string 5",
		"string 6"
	};
	brain.settter(ideas,5);

	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;

	std::cout << "====================================" << std::endl;

	

	Animal *animal[10];

	int z = 0;
	while (z < 5)
		animal[z++] = new Dog();
	while (z < 10)
		animal[z++] = new Cat();
	z = 0;
	while (z < 5)
		animal[z++]->makeSound();
	while (z < 10)
		animal[z++]->makeSound();
	z = 0;
	while(z < 10)
		delete animal[z++];
	
}