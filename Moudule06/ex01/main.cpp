#include "cast.h"


typedef struct t_dat{

    int d;


}Data;
  
 
uintptr_t serialize(Data* ptr)
{
    uintptr_t p = reinterpret_cast<uintptr_t>(ptr);

    return p;
}

Data* deserialize(uintptr_t raw)
{
    Data *d;

    d = reinterpret_cast<Data*>(raw);

    return d;
}

int main()
{
    Data d;
    Data* ptr = &d;

    ptr->d = 100;
    // cout << serialize(ptr) <<endl;
    ptr = deserialize(serialize(ptr));

    cout << ptr->d << endl;


    
    
    return 0;
}