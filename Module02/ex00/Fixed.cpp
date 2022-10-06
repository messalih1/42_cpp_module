#include "Fixed.h"


 
const int Fixed::fract = 8;

Fixed::Fixed()
{
    fixed = 0;
    std::cout <<  "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &obj)
{
    fixed = obj.fixed;
    std::cout <<  "Copy constructor called" << std::endl;
    std::cout << "getRawBits member function called" << std::endl;

}

Fixed &  Fixed::operator = (const Fixed &obj)
{
    std::cout <<  "Copy assignment operator called" << std::endl;
    std::cout << "getRawBits member function called" << std::endl;

    if(this != &obj)
    {
        fixed = obj.fixed;
    }
    return *this;
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
 