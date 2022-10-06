#ifndef FIXED_H
#define FIXED_H


#include <iostream>
#include <cstring>
 


class Fixed
{
    private:
        int fixed;
        static const int fract;
    public:
        Fixed();
        Fixed(const Fixed &obj);
        Fixed & operator = (const Fixed &obj);
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        ~Fixed();
};








#endif