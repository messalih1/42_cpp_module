#include "Zombie.h"
 
int main()
{
    Zombie *heap = new Zombie(); 
  
    heap = newZombie("from heap");
    
    heap->announce();

    randomChump("from stack");
    
    delete heap;
}