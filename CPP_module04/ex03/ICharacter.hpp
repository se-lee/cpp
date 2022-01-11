#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "AMateria.hpp"

//ICharacter for Interface Character?
class ICharacter
{
	public:
		virtual						~ICharacter() {} //nanikono namikakko
		virtual std::string const	&getName() const = 0; //pure
		virtual void				equip(AMAteria* m) = 0; //pure
		virtual void				unequip(int idx) = 0; //pure
		virtual void				use(int idx, ICharater &target) = 0; //pure
};

#endif