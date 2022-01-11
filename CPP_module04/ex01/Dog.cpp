#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	std::cout << "[Dog] Default Constructor" << std::endl;
}

Dog::Dog(const Dog &dog)
{
	*this = dog;
	std::cout << "[Dog] Copy Constructor" << std::endl;
}

Dog::~Dog()
{
	std::cout << "[Dog] Destructor" << std::endl;
}

Dog	&Dog::operator=(const Dog &dog)
{
	std::cout << "[Dog] Assignation operator" << std::endl;
	this->type = dog.type;
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "[DogSound] DDDOOOOOOGGGGGG!" << std::endl;
}

