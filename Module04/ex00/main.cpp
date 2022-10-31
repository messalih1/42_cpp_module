#include "Animal.h"
#include "Dog.h"
#include "Cat.h"
#include "WrongAnimal.h"
#include "WrongCat.h"



int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    j->makeSound();
    i->makeSound(); //will output the cat sound!
    meta->makeSound();

    delete i;
    delete j;
    delete meta;

    std::cout << "============================" << std::endl;
    
    const WrongAnimal* wrong = new WrongCat();

    wrong->makeSound();
    
    delete wrong;    
}