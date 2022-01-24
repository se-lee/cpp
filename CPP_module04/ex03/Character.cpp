#include "Character.hpp"

Character::Character(): _name("(name)")
{
	// std::cout << "[Character Default constructor called]" << std::endl;
	for (int i = 0; i < SIZE; i++)
		this->_materia[i] = NULL;
}

Character::Character(std::string name): _name(name)
{
	std::cout << "New character appeared [" << this->_name << "]" << std::endl;
	for (int i = 0; i < SIZE; i++)
		this->_materia[i] = NULL;
}

Character::Character(const Character &character): _name(character._name)
{
	// std::cout << "[Character Copy constructor called]" << std::endl;
	for (int i = 0; i < SIZE; i++)
		this->_materia[i] = character._materia[i];
}

Character::~Character()
{
	// std::cout << "[Character Destructor called]" << std::endl;
}

Character &Character::operator=(const Character &character)
{
	std::cout << "Character assignment operator" << std::endl;
	this->_name = character.getName();
	for (int i = 0; i < SIZE; i++)
		this->_materia[i] = character._materia[i];
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
			std::cout << "New Materia equipped [" << this->_materia[i]->getType() << "]" << std::endl;
			return ;
		}
	}
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx <= 3)
		this->_materia[idx] = NULL;
	else
		std::cout << "Invalid index" << std::endl;
}

void	Character::use(int idx, ICharacter &target)
{
	this->_materia[idx]->use(target);
}
