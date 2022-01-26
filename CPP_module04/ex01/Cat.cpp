#include "Cat.hpp"

Cat::Cat(): Animal("Cat")
{
	std::cout << "[" << this->_type << "] Cat default constructor" << std::endl;
	this->_brain = new Brain();
}

Cat::Cat(const Cat &cat)
{
	std::cout << "[" << this->_type << "] Cat copy constructor" << std::endl;
	*this = cat;
}

Cat::~Cat()
{
	std::cout << "[" << this->_type << "] Cat destructor" << std::endl;
	delete this->_brain;
}

Cat		&Cat::operator=(const Cat &cat)
{
	std::cout << "[" << this->_type << "] Cat assignment operator" << std::endl;
	this->_type = cat._type;
	this->_brain = new Brain();
	for (int i = 0; i < 100; i++)
		this->_brain->setIdeas(cat.getIdeas(i), i);
	return (*this);
}

std::string	&Cat::getIdeas(int i) const
{
	return (this->_brain->getIdeas(i));
}

void	Cat::setIdeas(std::string newIdeas, int i)
{
	this->_brain->setIdeas(newIdeas, i);
}

void	Cat::makeSound() const
{
	std::cout << "[" << this->_type << "] CCCCAAAATTTT" << std::endl;
}
