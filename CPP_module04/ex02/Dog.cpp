#include "Dog.hpp"

Dog::Dog(): AAnimal("Dog")
{
	std::cout << "[" << this->_type << "] Dog default constructor" << std::endl;
	this->_brain = new Brain();
}

Dog::Dog(const Dog &dog)
{
	std::cout << "[" << this->_type << "] Dog copy constructor" << std::endl;
	*this = dog;
}

Dog::~Dog()
{
	std::cout << "[" << this->_type << "] Dog destructor" << std::endl;
	delete this->_brain;
}

Dog	&Dog::operator=(const Dog &dog)
{
	std::cout << "[" << this->_type << "] Dog assignment operator" << std::endl;
	this->_type = dog._type;
	this->_brain = new Brain();
	for (int i = 0; i < 100; i++)
		this->_brain->setIdeas(dog.getIdeas(i), i);
	return (*this);
}

std::string	&Dog::getIdeas(int i) const
{
	return (this->_brain->getIdeas(i));
}

void	Dog::setIdeas(std::string newIdeas, int i)
{
	this->_brain->setIdeas(newIdeas, i);
}

void	Dog::makeSound() const
{
	std::cout << "[" << this->_type << "] DDDOOOOOOGGGGGG!" << std::endl;
}
