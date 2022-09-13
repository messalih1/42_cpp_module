#include "Fixed.h"

int const Fixed::fractional_bits = 8;
 
Fixed::Fixed():fixed_point(0)
{
    cout << "Default constructor called" << endl;
}

Fixed::Fixed(const int integer) 
{
    cout << "Int constructor called" << endl;
    fixed_point = (int)roundf(integer * (double)fractional_bits);
}

Fixed::Fixed(const float floating_point) 
{
    cout << "Float constructor called" << endl;
    fixed_point = (int)roundf(floating_point * (double)fractional_bits);
}

const float Fixed::toFloat()
{
    return (double)fixed_point / (double)fractional_bits;
}
const int Fixed::toInt() 
{
    return (int)fixed_point / (int)fractional_bits;
}
Fixed::Fixed(const Fixed &obj) 
{
    cout << "Copy constructor called" << endl;
    *this = obj;
}

void Fixed::operator=(const Fixed &obj) 
{
    cout << "Copy assignment operator called" << endl;
    
}



Fixed::~Fixed()
{
    cout << "Destructor called" << endl;
}

