#include "Dog.hpp"

Dog::Dog()
{
	this->_type = "Dog";
	this->_brain = new Brain();
	std::cout << "[" << this->_type << "] Default Constructor" << std::endl;
}

Dog::Dog(const Dog &dog)
{
	this->_type = dog._type;
	this->_brain = new Brain();
	*this = dog;
	std::cout << "[" << this->_type << "] Copy Constructor" << std::endl;
	
}

Dog::~Dog()
{
	delete this->_brain;
	std::cout << "[" << this->_type << "] Destructor" << std::endl;
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