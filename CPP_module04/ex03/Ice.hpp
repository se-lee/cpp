#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Ice: public AMateria
{
	public:
		Ice();
		Ice(std::string const &type);
		Ice(const Ice &ice);
		~Ice();

		Ice		&operator=(const Ice &ice);
		std::string	const	&getType() const;
		AMateria			*clone() const;
		void				use(ICharacter &target);
};

#endif
