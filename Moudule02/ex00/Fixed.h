#ifndef FIXED_H
#define FIXED_H

#include <iostream>

using std::cout;
using std::endl;


class Fixed
{
    int fixed_point;
    static int const fractional_bits;

    public:     
        Fixed();
        Fixed(const Fixed &obj);
        void operator = (const Fixed &obj);
        const int getRawBits( void );
        void setRawBits( int const raw );
        ~Fixed();
};








#endif