#include "Convert.hpp"

Convert::Convert(): _input(NULL), _value(0), _dot(false), _isnan(false), _isinf(false)
{
}

Convert::Convert(const Convert &src)
{
	*this = src;
}

Convert::Convert(char *str)
{
	this->_input = str;
	this->_dot = false;
	this->_isnan = false;
	this->_isinf = false;

	if (strlen(str) == 1 && (str[0] > '9' || str[0] < '0'))
		this->_value = static_cast<double>(str[0]);
	else
		this->_value = std::atof(str);
	if (strchr(str, '.'))
		this->_dot = true;
	else
		this->_dot = false;
	if (strstr(str, "nan"))
		this->_isnan = true;
	if (strstr(str, "inf"))
		this->_isinf = true;
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
	if (!this->_dot || (strstr(this->_input, ".0")))
		return (".0");
	else
		return ("");
}

char	Convert::toChar()
{
	if (strlen(this->_input) == 1 && isalpha(this->_input[0]))
		return (static_cast<char>(this->_input[0]));
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
	if (this->_isnan || this->_isinf)
		std::cout << "impossible" << std::endl;
	else if (!isprint(this->toChar()))
		std::cout << "non displayable" << std::endl;
	else
		std::cout << "'" << this->toChar() << "'" << std::endl;
}

void	Convert::printInt()
{
	std::cout << "int: " ;
	if ( this->_isnan || this->_isinf 
		|| this->_value >= INT_MAX || this->_value <= INT_MIN)
		std::cout << "impossible" << std::endl;
	else
		std::cout << this->toInt() << std::endl;
}

void	Convert::printFloat()
{
	std::cout << "float: " ;
	if (this->_isnan)
		std::cout << "nanf" << std::endl;
	else if (this->_isinf)
	{
		if (this->_value < 0)
			std::cout << "-";
		else
			std::cout << "+";
		std::cout << "inff" << std::endl;
	}
	else
		std::cout << this->toFloat() << this->putDot() << "f" <<std::endl;
}

void	Convert::printDouble()
{
	std::cout << "double: " ;
	if (this->_isnan)
		std::cout << "nan" << std::endl;
	else if (this->_isinf)
	{
		if (this->_value < 0)
			std::cout << "-";
		else
			std::cout << "+";
		std::cout << "inf" << std::endl;
	}
	else
		std::cout << this->toDouble() << this->putDot() <<std::endl;
}
