#include "Dog.hpp"

Dog::Dog(): Animal("Dog")
{
	std::cout << "[" << this->_type << "] Default Constructor" << std::endl;
	this->_brain = new Brain();
}

Dog::Dog(const Dog &dog)
{
	std::cout << "[" << this->_type << "] Copy Constructor" << std::endl;
	*this = dog;
}

Dog::~Dog()
{
	std::cout << "[" << this->_type << "] Destructor" << std::endl;
	delete this->_brain;
}

Dog	&Dog::operator=(const Dog &dog)
{
	std::cout << "[" << this->_type << "] Assignation operator" << std::endl;
	this->_type = dog._type;
	this->_brain = dog._brain;
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "[" << this->_type << "] DDDOOOOOOGGGGGG!" << std::endl;
}

void	Dog::setNewIdeas(std::string newIdeas, int i)
{
	this->_brain->setIdeas(newIdeas, i);
}

void	Dog::printIdeas()
{
	for (int i = 0; i < 100; i++)
		std::cout << this->_brain->getIdeas(i);
	std::cout << std::endl;
}