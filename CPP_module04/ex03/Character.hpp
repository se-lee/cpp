#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character: public ICharacter
{
	private:
		std::string const _name;
		AMateria *materia[4];

	public:
		Character();
		Character(std::string name);
		Character(const Character &character);
		~Character();




};


#endif