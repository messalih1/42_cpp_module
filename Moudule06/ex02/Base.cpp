#include "Base.h"


Base::Base(/* args */)
{
}

Base::~Base()
{
}


Base *generate()
{
    C *a = new C;
    
    return a;
}

 

void identify(Base* p)
{
    if(dynamic_cast<A*>(p))
        cout << "class A" << endl;
    if(dynamic_cast<B*>(p))
        cout << "class B" << endl;
    if(dynamic_cast<C*>(p))
        cout << "class C" << endl;
}




void identify(Base& p)
{
    try
    {
        A &a = dynamic_cast<A&>(p);

        cout << "class A" << endl;
     }
    catch (std::exception& e) {
    }

    try
    {
        B &a = dynamic_cast<B&>(p);

        cout << "class B" << endl;
        return;
        
    }
    catch (std::exception& e) {
    }

    try
    {
        C &a = dynamic_cast<C&>(p);

        cout << "class C" << endl;
         
    }
    catch (std::exception& e) {
    }

     
}

