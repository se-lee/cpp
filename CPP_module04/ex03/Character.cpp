#include "Character.hpp"

Character::Character(): _name("(name)")
{
	std::cout << "[Character Default constructor called]" << std::endl;
	for (int i = 0; i < SIZE; i++)
		this->_materia[i] = new AMateria("type");
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

Character &Character::operator=(const Character &character)
{
	this->_name = character._name;
	for (int i = 0; i < SIZE; i++)
		this->_materia[i] = character._materia[i];
	return (*this);
}

void	Character::equip(AMateria *m)
{
	for(int i = 0; i < SIZE; i++)
	{
		if (this->_materia[i] == NULL)
		{
			this->_materia[i] = m;
			break;
		}
	}
}

void	unequip(int idx)
{

}