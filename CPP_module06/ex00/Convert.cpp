#include "Convert.hpp"

Convert::Convert()
{
}

Convert::Convert(const Convert &src)
{
	*this = src;
}

Convert::Convert(char *str)
{
	this->_input = str;
	this->_value = std::atof(str);
	if (strchr(str, '.'))
		this->_dot = true;
	else
		this->_dot = false;
}

Convert::~Convert()
{
}

Convert	&Convert::operator=(const Convert &src)
{	
	this->_input = src._input;
	this->_value = src._value;

	return (*this);
}

char	*Convert::getInput() const
{
	return (this->_input);
}

double Convert::getValue() const
{
	return (this->_value);
}

bool	Convert::getDot() const
{
	return (this->_dot);
}

std::string Convert::putDot()
{
	if (this->_dot)
		return ("");
	else
		return (".0");
}

char	Convert::toChar()
{
	return (static_cast<char>(this->_value));
}

int		Convert::toInt()
{
	return (static_cast<int>(this->_value));
}

float	Convert::toFloat()
{
	return (static_cast<float>(this->_value));
}

double	Convert::toDouble()
{
	return (static_cast<double>(this->_value));
}

void	Convert::printChar()
{
	std::cout << "char: " ;
	if (isnan(this->_value) || isinf(this->_value))
		std::cout << "impossible" << std::endl;
	else if (!isprint(this->toChar()))
		std::cout << "non displayable" << std::endl;
	else
		std::cout << this->toChar() << std::endl;
}

void	Convert::printInt()
{
	std::cout << "int: " ;
	if (isnan(this->_value) || isinf(this->_value) 
		|| this->_value >= INT_MAX || this->_value <= INT_MIN)
		std::cout << "impossible" << std::endl;
	else
		std::cout << this->toInt() << std::endl;
}

void	Convert::printFloat()
{
	std::cout << "float: " ;
	if (isnan(this->_value))
		std::cout << "nanf" << std::endl;
	else if (isinf(this->_value))
		std::cout << "inff" << std::endl;
	else
		std::cout << this->toFloat() << this->putDot() << "f" <<std::endl;
}

void	Convert::printDouble()
{
	std::cout << "double: " ;
	if (isnan(this->_value))
		std::cout << "nan" << std::endl;
	else if (isinf(this->_value))
		std::cout << "inf" << std::endl;
	else
		std::cout << this->toDouble() << this->putDot() <<std::endl;
}
