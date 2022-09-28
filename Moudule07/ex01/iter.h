#ifndef ITER_H
#define ITER_H



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




template<typename T,  typename F>

void iter(T *arr, size_t len, F &f)
{
    for(int i = 0; i < len; i++)
    {
        f(arr[i]);
    }
}



#endif