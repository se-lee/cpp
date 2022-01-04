#include "Fixed.hpp"

int const	Fixed::_bit = 8;

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
	this->_value = nbr << this->_bit;
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float nbr)
{
	std::cout << "Float constructor called" << std::endl;
	this->_value = (int)std::roundf(nbr * (1 << this->_bit));
}

Fixed::Fixed(Fixed const &fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}


Fixed	&Fixed::operator=(const Fixed &fixed)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_value = fixed._value;
	return (*this);
}

/* --- Comparison Operator overload --- */
bool	Fixed::operator>(const Fixed &fixed)const
{
	if (fixed._value > this->_value)
		return (true);
	else
		return (false);
}

bool	Fixed::operator<(const Fixed &fixed)const
{
	if (fixed._value < this->_value)
		return (true);
	else
		return (false);
}

bool	Fixed::operator>=(const Fixed &fixed)const
{
	if (fixed._value >= this->_value)
		return (true);
	else
		return (false);
}

bool	Fixed::operator<=(const Fixed &fixed)const
{
	if (fixed._value <= this->_value)
		return (true);
	else
		return (false);
}

bool	Fixed::operator==(const Fixed &fixed)const
{
	if (fixed._value == this->_value)
		return (true);
	else
		return (false);
}

bool	Fixed::operator!=(const Fixed &fixed)const
{
	if (fixed._value != this->_value)
		return (true);
	else
		return (false);
}
/* --- Comparison Operator overload end --- */


/* --- Arithmetic Operator overload --- */

Fixed	Fixed::operator+(const Fixed &fixed)const
{
	Fixed	ret_fixed(fixed.toFloat() + this->toFloat());
	return (ret_fixed);
}

Fixed	Fixed::operator-(const Fixed &fixed)const
{
	Fixed	ret_fixed(fixed.toFloat() - this->toFloat());
	return (ret_fixed);
}

Fixed	Fixed::operator*(const Fixed &fixed)const
{
	Fixed 	ret_fixed(fixed.toFloat() * this->toFloat());
	return	(ret_fixed);
}

Fixed	Fixed::operator/(const Fixed &fixed)const
{
	Fixed	ret_fixed(fixed.toFloat() / this->toFloat());
	return (ret_fixed);
}

/* --- Arithmetic Operator overload end --- */



/* --- Increment/Decrement Operator overload --- */

Fixed	&Fixed::operator++(void) //++a
{
	this->_value++;
	return (*this);
}

Fixed	Fixed::operator++(int) //a++
{
	Fixed	ret_fixed(*this);
	this->_value++;
	return (ret_fixed);
}

Fixed	&Fixed::operator--(void)
{
	this->_value--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	ret_fixed(*this);
	this->_value--;
	return (ret_fixed);
}

/* --- Increment/Decrement Operator overload end --- */






float	Fixed::toFloat()const
{
	float	ret;
	ret = ((float)this->_value / (float)(1 << this->_bit));
	return (ret);
}

int		Fixed::toInt()const
{
	int		ret;
	ret = this->_value >> this->_bit;
	return (ret);
}


std::ostream	&operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return (out);
}
