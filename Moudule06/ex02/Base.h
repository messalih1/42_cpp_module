#ifndef BASE_H
#define BASE_H

#include <iostream>
#include <string>
#include <iomanip>
#include <climits>
#include <limits.h>
#include <cfloat>
#include <climits>
using std::cout;
using std::endl;
using std::string;


class Base
{
    private:
        /* data */
    public:
        
        Base(/* args */);
        virtual ~Base();
};


class A : public Base
{ 
    
};

class B : public Base
{

};

class C : public Base
{

};

Base * generate(void);
void identify(Base* p);
void identify(Base& p);

Base *generatea();



#endif