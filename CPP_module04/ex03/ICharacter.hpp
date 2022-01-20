#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "AMateria.hpp"
# include <iostream>

class ICharacter
{
	public:
		virtual						~ICharacter() {} //nanikono namikakko?
		virtual std::string const	&getName() const = 0;
		virtual void				equip(AMateria* m) = 0;
		virtual void				unequip(int idx) = 0;
		virtual void				use(int idx, ICharater &target) = 0;
};

#endif