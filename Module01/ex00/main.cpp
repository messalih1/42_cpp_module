#include "Zombie.h"



int main()
{
    Zombie * heap;

    heap = newZombie("from heap");

    heap->announce();

    randomChump("from stack");

    delete heap;
}