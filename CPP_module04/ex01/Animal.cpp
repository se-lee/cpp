#include "Animal.hpp"


Animal::Animal(): _type("Animal")
{
	std::cout << "[" << this->_type << "] Animal default constructor" << std::endl;
}

Animal::Animal(std::string type): _type(type)
{
	std::cout << "[" << this->_type << "] Animal string constructor" << std::endl;
}

Animal::Animal(const Animal &animal)
{
	*this = animal;
	std::cout << "[" << this->_type << "] Animal copy constructor" << std::endl;
}

Animal::~Animal()
{
	std::cout << "[" << this->_type << "] Animal destructor" << std::endl;
}

Animal	&Animal::operator=(const Animal &animal)
{
	this->_type = animal._type;
	std::cout << "[" << this->_type << "] Assignment operator" << std::endl;
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
