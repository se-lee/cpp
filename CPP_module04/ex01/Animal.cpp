#include "Animal.hpp"

Animal::Animal()
{
	this->type = "Animal";
	std::cout << "[Animal] Default constructor" << std::endl;
}

Animal::Animal(const Animal &animal)
{
	std::cout << "[Animal] Copy Constructor" << std::endl;
	*this = animal;
}

Animal::~Animal()
{
	std::cout << "[Animal] Destructor" << std::endl;
}

Animal	&Animal::operator=(const Animal &animal)
{
	std::cout << "[Animal] Assignation operator" << std::endl;
	this->type = animal.type;
	return (*this);
}

std::string	const &Animal::getType() const
{
	return (this->type);
}

void	Animal::makeSound() const
{
	std::cout << "[AnimalSound]I AM AN ANIMAL" << std::endl;
}
