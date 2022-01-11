#include "AbstAnimal.hpp"

AbstAnimal::AbstAnimal()
{
	this->_type = "Abs_Animal";
	std::cout << "[Abs_Animal] Default constructor" << std::endl;
}

AbstAnimal::AbstAnimal(const AbstAnimal &animal)
{
	std::cout << "[Abs_Animal] Copy Constructor" << std::endl;
	*this = animal;
}

AbstAnimal::~AbstAnimal()
{
	std::cout << "[Abs_Animal] Destructor" << std::endl;
}

AbstAnimal	&AbstAnimal::operator=(const AbstAnimal &animal)
{
	std::cout << "[Abs_Animal] Assignation operator" << std::endl;
	this->_type = animal._type;
	return (*this);
}

std::string	const &AbstAnimal::getType() const
{
	return (this->_type);
}

// void	Abs_Animal::makeSound() const
// {
// 	std::cout << "[AnimalSound]I AM AN ANIMAL" << std::endl;
// }
