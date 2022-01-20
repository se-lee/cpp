#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include "AMateria.hpp"
# include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
	private:

	public:
		MateriaSource();
		MateriaSource(const MateriaSource &materia_src);
		~MateriaSource();
		
		void		learnMateria(AMateria *);
		AMateria	*createMateria(std::string const &type);

};



#endif