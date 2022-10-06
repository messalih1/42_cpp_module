#include "Animal.h"
#include "Cat.h"
#include "Dog.h"
#include "Brain.h"

int main()
{
    // it is a pointer type Animal
    // Animal a => not valid because is obj


    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << i->getType() << " " << std::endl;
    std::cout << j->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
 
    return 0;
}


 