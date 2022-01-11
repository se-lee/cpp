#include "Cat.hpp"

Cat::Cat()
{
	this->_type = "Cat";
	std::cout << "[Cat] Default constructor" << std::endl;
}

Cat::Cat(const Cat &cat)
{
	std::cout << "[Cat] Copy constructor" << std::endl;
	*this = cat;
}

Cat::~Cat()
{
	std::cout << "[Cat] Destructor" << std::endl;
}


Cat		&Cat::operator=(const Cat &cat)
{
	std::cout << "[Cat] Assignation operator" << std::endl;
	this->_type = cat._type;
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "[CatSound] CCCCAAAATTTT" << std::endl;
}
