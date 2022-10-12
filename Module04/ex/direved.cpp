#include "direved.h"



direved::direved()
{
    cout << "direved default\n";
}

direved::direved(int set_n):base(set_n)
{
    ptr = new int();
    *ptr = set_n;
    cout << "from direved\n";
}

direved::~direved()
{
    cout << "direved Destructor called\n";
    delete ptr;
}
