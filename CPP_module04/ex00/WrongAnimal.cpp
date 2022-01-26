#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): _type("Wrong Animal")
{
	std::cout << "[" << this->_type << "] Wrong Animal default constructor" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &wrong)
{
	*this = wrong;
	std::cout << "[" << this->_type << "] Wrong Animal copy constructor" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type): _type(type)
{
	std::cout << "[" << this->_type << "] Wrong Animal string constructor" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "[" << this->_type << "] Wrong Animal destructor" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &wrong)
{
	this->_type = wrong._type;
	std::cout << "[" << this->_type << "] Wrong Animal assignment operator" << std::endl;
	return (*this);
}

std::string	const &WrongAnimal::getType() const
{
	return (this->_type);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "[" << this->_type << "] I AM FAKE and I AM WRONG" << std::endl;
}
