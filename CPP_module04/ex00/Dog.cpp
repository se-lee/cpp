#include "Dog.hpp"

Dog::Dog()
{
	this->_type = "Dog";
	std::cout << "[" << this->_type << "] Default Constructor" << std::endl;
}

Dog::Dog(const Dog &dog)
{
	*this = dog;
	std::cout << "[" << this->_type << "] Copy Constructor" << std::endl;
}

Dog::~Dog()
{
	std::cout << "[" << this->_type << "] Destructor" << std::endl;
}

Dog	&Dog::operator=(const Dog &dog)
{
	this->_type = dog._type;
	std::cout << "[" << this->_type << "] Assignation operator" << std::endl;
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "[" << this->_type << "] DDDOOOOOOGGGGGG!" << std::endl;
}

