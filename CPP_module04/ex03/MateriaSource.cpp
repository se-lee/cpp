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
			this->_materiaSrc[i] = materia;
			return ;
		}
	}
}

AMateria	*MateriaSource::createMateria(std::string const &type) // ice or cure
{
	if (type == "ice")
		return (new Ice());
	else if (type == "cure")
		return (new Cure());
	else
		return (NULL);
}
