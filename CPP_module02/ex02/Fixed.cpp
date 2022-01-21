#include "Fixed.hpp"

int const	Fixed::_bit = 8;

Fixed::Fixed(): _value(0)
{
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int nbr)
{
	// std::cout << "Int constructor called" << std::endl;
	this->_value = nbr << this->_bit;
}

Fixed::Fixed(const float nbr)
{
	// std::cout << "Float constructor called" << std::endl;
	this->_value = (int)std::roundf(nbr * (1 << this->_bit));
}

Fixed::Fixed(Fixed const &fixed)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}


Fixed	&Fixed::operator=(const Fixed &fixed)
{
	// std::cout << "Assignment operator called" << std::endl;
	this->_value = fixed._value;
	return (*this);
}

/* --- Comparison Operator overloading --- */

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

/* --- Increment/Decrement Operator overload --- */
//++a
Fixed	&Fixed::operator++(void)
{
	this->_value++;
	return (*this);
}

//a++
Fixed	Fixed::operator++(int)
{
	Fixed	ret_fixed(*this);
	this->_value++;
	return (ret_fixed);
}

//--a
Fixed	&Fixed::operator--(void)
{
	this->_value--;
	return (*this);
}

//a--
Fixed	Fixed::operator--(int)
{
	Fixed	ret_fixed(*this);
	this->_value--;
	return (ret_fixed);
}


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

int		Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" <<std::endl;
	return (this->_value);
}

void	Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}

Fixed	&Fixed::min(Fixed &fixed1, Fixed &fixed2)
{
	if (fixed1._value < fixed2._value)
		return (fixed1);
	else
		return (fixed2);
}

Fixed const	&Fixed::min(const Fixed &fixed1, const Fixed &fixed2)
{
	if (fixed1._value < fixed2._value)
		return (fixed1);
	else
		return (fixed2);
}

Fixed	&Fixed::max(Fixed &fixed1, Fixed &fixed2)
{
	if (fixed1._value > fixed2._value)
		return (fixed1);
	else
		return (fixed2);
}

Fixed const	&Fixed::max(const Fixed &fixed1, const Fixed &fixed2)
{
	if (fixed1._value > fixed2._value)
		return (fixed1);
	else
		return (fixed2);
}

std::ostream	&operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return (out);
}
