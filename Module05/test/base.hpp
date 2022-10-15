#ifndef BASE_H
#define BASE_H

#include <iostream>
#include <exception>  

using std::string;
using std::cout;
using std::endl;

class base : public std::exception
{
    
        
    public:
    const char *m;
        base (const char *msg) : m(msg)
        {}
        const char * what ()
        {
            return m;
        }
        base();
        ~base();
};











#endif