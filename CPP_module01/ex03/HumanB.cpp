#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL)
{
	std::cout << "HumanB Constructor called" << std::endl;
}

HumanB::~HumanB()
{
	std::cout << "HumanB Destructor called" << std::endl;
}

void	HumanB::attack()
{
	if (this->_weapon == NULL)
		std::cout << this->_name << " does not have a weapon" << std::endl;
	else
		std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}
