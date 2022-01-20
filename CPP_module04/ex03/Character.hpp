#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character: public ICharacter
{
	private:
		std::string const _name;
		AMateria *_materia[SIZE];

	public:
		Character();
		Character(std::string name);
		Character(const Character &character);
		~Character();

		// Character &Character::operator=(const Character &character);
		std::string const	&getName() const;
		void				equip(AMateria *m);
		void				unequip(int idx);
		void				use(int idx, ICharacter &target);
};

#endif