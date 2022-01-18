#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon)
{
	std::cout << "HumanA Constructor called" << std::endl;
}

HumanA::~HumanA()
{
	std::cout << "HumanA Destructor called" << std::endl;
}

void	HumanA::setWeapon(Weapon &weapon)
{
	this->_weapon = weapon;
}

void	HumanA::attack()
{
	std::cout << this->_name << " attacks with his " << this->_weapon.getType() << std::endl;
}
