#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < SIZE; i++)
		this->_materiaSrc[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &materia)
{
	*this = materia;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < SIZE; i++)
		delete this->_materiaSrc[i];
}

MateriaSource &MateriaSource::operator=(const MateriaSource &materia)
{
	for (int i = 0; i < SIZE; i++)
		delete this->_materiaSrc[i];
	for (int i = 0; i < SIZE; i++)
		this->_materiaSrc[i] = materia._materiaSrc[i];
	return (*this);
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

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	if (type == "ice")
		return (new Ice());
	else if (type == "cure")
		return (new Cure());
	else
		return (NULL);
}
