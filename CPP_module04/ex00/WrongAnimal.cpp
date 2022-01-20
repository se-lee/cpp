#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	this->_type = "Wrong Animal";
	std::cout << "[" << this->_type << "] Wrong Animal Default Constructor" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &wrong)
{
	*this = wrong;
	std::cout << "[" << this->_type << "] Wrong Animal Copy Constructor" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "[" << this->_type << "] Wrong Animal Destructor" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &wrong)
{
	this->_type = wrong._type;
	std::cout << "[" << this->_type << "] Wrong Animal Assignation Operator" << std::endl;
	return (*this);
}

std::string	const &WrongAnimal::getType() const
{
	return (this->_type);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "[" << this->_type << "] I AM FAKE" << std::endl;
}
