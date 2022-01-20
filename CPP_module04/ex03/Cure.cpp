#include "Cure.hpp"

Cure::Cure(): AMateria("cure")
{
}

Cure::Cure(std::string const &type): AMateria(type)
{
}

Cure::~Cure()
{
}

AMateria	*Cure::clone() const
{
	AMateria	*cureClone = new Cure("new_cure");
	return (cureClone);
}

void	Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

