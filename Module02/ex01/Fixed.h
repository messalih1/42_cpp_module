#ifndef FIXED_H
#define FIXED_H


#include <iostream>
#include <cstring>
#include <cmath>


class Fixed
{
    private:
        int fixed;
        static const int fract;
    public:
        Fixed();
        Fixed(const Fixed &obj);
        Fixed(const int number);
        Fixed(const float number);
        Fixed & operator = (const Fixed &obj);
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        float toFloat( void ) const;
        int toInt( void ) const;
        ~Fixed();
};

std::ostream & operator << (std::ostream & COUT, const Fixed & fixed);


#endif