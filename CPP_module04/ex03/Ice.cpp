#include "Ice.hpp"

Ice::Ice(): AMateria("ice")
{
}

Ice::Ice(std::string const &type): AMateria(type)
{
}

Ice::Ice(const Ice &ice)
{
	*this = ice;
}

Ice		&Ice::operator=(const Ice &ice)
{
	this->_type = ice.getType();
	return (*this);
}

Ice::~Ice()
{
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
