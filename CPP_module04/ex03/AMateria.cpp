#include "AMateria.hpp"

AMateria::AMateria(): _type(NULL)
{
	// std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::AMateria(std::string const &type): _type(type)
{
}

AMateria::AMateria(const AMateria &materia)
{
	*this = materia;
}

AMateria::~AMateria()
{
}

AMateria	&AMateria::operator=(const AMateria &materia)
{
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
