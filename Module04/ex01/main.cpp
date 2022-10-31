#include "Animal.h" 
#include "Dog.h"
#include "Cat.h"
#include "Brain.h"

 

int main()
{ 
	Brain brain;

 	Brain b(brain);
	
    b.getValues(); 
    
    Brain brain1;
	
    Brain brain2;

    brain1 = brain2;
  
    brain1.getValues();
	 
    std::cout << "====================================" << std::endl;
    

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
    // Dog d; //if remove * will be shellow copy and free not allocated
    // Dog a(d);
}