#include "AMateria.hpp"

AMateria::AMateria(): _type(NULL)
{
	// std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::AMateria(std::string const &type): _type(type)
{
	// std::cout << "AMateria parameter constructor called" << std::endl;
}

AMateria::AMateria(const AMateria &materia)
{
	*this = materia;
	// std::cout << "AMateria copy constructor called" << std::endl;
}

AMateria::~AMateria()
{
	// std::cout << "AMateria destructor called" << std::endl;
}

AMateria	&AMateria::operator=(const AMateria &materia)
{
	// std::cout << "AMateria assignment operator" << std::endl;
	this->_type = materia.getType();
	return (*this);
}

std::string const &AMateria::getType()const
{
	return (this->_type);
}

void	AMateria::use(ICharacter &target)
{
	std::cout << "(AMateria use) to " << target.getName() << std::endl;
}
