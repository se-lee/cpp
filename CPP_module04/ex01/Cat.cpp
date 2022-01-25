#include "Cat.hpp"

Cat::Cat(): Animal("Cat")
{
	this->_brain = new Brain();
	std::cout << "[" << this->_type << "] Default constructor" << std::endl;
}

Cat::Cat(const Cat &cat)
{
	*this = cat;
	std::cout << "[" << this->_type << "] Copy constructor" << std::endl;
}

Cat::~Cat()
{
	delete this->_brain;
	std::cout << "[" << this->_type << "] Destructor" << std::endl;
}


Cat		&Cat::operator=(const Cat &cat)
{
	this->_type = cat._type;
	std::cout << "[" << this->_type << "] Assignation operator" << std::endl;
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "[" << this->_type << "] CCCCAAAATTTT" << std::endl;
}
