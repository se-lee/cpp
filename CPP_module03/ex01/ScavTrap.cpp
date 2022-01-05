#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &scavtrap)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = scavtrap;
}

ScavTrap::ScavTrap(std::string name)
{
	this->_Name = name;
	this->_Hitpoint = 100;
	this->_EnergyPoint = 50;
	this->_AttackDamage = 20;
	this->guardGate_mode = false;
	std::cout << "ScavTrap string constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

void	ScavTrap::guardGate(void)
{
	this->guardGate_mode = true;
	std::cout << "ScavTrap [" << this->_Name << "] has entered the Gate Keeper Mode" << std::endl;
}