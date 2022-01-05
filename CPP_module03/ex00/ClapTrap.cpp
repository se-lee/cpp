#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	this->_Name = name;
	this->_Hitpoint = 10;
	this->_EnergyPoint = 10;
	this->_AttackDamage = 0;
	std::cout << "string constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "destructor called" << std::endl;
}

void	ClapTrap::attack(std::string const &target)
{
	std::cout << "ClapTrap [" << this->_Name << "] attack [" << target << "], causing ["
				<< this->_AttackDamage << "] points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	this->_EnergyPoint -= amount;
	std::cout << "ClapTrap [" << this->_Name << "] got damage by [" << amount << "] points. "
			<< "Remaining energy point is: [" << this->_EnergyPoint << "]" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	this->_EnergyPoint += amount;
	std::cout << "ClapTrap [" << this->_Name << "] gained [" << amount <<
	"] energy points and has been repaired " << std::endl;
}
