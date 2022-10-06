#include "Fixed.h"


 
const int Fixed::fract = 8;

Fixed::Fixed()
{
    fixed = 0;
    std::cout <<  "Default constructor called" << std::endl;
}

Fixed &  Fixed::operator = (const Fixed &obj)
{
    std::cout <<  "Copy assignment operator called" << std::endl;

    if(this != &obj)
    {
        fixed = obj.fixed;
    }
    return *this;
}
std::ostream & operator << (std::ostream & COUT, const Fixed & fixed)
{
    COUT << fixed.toFloat();
    return COUT;
}

Fixed::Fixed(const Fixed &obj)
{
    std::cout <<  "Copy constructor called" << std::endl;
    *this = obj;// when detect equal hi call operator overloading
}

Fixed::Fixed(const int number)
{
    fixed = round(number * (1 << fract));// to convert to fixed we round the result of fractional or cast to int 
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float number)
{
    fixed = round(number * (1 << fract)); 
    std::cout << "Float constructor called" << std::endl;
}

float Fixed::toFloat( void ) const
{
    return (float)fixed / (1 << fract);
}

int Fixed::toInt( void ) const
{
    return  fixed / (1 << fract);
}



int Fixed::getRawBits(void)const
{
    std::cout << "getRawBits member function called" << std::endl;
    return fixed;
}

void Fixed::setRawBits(int const raw)
{
    fixed = raw;
}

Fixed::~Fixed()
{
    std::cout <<  "Destructor called" << std::endl;
}
 