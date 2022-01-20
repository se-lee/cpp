#include "AMateria.hpp"

AMateria::AMateria(): _type(NULL)
{
}

// AMateria::AMateria(std::string const &type)
// {
// }

std::string const &AMateria::getType()const
{
	return (this->_type);
}

void AMateria::use(ICharacter &target)
{
	std::cout << "AMateria Use: " << target.getName() << std::endl;
}
