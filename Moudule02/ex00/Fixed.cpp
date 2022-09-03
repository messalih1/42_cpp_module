#include "Fixed.h"

int const Fixed::fractional_bits = 8;
 
Fixed::Fixed():fixed_point(0)
{
    cout << "Default constructor called" << endl; 
}

Fixed::Fixed(const Fixed &obj) 
{
    cout << "Copy constructor called" << endl; 
    getRawBits();
}

const int  Fixed::getRawBits( void )
{
    cout << "getRawBits member function called" << endl;
    return 0;
}

void Fixed::operator=(const Fixed &obj) 
{
    cout << "Copy assignment operator called" << endl; 
    cout << "getRawBits member function called" << endl;

}

Fixed::~Fixed()
{ 
    cout << "Destructor called" << endl;
}
