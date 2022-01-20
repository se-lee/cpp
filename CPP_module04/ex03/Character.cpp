#include "Character.hpp"

Character::Character(): _name("(name)")
{
	std::cout << "[Character Default constructor called]" << std::endl;
	for (int i = 0; i < SIZE; i++)
		this->_materia[i] = NULL;
}

Character::Character(std::string name): _name(name)
{
	std::cout << "[Character String constructor called]" << std::endl;
	for (int i = 0; i < SIZE; i++)
		this->_materia[i] = NULL;
}

Character::Character(const Character &character): _name(character._name)
{
	std::cout << "[Character Copy constructor called]" << std::endl;
	for (int i = 0; i < SIZE; i++)
		this->_materia[i] = character._materia[i];
}

Character::~Character()
{
	std::cout << "[Character Destructor called]" << std::endl;
}

/*
Character &Character::operator=(const Character &character)
{
	this->_name = character._name;
	for (int i = 0; i < SIZE; i++)
		this->_materia[i] = character._materia[i];
	return (*this);
}
*/

std::string const &Character::getName() const
{
	return (this->_name);
}

void	Character::equip(AMateria *m)
{
	for(int i = 0; i < SIZE; i++)
	{
		if (this->_materia[i] == NULL)
		{
			this->_materia[i] = m;
			return ;
		}
	}
}

void	unequip(int idx)
{
	/*idx のマテリアルをNULLに戻す。消すわけではない
	Save the addresses before calling unequip(), or anything else, but
don’t forget that you have to avoid memory leaks. */
	//AMateria *tmp =	this->_materia[idx];
	this->_materia[idx] = NULL;
}

void	use(int idx, ICharacter &target)
{

}