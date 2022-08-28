#include "Zombie.h"




void  randomChump( std::string name )
{
    Zombie z;

    z.init_values(name);
    z.announce();
}
