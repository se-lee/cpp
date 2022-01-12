#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->_type = "Wrong Cat";
	std::cout << "[WrongCat] Default Constructor" << std::endl;
}

WrongCat::WrongCat(const WrongCat &wrong_cat)
{
	std::cout << "[WrongCat] Copy Constructor" << std::endl;
	*this = wrong_cat;
}

WrongCat::~WrongCat()
{
	std::cout << "[WrongCat] Destructor" << std::endl;
}

WrongCat	&WrongCat::operator=(const WrongCat &wrong_cat)
{
	std::cout << "[WrongCat] Assignation Operator" << std::endl;
	this->_type = wrong_cat._type;
	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << "[WrongCatSound] I AM FAKE CAT MEOW" << std::endl;
}


