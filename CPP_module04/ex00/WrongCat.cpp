#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->_type = "Wrong Cat";
	std::cout << "[" << this->_type << "] Default Constructor" << std::endl;
}

WrongCat::WrongCat(const WrongCat &wrong_cat)
{
	std::cout << "[" << this->_type << "] Copy Constructor" << std::endl;
	*this = wrong_cat;
}

WrongCat::~WrongCat()
{
	std::cout << "[" << this->_type << "] Destructor" << std::endl;
}

WrongCat	&WrongCat::operator=(const WrongCat &wrong_cat)
{
	std::cout << "[" << this->_type << "] Assignation Operator" << std::endl;
	this->_type = wrong_cat._type;
	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << "[" << this->_type << "] I AM FAKE CAT MEOW" << std::endl;
}


