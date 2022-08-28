#include <iostream>
#include <string>
#include <cstring>
#include <cctype>
#include <iomanip>

#include "Zombie.h"
using std::setw;
using  std::cout;
using  std::endl;
using  std::string;


int main()
{

    Zombie *heap = new Zombie();// new instance
  
    heap = newZombie("from heap");
    heap->announce();

    randomChump("from stack");
    delete heap;// destructor call when the object will destroy

}