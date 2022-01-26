#include "Dog.hpp"

Dog::Dog(): Animal("Dog")
{
	std::cout << "[" << this->_type << "] Dog default constructor" << std::endl;
}

Dog::Dog(const Dog &dog)
{
	*this = dog;
	std::cout << "[" << this->_type << "] Dog copy constructor" << std::endl;
}

Dog::~Dog()
{
	std::cout << "[" << this->_type << "] Dog destructor" << std::endl;
}

Dog	&Dog::operator=(const Dog &dog)
{
	std::cout << "[" << this->_type << "] Dog assignment operator" << std::endl;
	this->_type = dog._type;
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "[" << this->_type << "] DOOOOOOGGGGGG!" << std::endl;
}

