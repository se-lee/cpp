#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"
# include "Ice.hpp"
# include "Cure.hpp"

class MateriaSource: public IMateriaSource
{
	private:
		AMateria *_materiaSrc[SIZE];

	public:
		MateriaSource();
		MateriaSource(const MateriaSource &materia);
		~MateriaSource();

		MateriaSource	&operator=(const MateriaSource &materia);

		void		learnMateria(AMateria *materia);
		AMateria	*createMateria(std::string const &type);
};

#endif
