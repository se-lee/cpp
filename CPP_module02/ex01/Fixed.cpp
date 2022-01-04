#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->_value = 0;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int nbr)
{
/*
A constructor that takes a constant integer as a parameter
and that converts it to the correspondant fixed(8) point value. 
The fractional bits value is initialized like in ex00.
*/
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float nbr)
{
/*
A constructor that takes a constant floating point as a parameter
and that converts it to the correspondant fixed(8) point value. 
The fractional bits value is initialized like in ex00.
*/

	std::cout << "Float constructor called" << std::endl;
}

/* Copy constructor */
Fixed::Fixed(Fixed const &fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed	&Fixed::operator=(const Fixed &fixed)
{
	std::cout << "Assignation operator called" << std::endl;
	return (*this);
}

Fixed	&Fixed::operator<<(const Fixed &fixed)
{
	std::cout << "Operator called" << std::endl;
/* 
inserts a floating point representation of 
the fixed point value into the parameter output stream. 
*/
	return (*this);
}

float	Fixed::toFloat()
{ // converts the fixed point value to a floating point value

}

int		Fixed::toInt()
{ //converts the fixed point value to an integer value.

}


