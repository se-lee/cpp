#include "Ice.hpp"

Ice::Ice(): AMateria("ice")
{
	// std::cout << "Ice default constructor called" << std::endl;
}

Ice::Ice(std::string const &type): AMateria(type)
{
	// std::cout << "Ice parameter constructor called" << std::endl;
}

Ice::Ice(const Ice &ice)
{
	// std::cout << "Ice copy constructor called" << std::endl;
	*this = ice;
}

Ice		&Ice::operator=(const Ice &ice)
{
	this->_type = ice.getType();
	return (*this);
}

Ice::~Ice()
{
	// std::cout << "Ice destructor called" << std::endl;
}

std::string const	&Ice::getType() const
{
	return (this->_type);
}

AMateria *Ice::clone() const
{
	AMateria	*iceClone = new Ice("new_ice");
	return (iceClone);
}

void	Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << "*" << std::endl;
}
