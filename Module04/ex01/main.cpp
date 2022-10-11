#include "Animal.h"
#include "Cat.h"
#include "Dog.h"
#include "Brain.h"

int main()
{
    // allocate [size] sizee is how many string you want 
    int i;
    int size;

    size = 10;
    i = 0;

    Animal *obj[size];

//    new Dog => obj

    obj[0] = new Dog; 
    obj[1] = new Dog; 
    obj[2] = new Dog; 
    obj[3] = new Dog; 
    obj[4] = new Dog; 
    obj[5] = new Cat; 
    obj[6] = new Cat; 
    obj[7] = new Cat; 
    obj[8] = new Cat; 
    obj[9] = new Cat; 

    while (i < size)
    {
        delete obj[i];
        i++;
    }
    
// deep copy have 2 place in memory
// shallow copy assign one to another to the same place

    Cat *deep = new Cat;// allocate in heep

    Cat copy;// in stack

    copy = *deep; 

    return 0;
}