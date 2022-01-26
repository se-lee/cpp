#include "AAnimal.hpp"

AAnimal::AAnimal(): _type("A_Animal")
{
	std::cout << "[" << this->_type << "] AAnimal default constructor" << std::endl;
}

AAnimal::AAnimal(std::string type): _type(type)
{
	std::cout << "[" << this->_type << "] AAnimal string constructor" << std::endl;
}

AAnimal::AAnimal(const AAnimal &animal)
{
	std::cout << "[" << this->_type << "] AAnimal copy constructor" << std::endl;
	*this = animal;
}

AAnimal::~AAnimal()
{
	std::cout << "[" << this->_type << "] AAnimal destructor" << std::endl;
}

AAnimal	&AAnimal::operator=(const AAnimal &animal)
{
	std::cout << "[" << this->_type << "] AAnimal assignment operator" << std::endl;
	this->_type = animal._type;
	return (*this);
}

std::string	const &AAnimal::getType() const
{
	return (this->_type);
}
