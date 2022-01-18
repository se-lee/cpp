#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
	std::cout << "HumanB Constructor called" << std::endl;
}

HumanB::~HumanB()
{
	std::cout << "HumanB Destructor called" << std::endl;
}

void	HumanB::attack()
{
	std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}
