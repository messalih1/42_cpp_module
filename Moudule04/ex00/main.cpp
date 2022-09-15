#include "Animal.h"
#include "Cat.h"
#include "Dog.h"
#include "WrongCat.h"
#include "WrongAnimal.h"
int main()
{
    
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    
    cout << j->getType() << " " << endl;
    cout << i->getType() << " " << endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    
    // const WrongAnimal *w = new WrongAnimal();
    return 0;
}