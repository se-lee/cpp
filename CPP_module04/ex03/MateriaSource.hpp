#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include "AMateria.hpp"
# include "IMateriaSource.hpp"
# include "Ice.hpp"
# include "Cure.hpp"

class MateriaSource: public IMateriaSource
{
	private:
		AMateria *_materiaSrc[SIZE];

	public:
		MateriaSource();
		MateriaSource(const MateriaSource &materia_src);
		~MateriaSource();
		
		void		learnMateria(AMateria *materia);
		AMateria	*createMateria(std::string const &type);
};


/*
 learnMateria(AMateria*)
Copies the Materia passed as a parameter and store it in memory so it can be cloned
later. Like the Character, the MateriaSource can know at most 4 Materias. They
are not necessarily unique.

• createMateria(std::string const &)
Returns a new Materia. The latter is a copy of the Materia previously learned by
the MateriaSource whose type equals the one passed as parameter. Returns 0 if
the type is unknown
*/

#endif
