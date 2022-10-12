#include "base.h"



base::base()
{
    cout << "base default\n";
}

 

base::base(int set_n)
{
   
    cout << "from base\n";
}

void base::get()
{
    cout << *ptr << endl;
}

base::~base()
{
    cout << "Base Destructor called\n";
    // delete ptr;
}