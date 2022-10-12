#include "Animal.h"
#include "Dog.h"
#include "Cat.h"



int main()
{
   
    const Animal* dog = new Dog();
    


    const Animal* cat = new Cat();       
    
    cat = dog;

    delete dog;
    delete cat;
}