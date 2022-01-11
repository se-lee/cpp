#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	this->type = "Wrong Animal";
	std::cout << "[WrongAnimal] Default Constructor" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &wrong)
{
	*this = wrong;
	std::cout << "[WrongAnimal] Copy Constructor" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "[WrongAnimal] Destructor" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &wrong)
{
	this->type = wrong.type;
	std::cout << "[WrongAnimal] Assignation Operator" << std::endl;
	return (*this);
}

std::string	const &WrongAnimal::getType() const
{
	return (this->type);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "[WrongAnimalSound] I AM FAKE" << std::endl;
}
