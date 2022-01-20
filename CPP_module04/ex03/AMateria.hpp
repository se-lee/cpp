 #ifndef MATERIA_HPP
# define MATERIA_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"

class AMateria
{
	protected:
		std::string	const	_type;

	public:
		AMateria();
		AMateria(std::string const &type);
		~AMateria();
		
		std::string const &getType() const;

		virtual AMateria	*clone() const = 0;
		virtual void		use(ICharacter &target);
};


#endif