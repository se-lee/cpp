#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include "AMateria.hpp"

# define SIZE 4

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

		Character &Character::operator=(const Character &character);
		void	equip(AMateria *m);

};


#endif