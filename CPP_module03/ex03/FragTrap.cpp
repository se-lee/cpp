#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap()
{
	this->_Hitpoint = 100;
	this->_EnergyPoint = 100;
	this->_AttackDamage = 30;
	std::cout << "<" << this->_Name << "> FragTrap Default constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &fragtrap)
{
	*this = fragtrap;
	std::cout << "<" << this->_Name << "> FragTrap Copy constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	this->_Hitpoint = 100;
	this->_EnergyPoint = 100;
	this->_AttackDamage = 30;
	std::cout << "<" << this->_Name << "> FragTrap String constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "<" << this->_Name << "> FragTrap Destructor called" << std::endl;
}

FragTrap	&FragTrap::operator=(const FragTrap &fragtrap)
{
	this->_Name = fragtrap._Name;
	this->_Hitpoint = fragtrap._Hitpoint;
	this->_EnergyPoint = fragtrap._EnergyPoint;
	this->_AttackDamage = fragtrap._AttackDamage;
	return (*this);
}

void	FragTrap::highFivesGuys() const
{
	std::cout << "FragTrap <" << this->_Name << "> Let's high five, guys" << std::endl;
}
