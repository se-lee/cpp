#ifndef MATERIA_HPP
# define MATERIA_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"
//AMateria for Abstract Materia?
class AMateria
{
	protected:

	public:
		AMateria(std::string const &type);
		//[...]
		std::string const &getType() const; // Returns the materia type

		virtual AMateria	*clone() const = 0; // pure
		virtual void		use(ICharacter &target);
};


#endif