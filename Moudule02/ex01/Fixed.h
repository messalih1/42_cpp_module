#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <math.h>

using std::cout;
using std::endl;


class Fixed
{
    int fixed_point;
    static const int  fractional_bits;

    public:     
        Fixed();
        Fixed(const Fixed &obj);
        Fixed(const int integer);
        Fixed(const float floating_point);
        void operator = (const Fixed &obj);
        const float toFloat( void );
        const int toInt( void );
        int getRawBits( void );
        void setRawBits( int const raw );
        ~Fixed();
};








#endif