
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

#define MAX_VAL 750

template<typename T>

class Array
{
    public:
        Array();
        Array(unsigned int n);
        Array(const Array &obj);
        // Array& operator=(const Array& obj);
        class OutOfBounds : public std::exception{
            
            const char * what() const throw()
            {
                return "out of bounds";
            }

        };

};
 
template<typename T>

Array<T>::Array()
{
    T array[] = {};
     
}

template<typename T>

Array<T>::Array(unsigned int n)
{
    T * array = new int[n]();
}


template<typename T>

Array<T>::Array(const Array &obj)
{
    this = obj;
}




int main()
{
    
    // Array<int> numbers(MAX_VAL);
    Array<int> *numbers = new Array<int>[MAX_VAL];// alloc MAX_VAL




    int* mirror = new int[MAX_VAL];
    
    srand(time(NULL));
    
    // for (int i = 0; i < MAX_VAL; i++)
    // {
    //     const int value = rand();
    //     numbers[i] = value;
    //     mirror[i] = value;
    // }

    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    


}