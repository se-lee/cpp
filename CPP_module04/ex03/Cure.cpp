#include "Cure.hpp"

Cure::Cure(): AMateria("cure")
{
	// std::cout << "Cure default constructor called" << std::endl;
}

Cure::Cure(std::string const &type): AMateria(type)
{
	// std::cout << "Cure parameter constructor called" << std::endl;
}

Cure::Cure(const Cure &cure)
{
	*this = cure;
	// std::cout << "Cure copy constructor called" << std::endl;
}

Cure::~Cure()
{
	// std::cout << "Cure destructor called" << std::endl;
}

Cure	&Cure::operator=(const Cure &cure)
{
	// std::cout << "Cure assignment operator" << std::endl;
	this->_type = cure.getType();
	return (*this);
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

