#include "IMateriaSource.hpp"

IMateriaSource::~IMateriaSource()
{
	std::cout << "[IMateriaSource] Destructor" << std::endl;
}

void	IMateriaSource::learnMateria(AMateria *)
{

}

AMateria	*IMateriaSource::createMateria(std::string const &type)
{
	
}

