#include "Character.hpp"

Character::Character(): _name("(name)")
{
	for (int i = 0; i < SIZE; i++)
		this->_materia[i] = NULL;
}

Character::Character(std::string name): _name(name)
{
	for (int i = 0; i < SIZE; i++)
		this->_materia[i] = NULL;
}

Character::Character(const Character &character)
{
	*this = character;
}

Character::~Character()
{
	for (int i = 0; i < SIZE; i++)
		delete this->_materia[i];
}

Character &Character::operator=(const Character &character)
{
	this->_name = character.getName();
	for (int i = 0; i < SIZE; i++)
	{
		if (this->_materia[i])
			delete this->_materia[i];
		if (character._materia[i])
			this->_materia[i] = character._materia[i]->clone();
	}
	return (*this);
}

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

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx < SIZE)
	{
		this->_materia[idx] = NULL;
	}
	else
		std::cout << "Unequip Error: Invalid index" << std::endl;
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx > SIZE)
		std::cout << "Use Error: Invalid index" << std::endl;
	else
	{
		if (this->_materia[idx] != NULL)
			this->_materia[idx]->use(target);
		else	
			std::cout << "Empty" << std::endl;
	}
}
