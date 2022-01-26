#include "Cat.hpp"

Cat::Cat(): Animal("Cat")
{
	std::cout << "[" << this->_type << "] Cat default constructor" << std::endl;
}

Cat::Cat(const Cat &cat)
{
	*this = cat;
	std::cout << "[" << this->_type << "] Cat copy constructor" << std::endl;
}

Cat::~Cat()
{
	std::cout << "[" << this->_type << "] Cat destructor" << std::endl;
}


Cat		&Cat::operator=(const Cat &cat)
{
	this->_type = cat._type;
	std::cout << "[" << this->_type << "] Cat assignment operator" << std::endl;
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "[" << this->_type << "] CAAAATTTT" << std::endl;
}
