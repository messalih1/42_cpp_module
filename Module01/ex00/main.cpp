#include "Zombie.h"
 
// include header.h in makefile

int main()
{

    Zombie *heap = new Zombie(); 
  
    heap = newZombie("from heap");
    
    heap->announce();

    randomChump("from stack");
    
    delete heap;

}