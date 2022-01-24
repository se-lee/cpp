#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < SIZE; i++)
		this->_materiaSrc[i] = NULL;
}

MateriaSource::~MateriaSource()
{
}

void	MateriaSource::learnMateria(AMateria *materia)
{
	for (int i = 0; i < SIZE; i++)
	{
		if (this->_materiaSrc[i] == NULL)
		{
			std::cout << "New Materia learned: [" << materia->getType() << "]" << std::endl;
			this->_materiaSrc[i] = materia;
			return ;
		}
	}
}

AMateria	*MateriaSource::createMateria(std::string const &type) // ice or cure
{
	if (type == "ice")
	{
		std::cout << "New Materia created: [" << type << "]" << std::endl;
		return (new Ice());
	}
	else if (type == "cure")
	{
		std::cout << "New Materia created: [" << type << "]" << std::endl;
		return (new Cure());
	}
	else
		return (NULL);
}
