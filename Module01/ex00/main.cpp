#include <iostream>
#include <string>
#include <cstring>

#include "Zombie.h"

using namespace std;

    
void randomChump( std::string name );
Zombie* newZombie( std::string name );


int main()
{ 
    Zombie *heap = new Zombie();

    heap = newZombie("from heap");

    heap->announce();

    randomChump("from stack");
        
    delete heap;

    return 0;
}