#ifndef BASE_H
#define BASE_H

#include <iostream>
#include <cstring>
#include <string>


using std::cout;
using std::endl;
using std::string;

class base
{
    private:
        int *ptr;
    public:
        base();
        base(int set_n);
        void get();
       virtual  ~base();
};






#endif