#ifndef WHATEVER_H
#define WHATEVER_H

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

 


template<typename T>
void swap(T &a, T &b)
{
    T temp; 
    
    temp = a;
    a = b;
    b = temp;
}
template<typename T>

T min(T arg1, T arg2)
{
    if(arg1 == arg2)
        return arg2;
    else
        return (arg1 < arg2) ? arg1 : arg2; 

}

template<typename T>

T max(T arg1, T arg2)
{
    if(arg1 == arg2)
        return arg2;
    else
        return (arg1 > arg2) ? arg1 : arg2; 

}
 






#endif