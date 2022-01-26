#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal("Wrong Cat")
{
	std::cout << "[" << this->_type << "] Wrong Cat default constructor" << std::endl;
}

WrongCat::WrongCat(const WrongCat &wrong_cat)
{
	std::cout << "[" << this->_type << "] Wrong Cat copy constructor" << std::endl;
	*this = wrong_cat;
}

WrongCat::WrongCat(std::string type)
{
	this->_type = type;
	std::cout << "[" << this->_type << "] Wrong Cat string constructor" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "[" << this->_type << "] Wrong Cat destructor" << std::endl;
}

WrongCat	&WrongCat::operator=(const WrongCat &wrong_cat)
{
	std::cout << "[" << this->_type << "] Wrong Cat assignment operator" << std::endl;
	this->_type = wrong_cat._type;
	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << "[" << this->_type << "] I AM FAKE and WRONG CAT MEOW" << std::endl;
}

