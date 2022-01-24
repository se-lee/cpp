#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	this->_Name = "(name)";
	ClapTrap::_Name = this->_Name + "_clap_name";
	this->_Hitpoint = FragTrap::_Hitpoint;
	this->_EnergyPoint = 50;
	this->_AttackDamage = FragTrap::_AttackDamage;
	std::cout << "<" << this->_Name << "> DiamondTrap Default constructor is called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &diamondtrap)
{
	*this = diamondtrap;
	std::cout << "<" << this->_Name << "> DiamondTrap Copy constructor is called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name)
{
	this->_Name = name;
	ClapTrap::_Name = this->_Name + "_clap_name";
	this->_Hitpoint = FragTrap::_Hitpoint;
	this->_EnergyPoint = 50;
	this->_AttackDamage = FragTrap::_AttackDamage;
	std::cout << "<" << this->_Name << "> DiamondTrap String constructor is called" << std::endl;
	std::cout << "hp: " << this->_Hitpoint << "   energy: " << this->_EnergyPoint << "   damage: " << this->_AttackDamage << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "<" << this->_Name << "> DiamondTrap Destructor is called" << std::endl;
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &diamondtrap)
{
	this->_Name = diamondtrap._Name;
	this->_Hitpoint = diamondtrap._Hitpoint;
	this->_EnergyPoint = diamondtrap._EnergyPoint;
	this->_AttackDamage = diamondtrap._AttackDamage;
	return (*this);
}

void	DiamondTrap::whoAmI() const
{
	std::cout << "Who Am I? I am DiamonTrap <" << this->_Name 
		<< "> and my clapTrap name is <" << ClapTrap::_Name << ">" << std::endl;
}
