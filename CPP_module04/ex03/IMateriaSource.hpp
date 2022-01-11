#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

//IMateriaSource for Interface MateriaSource?
# include <iostream>
# include <string>
# include "AMateria.hpp"
class IMateriaSource
{
	public:
		virtual 			~IMateriaSource() {} // nanikore
		virtual void		learnMateria(AMateria *) = 0; //pure;
		virtual AMateria	*createMateria(std::string const &type) = 0; //pure
};

#endif