#include "Fixed.hpp"

int const	Fixed::_bit = 8;

Fixed::Fixed(): _value(0)
{
	std::cout << "Default constructor called" << std::endl;
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
	std::cout << "Copy assignment operator called" << std::endl;
	this->_value = fixed._value;
	return (*this);
}

std::ostream	&operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return (out);
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
