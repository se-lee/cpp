#include "Ice.hpp"

Ice::Ice(): AMateria("ice")
{
}

Ice::Ice(std::string const &type): AMateria(type)
{
}

Ice::~Ice()
{
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

