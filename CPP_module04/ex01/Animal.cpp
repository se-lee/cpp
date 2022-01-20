#include "Animal.hpp"

Animal::Animal(): _type("Animal")
{
	std::cout << "[" << this->_type << "] Animal Default constructor" << std::endl;
}

Animal::Animal(const Animal &animal)
{
	*this = animal;
	std::cout << "[" << this->_type << "] Animal Copy constructor" << std::endl;
}

Animal::~Animal()
{
	std::cout << "[" << this->_type << "] Animal Destructor" << std::endl;
}

Animal	&Animal::operator=(const Animal &animal)
{
	this->_type = animal._type;
	std::cout << "[" << this->_type << "] Assignation operator" << std::endl;
	return (*this);
}

std::string	const &Animal::getType() const
{
	return (this->_type);
}

void	Animal::makeSound() const
{
	std::cout << "[" << this->_type << "] I AM AN ANIMAL" << std::endl;
}
